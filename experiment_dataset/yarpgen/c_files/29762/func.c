/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29762
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)7)) % (((/* implicit */int) (signed char)122)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)112))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_1 [i_0] [i_1 + 3])) : (var_3))))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22755))) : (288230376151711744LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)42780)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(3138420248U))))))));
                }
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_22 ^= ((/* implicit */short) 120487959);
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 + 4] [i_0]))))), ((unsigned short)65517)));
                    arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (~(var_17))))) ? (((int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned char) 4020728651U)))));
                }
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))))) >> (((((((/* implicit */long long int) 120487959)) ^ (var_6))) >> (((144115188075855872LL) - (144115188075855811LL)))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 4]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 1])) ? (var_2) : (((/* implicit */int) arr_11 [i_5] [i_1 + 1] [i_1 + 4] [i_1 + 4]))))))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_4 [i_5] [16U] [i_4])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 3] [i_1 + 3] [i_6])))))) - (((int) ((((/* implicit */int) (signed char)103)) < (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 4; i_7 < 15; i_7 += 4) 
                    {
                        var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_7])))))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */int) -3596669163670806012LL);
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_17)) != (var_6))))));
                            var_29 = ((/* implicit */unsigned int) (_Bool)1);
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-(arr_4 [i_0] [i_1 + 2] [i_0]))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (arr_24 [i_0] [i_1] [i_1] [i_1] [i_7 - 2] [i_7 - 2] [i_9])));
                            var_32 += ((/* implicit */unsigned int) ((((/* implicit */int) ((var_16) < (((/* implicit */unsigned long long int) 3596669163670806011LL))))) % (((/* implicit */int) arr_26 [i_0] [i_1 + 3] [i_4] [i_4] [i_7] [i_9]))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            arr_30 [i_0] = ((/* implicit */int) ((arr_28 [i_1 + 3] [i_7 - 4] [i_4]) < (((/* implicit */int) var_14))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_7 - 2] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551615ULL)));
                            arr_31 [i_0] [i_0] [5] [i_7] [i_7 - 3] = ((/* implicit */unsigned int) ((1198173030U) < (arr_1 [i_1 - 1] [i_7 + 1])));
                            var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) (signed char)106)) : (arr_2 [i_7])));
                        }
                    }
                }
            }
        } 
    } 
    var_35 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) 753261215)) | (((var_18) | (0ULL)))))));
}
