/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49485
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_13 -= ((/* implicit */signed char) var_5);
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) -1)), (2074888850U)));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((501460783) / (((/* implicit */int) (short)24171)))) * (((arr_3 [i_1]) / (((/* implicit */int) var_7))))))) : (min((2961351940U), (((/* implicit */unsigned int) (short)22098))))));
        var_14 += ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_3 [i_1])), (arr_4 [i_1] [i_1])));
    }
    for (long long int i_2 = 4; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_15 |= ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)86)), ((short)22071)))), (1333615342U)));
            var_16 = ((/* implicit */unsigned int) max((var_16), (2961351933U)));
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4])) ? (arr_17 [i_4 + 3] [(_Bool)1] [(_Bool)1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60863)))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_2 + 1] [i_3 + 1] [i_3] [i_2] [i_4 - 1])) - (((/* implicit */int) arr_16 [i_2 - 1] [i_3 + 1] [i_4] [i_2] [i_4 - 1]))));
                }
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) ((unsigned short) var_5))) - (20982)))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_6 [i_2 + 1])) / (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [(unsigned char)6] [i_2] [i_2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (short)9310)) << (((((/* implicit */int) var_6)) - (65))))) <= (((/* implicit */int) min(((short)14336), (arr_21 [i_2] [i_2] [i_2] [i_6] [i_7])))))))) : (((2961351954U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4 + 2] [i_2] [i_4])))))));
                            var_21 = ((/* implicit */unsigned char) ((unsigned short) 18446744073709551615ULL));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_1)))) ? ((((!(((/* implicit */_Bool) -2LL)))) ? (((((/* implicit */_Bool) (short)-22098)) ? (arr_11 [i_7] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_2]))))) : (((/* implicit */long long int) ((1333615348U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7])))))))) : (((long long int) (~(var_4))))));
                            var_23 = max((9223372036854775807LL), (((((/* implicit */_Bool) max((arr_21 [i_2] [i_3] [i_6] [i_6] [i_7]), (((/* implicit */short) var_10))))) ? (var_1) : (((/* implicit */long long int) (~(1333615335U)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) (unsigned char)224);
            }
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((short) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)8] [i_2 - 4] [(short)8])))))))));
        }
        var_26 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) / (arr_19 [i_2] [i_2 - 4] [i_2] [i_2] [i_2])))));
    }
    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        var_27 = ((/* implicit */short) (((~((~(252516654U))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8] [(short)0])))));
        var_28 += ((/* implicit */unsigned int) ((var_9) >> (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_11))) == (var_0))), (arr_20 [i_8] [i_8] [i_8] [i_8]))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        var_29 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */short) ((_Bool) (short)14915))), (((short) arr_28 [i_9]))))), (max((((/* implicit */long long int) arr_26 [i_9])), (arr_28 [i_9])))));
        var_30 = ((/* implicit */unsigned char) -1395761825);
    }
    /* vectorizable */
    for (short i_10 = 1; i_10 < 15; i_10 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_10 - 1])) + (((/* implicit */int) arr_29 [i_10]))));
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((((/* implicit */int) (signed char)-104)) + (2147483647))) >> (((var_0) - (5208444461158520190LL))))))));
            var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> ((-(((/* implicit */int) (unsigned short)0))))));
            var_34 = ((/* implicit */int) var_1);
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1333615356U))))));
        }
        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_29 [i_10])) : (((/* implicit */int) (short)-21104))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_32 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_32 [i_10] [i_12] [i_10]))));
                arr_37 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_10 - 1])) ? (((/* implicit */int) arr_35 [i_10 - 1])) : (((/* implicit */int) arr_35 [i_10 + 1]))));
                var_38 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((-2312606009365315946LL) + (2312606009365315954LL))) - (8LL)))));
                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (+(((11664737145345933896ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30980))))))))));
                var_40 -= ((/* implicit */unsigned int) arr_30 [i_13 - 1]);
            }
            for (unsigned char i_14 = 1; i_14 < 13; i_14 += 3) 
            {
                var_41 = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_10] [i_14 + 3] [i_14])) / (((/* implicit */int) arr_39 [i_14] [i_14 + 3] [i_14]))));
                var_42 &= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_38 [(unsigned char)10] [i_14 - 1] [i_10 + 1] [i_12])) : (((/* implicit */int) arr_38 [i_10] [i_14 - 1] [i_10 - 1] [i_12])));
            }
            var_43 += ((/* implicit */short) ((((/* implicit */int) ((signed char) -7386431532251096245LL))) * (((/* implicit */int) ((_Bool) arr_32 [i_12] [i_12] [i_12])))));
            var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_9)));
        }
        var_45 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_10]))));
    }
    for (int i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        var_46 *= ((/* implicit */unsigned char) arr_38 [i_15] [i_15] [i_15] [(_Bool)1]);
        var_47 |= ((/* implicit */_Bool) (signed char)76);
    }
    var_48 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (short)27411)) : (((/* implicit */int) (unsigned char)255))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (var_9)))));
}
