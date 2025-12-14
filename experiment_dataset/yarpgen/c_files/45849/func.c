/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45849
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
    var_20 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) arr_2 [i_0]);
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_2] = ((var_19) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((var_18), (((/* implicit */short) arr_17 [i_2] [i_3]))))), (min((3829130265975526010LL), (((/* implicit */long long int) (unsigned char)42))))));
                                arr_18 [i_4] [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                arr_19 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) arr_13 [i_1 - 1] [i_1 - 1] [i_3] [i_1] [i_3] [i_3 + 3]);
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_1 - 1])), (((((/* implicit */_Bool) 3962963936U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-22))))))) / (min((((/* implicit */unsigned int) var_12)), (var_9)))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)254))))) != (max((max((801674276U), (((/* implicit */unsigned int) var_18)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5462653717014457361LL)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)126)))))))));
                }
                for (unsigned char i_5 = 4; i_5 < 17; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_28 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) var_11);
                        /* LoopSeq 2 */
                        for (signed char i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            arr_33 [i_0] [i_1] = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned int) max((arr_26 [i_0] [i_1] [i_7 + 3] [i_7] [i_1 + 1]), (arr_26 [i_0] [i_1] [i_7 + 3] [i_6] [i_1 + 2]))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min(((signed char)-22), ((signed char)-22))))));
                            arr_34 [i_0] [i_0] [i_1] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) var_9);
                        }
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_17 [i_1] [i_0]), (arr_17 [i_0] [i_0])))), (((((/* implicit */int) arr_17 [i_1] [i_0])) << (((((/* implicit */int) arr_17 [i_1] [i_0])) - (228)))))));
                            arr_37 [i_0] [i_5] [i_5] [i_6] [i_8] &= ((/* implicit */_Bool) arr_31 [i_8] [i_6] [i_0]);
                        }
                    }
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((signed char) ((unsigned int) (signed char)21)))));
                        arr_41 [i_9] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) 1383656246910833779LL);
                        arr_42 [i_9] [i_1] [i_5] [i_9] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_25 [i_0] [i_0] [i_1] [i_1] [i_5] [i_9]), (var_6)))), (max((17717075304260209290ULL), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))));
                        var_27 += ((/* implicit */short) min((((/* implicit */unsigned int) arr_35 [i_5 + 3] [i_5] [i_5] [i_5] [i_5 - 1])), (arr_15 [i_5 - 3] [i_5] [i_5] [i_5] [i_0])));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 2; i_10 < 17; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((arr_27 [i_5 + 3] [i_5 - 1] [i_1 + 2] [i_1 + 3] [i_1 - 1]) ^ (((/* implicit */unsigned long long int) var_2)))))));
                        arr_45 [i_0] [i_0] [i_1] [i_5] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_10 - 2] [i_5 - 4] [i_1 + 3]))));
                    }
                    var_29 = ((/* implicit */unsigned int) var_5);
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_3))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_0] [i_1 + 3] [i_1 + 1] [i_11] [i_11]) : (arr_15 [i_0] [i_1 + 3] [i_1 + 1] [i_11] [i_11])));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (short i_13 = 3; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_32 [i_13] [i_13] [i_13 - 1] [i_1 + 2])) : (((/* implicit */int) arr_50 [i_13 - 3] [i_13] [i_13] [i_13] [i_13 - 3] [i_1 + 3])))))));
                                var_33 = ((/* implicit */unsigned char) ((arr_30 [i_0] [i_1 - 1] [i_11] [i_12] [i_13]) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) arr_30 [i_12] [i_12] [i_11] [i_0] [i_13]))));
                                arr_53 [i_13] = ((/* implicit */signed char) arr_48 [i_0] [i_1] [i_12] [i_13]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (signed char)127))));
                    arr_56 [i_0] [i_14] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_48 [i_0] [i_0] [i_14] [i_1 + 3]))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 3; i_15 < 19; i_15 += 1) 
                    {
                        for (long long int i_16 = 2; i_16 < 19; i_16 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 3897432706207383274ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (729668769449342326ULL)));
                                var_36 = ((/* implicit */_Bool) arr_4 [i_16] [i_14]);
                                arr_63 [i_15] [i_1] = ((/* implicit */_Bool) ((arr_49 [i_0] [i_1] [i_15] [i_16]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_0])))));
                                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */int) (signed char)27)) % (((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
