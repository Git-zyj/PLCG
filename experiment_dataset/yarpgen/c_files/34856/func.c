/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34856
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
    var_17 = ((/* implicit */unsigned long long int) var_5);
    var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */int) var_14)) <= (((/* implicit */int) (short)0)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_10)) ? (var_6) : (var_15)))))), ((-(((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_4) ? (var_6) : (var_15)))) ? (var_1) : (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)))) ? (var_8) : (((/* implicit */int) ((unsigned char) var_15)))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(min((var_2), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */int) var_4)) != (var_8)));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] [i_1 - 1] |= ((/* implicit */int) min((((/* implicit */unsigned int) var_0)), (((3399618139U) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) + (var_8))))))));
            arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) != (arr_1 [i_0] [i_0]))) ? (3399618139U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */long long int) var_16))))))))) + (arr_2 [i_0])));
            arr_7 [i_1] = (-(((/* implicit */int) (short)2)));
            var_22 ^= ((/* implicit */unsigned char) var_5);
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_11 [(unsigned short)15] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)213)) - (213))))))))));
            var_23 += ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_4)) : (arr_1 [i_0] [i_0]))))))), ((~(((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0])))))));
        }
        arr_12 [i_0] = ((/* implicit */short) max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0])))) ? (((/* implicit */int) (short)0)) : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((var_13) < (((/* implicit */int) (short)0))))), ((signed char)-39))))) - (max((((/* implicit */long long int) 0)), (arr_0 [i_3 - 1] [i_3])))));
        var_24 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3])))))) != (((arr_9 [i_3 + 1] [i_3 - 3]) - (arr_9 [i_3 + 2] [i_3 - 2])))));
    }
    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) max((min((arr_18 [i_4 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (-1375783373) : (((/* implicit */int) (short)0))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_4 + 4])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                var_25 += ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4] [i_5])) && ((!(((/* implicit */_Bool) var_13))))));
                arr_24 [i_4 + 3] [i_5] [i_4 + 3] [i_6 - 1] = ((/* implicit */_Bool) ((signed char) arr_22 [i_4] [i_5] [i_6 + 1]));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_7))));
            }
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) var_1);
                arr_27 [i_7] [i_7] = (+(((/* implicit */int) (short)-1)));
            }
            for (signed char i_8 = 2; i_8 < 20; i_8 += 1) 
            {
                arr_30 [(unsigned char)12] [i_8] [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned long long int) arr_18 [i_4 - 2]);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        {
                            arr_38 [i_4] [i_4] [i_4] [i_4 - 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? (arr_37 [i_4] [i_4] [i_8 + 2] [i_4] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -1753153450))))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_10])) || (((/* implicit */_Bool) arr_26 [(short)17] [i_10 + 3])))))) != (arr_28 [i_8] [i_5] [i_4]))))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_32 [i_4] [i_5] [i_5] [i_4] [i_4] [i_4]))));
            arr_39 [i_4] [i_5] [i_4] = ((/* implicit */int) ((short) arr_20 [i_4] [i_4 - 1]));
            arr_40 [i_4] &= ((unsigned int) arr_26 [i_4 - 2] [i_5]);
            var_30 *= ((/* implicit */unsigned long long int) arr_29 [i_4] [i_4] [(signed char)16]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) 
            {
                var_31 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) (signed char)-98)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (1488574478U)))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [19] [i_12 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [0] [i_12 - 2]))) : (arr_22 [i_12] [i_12 - 1] [i_12 - 1])));
            }
            for (unsigned char i_13 = 3; i_13 < 20; i_13 += 1) 
            {
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_1))));
                arr_52 [i_11] = ((/* implicit */long long int) arr_22 [i_4 + 1] [i_4 + 1] [i_13 + 1]);
            }
            arr_53 [i_4] [i_11] = ((/* implicit */int) var_12);
            arr_54 [i_4 - 1] [i_11] = ((/* implicit */int) ((unsigned short) ((int) (_Bool)1)));
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) var_13))));
        }
        arr_55 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((-1561704561) - (((/* implicit */int) arr_48 [i_4] [i_4 + 3] [i_4 - 2] [i_4 - 2]))))), (((long long int) ((((/* implicit */int) arr_43 [i_4] [i_4] [i_4])) < (((/* implicit */int) var_14)))))));
        arr_56 [i_4 + 4] = ((/* implicit */signed char) arr_17 [i_4] [i_4]);
    }
}
