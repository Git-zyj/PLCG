/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25548
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
    var_16 ^= ((/* implicit */unsigned int) min((min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))))), (((signed char) (short)-10924)))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_5))) || ((!(((/* implicit */_Bool) (signed char)-90)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */short) arr_6 [i_3] [i_3] [(unsigned char)8]);
                        var_18 = (~(6617347710146693733ULL));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((unsigned char) (!(((/* implicit */_Bool) min((var_2), (var_2))))));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)12479)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (3377260057U)));
                        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)99)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [16U] [i_1] [i_1] [i_4] [i_4] [i_1])) ? (var_15) : (-1022627109))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */short) ((unsigned short) var_13));
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_0]))));
                            arr_20 [i_6] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_15);
                        }
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_24 |= ((/* implicit */long long int) min((max((((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_0] [i_0])), ((+(((/* implicit */int) (signed char)32)))))), (((/* implicit */int) (short)0))));
                            var_25 = ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_8 [i_7] [i_2] [i_2] [i_0])) ? (((/* implicit */int) (unsigned short)35548)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) < (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0])) != (((/* implicit */int) min(((unsigned char)254), (((/* implicit */unsigned char) (signed char)54))))))))));
                            arr_23 [i_0] [i_5] [i_0] [i_1] [i_0] [i_0] [(unsigned short)16] = ((/* implicit */unsigned long long int) ((short) arr_21 [(short)10] [i_5] [i_0] [i_1] [i_0]));
                        }
                        var_26 -= ((/* implicit */short) ((long long int) ((unsigned short) (unsigned short)22183)));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))));
                        var_28 = ((/* implicit */signed char) ((unsigned short) arr_12 [(signed char)1] [(signed char)1] [i_2] [i_8]));
                        var_29 += ((/* implicit */long long int) arr_7 [i_8]);
                    }
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2])), (((arr_19 [i_2] [i_0] [i_2] [i_0] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [8ULL]))))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (short)17996)), (arr_25 [i_0] [(unsigned short)10] [i_2] [i_0]))))))));
                        var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((arr_8 [i_9] [i_9] [i_2] [i_9]) / (var_3))))));
                            var_32 ^= ((/* implicit */unsigned short) ((_Bool) (-(18446744073709551615ULL))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) 1699255644U);
                            arr_37 [i_0] [i_0] [i_1] [i_2] [i_9] [i_11] = ((/* implicit */unsigned long long int) arr_15 [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1]);
                        var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [(signed char)6])) / (((/* implicit */int) (unsigned char)253))));
                    }
                    arr_41 [i_0] [i_1] = ((/* implicit */_Bool) ((short) arr_17 [i_0] [i_1] [i_0] [i_1] [i_0]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                var_36 = ((/* implicit */signed char) max((6617347710146693758ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                var_37 = ((/* implicit */short) ((min((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_38 [i_13] [i_13] [i_14] [i_14] [i_14])) : (((/* implicit */int) (unsigned char)11))))), (min((arr_4 [i_13] [i_13]), (((/* implicit */long long int) var_10)))))) + (((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)110)))))))));
                arr_47 [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-10121)) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) arr_2 [i_13])))))))) ? (((-7682586626671400076LL) / (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-97)), (2595711651U)))))) : (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_14] [i_13]) : (((/* implicit */long long int) 3925144258U))))));
            }
        } 
    } 
}
