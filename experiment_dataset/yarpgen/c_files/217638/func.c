/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217638
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_11))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] [i_2 - 1] [i_1] [i_2] = ((/* implicit */unsigned short) (~(arr_7 [(unsigned char)1] [i_2] [i_2] [(short)8])));
                        arr_12 [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((max((arr_2 [i_0] [0]), (((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [(signed char)13])) > (((/* implicit */int) (unsigned short)1830)))))))) >= (max((((((/* implicit */_Bool) var_10)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-35))))), (((/* implicit */long long int) var_7))))));
                        var_18 *= ((/* implicit */unsigned long long int) (~(-9223372036854775807LL)));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_1]))))));
                            var_20 = ((/* implicit */unsigned long long int) var_1);
                        }
                        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            arr_17 [i_0 + 1] [i_0 + 1] [i_2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37712)))));
                            arr_18 [i_0] [i_2] [i_2] [6LL] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_0] [i_0] [i_0 + 2]))) > (9223372036854775807LL)));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (min((((/* implicit */unsigned long long int) (signed char)-29)), (15795432567249565272ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        }
                    }
                } 
            } 
        } 
        var_22 -= ((unsigned long long int) var_2);
        arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19008)) ? (((/* implicit */unsigned long long int) 0)) : (5227357744171826680ULL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_1)) : (var_6))) / (((/* implicit */unsigned long long int) var_0))));
            arr_23 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4655518431658085196LL)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)24)) : (var_7)))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
        {
            arr_27 [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))) & (((/* implicit */long long int) arr_24 [i_0 - 2] [i_7] [i_7]))));
            arr_28 [i_7] = ((/* implicit */unsigned char) 9223372036854775807LL);
        }
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19000))) / (min((((/* implicit */unsigned long long int) (+(var_1)))), (((((/* implicit */_Bool) 4655518431658085178LL)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0])))))))));
            var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20438)) || (((/* implicit */_Bool) 18446744073709551615ULL))))), (arr_9 [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_0 - 2] [i_0 + 2])));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        var_26 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3)))) ? (((((arr_16 [(signed char)3] [i_9] [i_9] [i_9]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_10 [(unsigned char)4] [i_9] [i_9])))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9])))))));
        arr_34 [i_9] = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) ^ (9223372036854775807LL)));
        arr_35 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_30 [i_9] [i_9] [i_9]) != (arr_30 [i_9] [i_9] [i_9])))) == (((/* implicit */int) var_3))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */int) var_4)), (min((((/* implicit */int) (unsigned char)146)), ((~(((/* implicit */int) (signed char)28))))))));
        var_27 = ((/* implicit */unsigned long long int) (((((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_0)))) && (((/* implicit */_Bool) ((arr_32 [i_9]) << (((((/* implicit */int) arr_13 [i_9] [i_9] [2] [i_9] [(signed char)6] [i_9])) - (246)))))))))) : (((((/* implicit */_Bool) ((arr_20 [(unsigned char)14] [(_Bool)1] [i_9]) + (var_6)))) ? (((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_9] [i_9] [i_9] [i_9])) != (var_12)))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        var_28 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)18997))));
        arr_39 [5ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_10 + 1] [i_10])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_20 [i_10 + 1] [i_10 + 1] [i_10 + 1]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_10])) & (((/* implicit */int) (signed char)-91)))))));
        arr_40 [i_10 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)47558)) <= (((/* implicit */int) var_8))))) % (var_7)));
        arr_41 [i_10] = ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (short)15429)) - (15412)))))));
        arr_42 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? ((-9223372036854775807LL - 1LL)) : (var_0)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) var_7)) : (arr_16 [(unsigned short)12] [i_10] [i_10 + 1] [i_10]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [(short)6])))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        var_29 *= ((/* implicit */unsigned char) var_1);
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) (unsigned short)16368)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6)))))) ? (arr_32 [i_11]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-23244))))) ? (((/* implicit */int) min(((short)18997), (var_3)))) : (((/* implicit */int) ((short) var_8))))))));
    }
}
