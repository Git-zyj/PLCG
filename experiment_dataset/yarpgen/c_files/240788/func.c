/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240788
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14)) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))));
        var_13 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (17563301060024250333ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((_Bool) 739993900));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = min((((/* implicit */unsigned int) (_Bool)1)), (((((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28))) : ((-(0U))))));
        var_14 = ((/* implicit */unsigned int) (unsigned short)14);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) 524286)) ? (-302421899) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) arr_8 [i_2] [i_1])) : (arr_0 [i_2 - 1])));
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                arr_11 [i_1] = ((/* implicit */_Bool) arr_10 [i_1] [i_2]);
                arr_12 [i_1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)4661))) : (-4961506864172835032LL)))) ? (((((/* implicit */_Bool) (~(arr_9 [i_1] [i_2] [i_3])))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_2))) : (((/* implicit */unsigned long long int) 129954064)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-12118)))))));
                arr_13 [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
            }
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_16 += ((/* implicit */unsigned int) (~(1983953878612993170ULL)));
                    var_17 = ((/* implicit */_Bool) 3828491325002505258LL);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2 + 1] [i_4] [i_5])) ? (-524310) : (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) var_5)) ? (arr_14 [i_2 - 2] [i_2 - 2] [i_4] [i_4]) : (arr_8 [i_2 - 1] [i_2 - 1])))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_0 [i_6]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) + (18446744073709551615ULL)));
                        var_21 -= ((/* implicit */long long int) (signed char)-4);
                        var_22 += ((/* implicit */unsigned short) var_2);
                        var_23 -= ((/* implicit */unsigned long long int) ((long long int) ((arr_17 [i_4] [i_2 - 2] [i_2] [i_2] [i_2 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_4] [i_2 - 2] [i_2] [i_2] [i_2 + 1])))));
                    }
                }
                for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    arr_27 [i_4] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((2754195837U) > (((/* implicit */unsigned int) var_9))))))) : ((-((-(var_1)))))));
                    var_24 -= (((_Bool)1) && (((/* implicit */_Bool) -9187737539473139254LL)));
                }
                var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431LL)) ? (((/* implicit */unsigned long long int) var_5)) : (0ULL)))) ? (((/* implicit */long long int) arr_21 [i_4] [i_2 + 1] [i_4] [i_4] [i_2 - 1])) : (var_0)))));
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (short)1126))));
                var_27 ^= ((/* implicit */_Bool) arr_8 [i_1] [i_2]);
            }
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                arr_30 [i_9] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_2] [i_9]))) : (var_0)));
                arr_31 [i_2] [i_2] [i_2] [i_9] = (((!(((/* implicit */_Bool) (signed char)-27)))) ? (((((/* implicit */_Bool) ((var_6) / (var_5)))) ? (((/* implicit */int) (unsigned short)53504)) : (((((/* implicit */int) (unsigned short)21979)) >> (((((/* implicit */int) (short)-1126)) + (1154))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                /* LoopSeq 3 */
                for (signed char i_10 = 1; i_10 < 8; i_10 += 2) 
                {
                    arr_34 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) (_Bool)1))));
                    var_28 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)1285)) : (arr_4 [i_1]))), (((arr_4 [i_1]) / (((/* implicit */int) var_11)))));
                    arr_35 [i_1] [i_1] [i_1] [i_9] = (-((~(arr_4 [i_1]))));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_22 [i_10] [i_10] [i_9] [i_2] [i_2] [i_1] [i_1])), (((unsigned long long int) arr_26 [i_10] [i_2])))))));
                    var_30 *= 16413562389438261013ULL;
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_31 = ((/* implicit */short) 4294967295U);
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) -33554431LL))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)43)))))));
                }
                for (int i_12 = 1; i_12 < 9; i_12 += 4) 
                {
                    var_34 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_21 [i_12] [i_12] [i_12] [i_12 - 1] [i_12])))) ? (((((/* implicit */_Bool) arr_21 [i_12] [i_12] [i_12] [i_12 - 1] [i_12])) ? (arr_21 [i_12] [i_12] [i_12] [i_12 - 1] [i_12]) : (arr_21 [i_12] [i_12] [i_12] [i_12 - 1] [i_12]))) : (arr_21 [i_12] [i_12] [i_12] [i_12 - 1] [i_12])));
                    var_35 = ((/* implicit */unsigned short) -33554423LL);
                }
                var_36 -= ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) ((arr_42 [i_1] [i_1] [i_2] [i_9]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (2276936408U)))));
            }
            for (unsigned short i_13 = 1; i_13 < 9; i_13 += 3) 
            {
                var_37 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)1) ? (arr_26 [i_1] [i_2]) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned int) 524275)) : (var_10)))));
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_10))));
            }
        }
    }
    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) -1703863042))));
}
