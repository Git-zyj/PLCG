/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36600
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (unsigned char)151))))), (12212459558881793940ULL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_15 = arr_1 [i_2 - 1];
                            var_16 = ((/* implicit */signed char) (-(max((min((((/* implicit */int) arr_1 [i_3 + 1])), (arr_8 [(unsigned short)14] [3ULL]))), (arr_11 [i_3 + 1] [i_3] [i_3 - 4] [i_3 + 2] [i_3])))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_11 [i_3 + 1] [(unsigned short)10] [12] [i_2 + 1] [i_1]), (arr_13 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3] [(unsigned char)6] [i_3])))) ? (((/* implicit */unsigned int) min((arr_12 [i_2 + 1] [i_1] [i_0] [(unsigned short)3] [i_3 + 1]), (arr_13 [i_2 + 1] [i_1] [i_2 + 1] [i_3] [i_3 - 4] [i_1])))) : (((((/* implicit */_Bool) 2627982176128929507ULL)) ? (321815128U) : (3700960895U)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) -5428673080040045593LL);
                    arr_18 [i_1] [i_4] = ((/* implicit */unsigned short) max((321815128U), (((/* implicit */unsigned int) var_6))));
                    arr_19 [(signed char)1] [1ULL] [8] [i_4] = var_9;
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((max((594006421U), (((/* implicit */unsigned int) ((int) var_9))))), (((/* implicit */unsigned int) max((arr_8 [i_0] [i_1]), (((/* implicit */int) var_12))))))))));
                }
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((arr_13 [i_5] [6U] [i_5] [i_1] [i_0] [i_0]), (((/* implicit */int) (unsigned char)92))))) | ((-(arr_14 [i_0] [i_1] [i_5])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_4);
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_29 [i_0] [(unsigned char)6] [i_5] [i_6] [(short)14] [i_7 - 1] = ((/* implicit */int) var_5);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_12 [i_7 + 2] [i_7 + 2] [i_6 - 1] [i_6 + 2] [(unsigned char)8])) : (max((((/* implicit */unsigned int) arr_13 [i_6 - 1] [(short)2] [i_6 - 1] [(unsigned char)16] [15] [i_6])), (min((((/* implicit */unsigned int) var_7)), (3506219106U)))))));
                            arr_30 [i_0] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_13 [i_7 + 1] [i_7 + 1] [i_6] [i_6 + 1] [0] [12ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : ((((-(arr_7 [i_0] [i_0] [i_5] [i_6]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_7 + 1]))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [14] [(unsigned short)13] [7LL] [i_6] [i_5] [i_6])) ? (1817754212) : (1519806836)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((3973152183U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_12))));
                        }
                        var_25 |= ((/* implicit */unsigned short) (-((((_Bool)1) ? (((((/* implicit */int) var_0)) + (1719544435))) : (arr_3 [i_0] [i_6 + 2])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-5428673080040045593LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                        var_27 |= ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1] [(unsigned char)16] [9LL]) == (var_5)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_26 [6] [i_10] [i_5] [i_5] [16LL])))))))));
                            var_29 -= ((/* implicit */int) ((((var_5) % (((/* implicit */unsigned long long int) var_4)))) >= (arr_0 [i_0] [i_0])));
                        }
                        for (unsigned short i_11 = 3; i_11 < 18; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (unsigned short)31551))));
                            arr_43 [i_0] [i_0] [i_1] [(unsigned char)5] [i_9] [i_5] = ((/* implicit */int) ((unsigned long long int) 1133048093747718953LL));
                            arr_44 [i_0] [i_0] [i_1] [i_5] [i_5] [i_9] [i_1] |= ((/* implicit */unsigned int) var_11);
                        }
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((unsigned long long int) arr_3 [i_0] [i_0]))));
                            var_32 = ((/* implicit */unsigned long long int) (unsigned short)64805);
                            var_33 = ((/* implicit */unsigned char) (-(arr_25 [i_5] [i_1])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 3; i_13 < 19; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2120422149))));
                            arr_51 [i_1] [i_5] [15] [i_9] = ((/* implicit */unsigned short) 321815112U);
                            var_35 = ((/* implicit */int) arr_35 [1LL] [i_0] [(unsigned short)14] [i_5] [i_9] [i_13 - 3]);
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_32 [i_0] [(unsigned char)15] [i_5] [i_9] [i_13 + 1]))));
                        }
                    }
                    arr_52 [i_0] [i_5] [7] = ((/* implicit */_Bool) max((min((arr_46 [i_5] [i_5] [i_5] [i_1] [i_0] [16U]), (arr_46 [i_5] [i_1] [11ULL] [i_0] [(unsigned char)6] [i_0]))), (((/* implicit */unsigned long long int) (!(var_0))))));
                }
                arr_53 [i_0] [4LL] = ((/* implicit */_Bool) arr_22 [(unsigned short)6] [i_1]);
            }
        } 
    } 
    var_37 = ((/* implicit */int) (-((~((-(3708557165U)))))));
}
