/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29868
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 6; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */int) arr_3 [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 2]))) : (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_12)))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((((/* implicit */unsigned long long int) var_9)), (var_7))))) : (((/* implicit */unsigned long long int) (+(arr_2 [i_0 + 1]))))))));
                var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3964682531U)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) var_10))))) ? (((2861525055957503963LL) - (((/* implicit */long long int) 16775168U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0 + 4]) : (((/* implicit */int) var_2)))))));
                                arr_14 [i_0] [i_0 + 2] [i_1] [i_0] [i_2] [i_3] [8] = ((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_0 - 1]);
                                var_22 = ((/* implicit */unsigned short) ((int) 6ULL));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                }
                for (unsigned char i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (450260932U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759)))));
                    var_25 += ((/* implicit */int) (~(16LL)));
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 8; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 15ULL))));
                        arr_24 [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)197);
                        var_27 = ((/* implicit */unsigned long long int) ((arr_5 [0ULL] [i_1]) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)-73))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2524698244U)) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) (unsigned char)88))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [1U] [1U] [1U] [1U])) - (((((/* implicit */_Bool) 324430350)) ? (var_5) : (((/* implicit */unsigned long long int) var_13))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-81))))) ? ((+(var_0))) : (((/* implicit */long long int) (~(-8)))))))));
                        var_30 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0 + 3])) : ((+(var_11)))));
                    }
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) -1);
                        var_32 = ((/* implicit */unsigned char) var_11);
                        var_33 += ((/* implicit */_Bool) var_4);
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_32 [8ULL] [i_10] [i_9] [i_6] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) -134217728)) ? (3844706381U) : (((/* implicit */unsigned int) (~(var_11)))));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [i_6 + 1] [i_6 + 1] [i_0 - 2]))));
                            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 450260905U)) ? (((/* implicit */long long int) 2147483647)) : (arr_7 [i_0] [i_1] [i_6 + 1] [i_9]))))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0 + 4] [i_1] [i_6] [i_9] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (var_4)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0 + 2])) ? (-1144152617) : (((/* implicit */int) arr_16 [i_11] [(signed char)2]))));
                            var_38 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) : (var_14));
                            var_39 = ((/* implicit */int) var_1);
                        }
                        for (unsigned int i_12 = 1; i_12 < 8; i_12 += 2) 
                        {
                            var_40 ^= (-(arr_12 [i_0 + 1] [i_12 + 2] [(signed char)9] [i_12] [i_12] [i_0 + 1]));
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) / (((/* implicit */int) (unsigned short)65527))))))))));
                        }
                    }
                }
            }
        } 
    } 
    var_42 = var_10;
}
