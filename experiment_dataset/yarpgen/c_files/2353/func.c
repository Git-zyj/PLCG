/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2353
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) arr_0 [i_0]);
                                var_13 = var_7;
                                var_14 = var_8;
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_9 [i_0]))));
                        var_16 = ((/* implicit */short) ((unsigned long long int) (((~(((/* implicit */int) var_10)))) * (((/* implicit */int) arr_10 [i_1] [6LL] [i_1])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_20 [i_1] [i_2] [i_1])))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_11 [i_6] [i_1] [i_1] [i_1] [i_0]))))) ? (max((((/* implicit */unsigned long long int) arr_11 [13] [i_1] [i_1] [i_1] [i_0])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                        var_18 = ((/* implicit */unsigned short) max(((+(arr_7 [i_0] [i_1]))), (min((var_3), (((/* implicit */int) var_9))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (-901249856)))), (6975582026188708722LL))), (min(((~(-6975582026188708722LL))), (((/* implicit */long long int) (short)(-32767 - 1))))))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_7] [i_7] [i_2] [i_1] [i_2]))) ? (max((((/* implicit */int) (_Bool)1)), (-1))) : (arr_12 [i_0] [i_1] [i_1] [i_1] [(short)14] [i_8 - 1] [i_0])));
                        }
                        var_21 = ((/* implicit */int) min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)109))))), (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [3]))) / (arr_23 [(short)4] [i_2] [i_1] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_9])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_7))) : (((/* implicit */unsigned long long int) ((6975582026188708695LL) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0])))))) > (((((/* implicit */_Bool) arr_21 [i_7] [i_1])) ? (arr_21 [i_9] [i_0]) : (arr_21 [i_1] [i_0]))))))));
                        }
                    }
                    for (long long int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        var_24 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_3 [i_10] [(unsigned char)0] [(short)0])), (var_7))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_28 [i_0] [i_1] [18ULL] [i_10 - 1]), (arr_28 [i_1] [i_1] [i_2] [i_10 - 1])))))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((arr_21 [i_10] [i_10 - 1]), (((/* implicit */long long int) (-(arr_22 [i_11] [i_10] [18LL] [i_0] [i_0] [i_0]))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((((/* implicit */long long int) ((arr_2 [i_10 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0])))))), (arr_23 [i_10 + 1] [i_1] [i_2] [i_11 - 1] [i_1]))))));
                            var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_10 [i_1] [i_11 + 1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_11 + 1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_11 + 1] [i_1]))))));
                            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_30 [i_1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_0] [i_1])))));
                            var_29 = ((/* implicit */_Bool) arr_18 [i_2]);
                        }
                        var_30 += ((/* implicit */_Bool) var_5);
                        var_31 = ((/* implicit */_Bool) max((24), (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_10] [i_1] [i_1]))))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_0]))))));
                    }
                    var_32 = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)15006))))));
                    var_33 = ((/* implicit */long long int) arr_20 [i_1] [i_1] [i_1]);
                    var_34 = ((/* implicit */unsigned short) arr_22 [(unsigned char)5] [i_1] [i_2] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_26 [i_12] [i_13] [i_13] [i_12] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_12] [i_13] [i_12] [i_12] [i_12] [i_12] [i_13])) ? (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)-14442)))) : ((-(((/* implicit */int) (unsigned char)0))))))) : ((~(((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    for (short i_15 = 1; i_15 < 12; i_15 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) min((arr_29 [i_12]), (((/* implicit */int) (_Bool)0))));
                            /* LoopSeq 2 */
                            for (short i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                            {
                                var_37 = ((/* implicit */short) ((_Bool) (unsigned char)29));
                                var_38 = ((/* implicit */long long int) arr_28 [i_12] [i_13] [i_12] [i_15]);
                                var_39 += ((short) -1064452728);
                            }
                            for (short i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                            {
                                var_40 = ((/* implicit */short) arr_34 [i_17] [13LL] [i_12] [i_13] [i_12]);
                                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */long long int) (~(min((4294967295U), (((/* implicit */unsigned int) (unsigned char)23))))))) | (min((((/* implicit */long long int) arr_2 [i_15 + 1])), ((-(6975582026188708722LL))))))))));
                            }
                            var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)16)));
                        }
                    } 
                } 
                var_43 = arr_14 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12];
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        for (short i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            {
                                var_44 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)1)), (1064452720)));
                                var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (~((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_6))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
