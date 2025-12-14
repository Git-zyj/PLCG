/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27299
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) var_1);
                /* LoopSeq 4 */
                for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [1U] [i_2] [i_2])) ? ((~(((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_5)))))) : (((/* implicit */int) (((+(((/* implicit */int) arr_2 [(unsigned short)1])))) != (((/* implicit */int) ((unsigned short) var_8))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */short) var_3);
                        var_18 = ((/* implicit */unsigned short) ((_Bool) 10682707225097084985ULL));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 2] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)99))))))))));
                        var_21 += ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 + 1])) == (((/* implicit */int) arr_2 [i_2 - 2]))))) != (((/* implicit */int) (short)32767)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) (-(((long long int) 1073741823))));
                                var_23 = ((/* implicit */short) 3636430987111770235LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_7 [i_7 + 1] [i_7 + 3] [i_2] [i_7 - 2]), (arr_7 [i_7 + 3] [i_7 + 2] [i_2] [i_7 + 2]))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_2] [(unsigned short)11]))) + (((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [(short)11]))));
                                var_26 = ((((/* implicit */unsigned int) 2147483633)) | ((~(2011950913U))));
                                var_27 -= ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */int) ((((((/* implicit */int) arr_21 [(unsigned short)0])) >= (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [14ULL] [0ULL] [i_0]))) : (max((arr_15 [(unsigned char)19]), (((/* implicit */unsigned long long int) var_0))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) max((-2147483633), (-2147483633)));
                                var_30 *= ((/* implicit */unsigned long long int) ((unsigned char) var_2));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) (-(-1073741823)));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [(short)2] [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16641)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (signed char)30)))))));
                }
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                {
                    var_33 = (short)-16635;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_34 = ((/* implicit */int) arr_18 [i_0] [i_1]);
                        var_35 = ((/* implicit */int) arr_21 [i_13]);
                        var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_0] [(signed char)8] [i_12] [10] [i_12] [i_13]))));
                        var_37 &= ((/* implicit */short) var_7);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            var_38 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))));
                            var_39 = ((/* implicit */unsigned char) arr_31 [i_0] [i_0] [i_0] [2U]);
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                        {
                            var_40 = arr_17 [i_0] [i_1] [i_1] [i_12] [(signed char)7] [(signed char)8];
                            var_41 |= ((/* implicit */unsigned short) var_1);
                            var_42 = ((/* implicit */signed char) ((((arr_41 [(short)19] [i_12] [i_14] [i_16]) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_12] [(short)4] [(_Bool)0] [i_16])) : (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */int) arr_24 [i_0] [i_0] [i_14])) - (((/* implicit */int) var_12))))));
                            var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_0] [i_1] [i_12] [i_14] [i_16]))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_14] [(unsigned char)12] [i_17]);
                            var_45 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1] [5U] [(short)14] [(_Bool)1] [i_17] [i_17]))) / (arr_46 [(short)19] [7U] [i_12] [(_Bool)1] [i_14] [i_17])));
                        }
                        var_46 = ((/* implicit */int) arr_34 [(unsigned char)4] [(_Bool)1] [i_1] [1U] [i_12] [i_14]);
                        var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
                    }
                }
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) /* same iter space */
                {
                    var_48 = ((/* implicit */short) ((((unsigned int) (unsigned char)3)) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        for (signed char i_20 = 2; i_20 < 23; i_20 += 2) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(short)19])) * (((/* implicit */int) arr_23 [i_0] [i_0] [i_18] [i_0]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_32 [i_0] [i_0])))), ((~(-1073741814))))))));
                                var_50 = ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned long long int) var_7)), (16685963654363161901ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
    var_52 = ((/* implicit */unsigned short) var_2);
}
