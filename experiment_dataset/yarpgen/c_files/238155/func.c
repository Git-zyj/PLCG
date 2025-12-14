/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238155
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
    var_19 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_13)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_20 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) 1897544045U)))))) : (((((/* implicit */_Bool) 5179374236803302794LL)) ? (1897544047U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                            var_21 ^= ((/* implicit */short) ((signed char) 3556305488U));
                            var_22 = ((/* implicit */int) 2097151U);
                            var_23 = max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32745))) : (2097151U))), (((/* implicit */unsigned int) (~((-2147483647 - 1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) (short)3793);
                            var_25 = ((/* implicit */long long int) var_10);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                            {
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1])))))));
                                arr_19 [i_4] [8U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1])) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (((/* implicit */long long int) 2397423232U))));
                                var_27 = ((/* implicit */long long int) ((unsigned char) arr_14 [i_4 - 1]));
                            }
                            arr_20 [i_0] [i_1] [(short)3] [i_5] = ((/* implicit */unsigned char) arr_7 [i_5] [i_4] [i_1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        for (short i_8 = 1; i_8 < 19; i_8 += 1) 
        {
            {
                arr_27 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))) / (54176046)));
                var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) 2129525921U)) ? (((((/* implicit */_Bool) (unsigned short)16380)) ? (((/* implicit */int) arr_23 [i_8 - 1] [i_7] [i_7])) : (((/* implicit */int) (short)10171)))) : (((2147483647) / (((/* implicit */int) (unsigned short)49183))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_31 [i_7] [i_7] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [i_8]))) | (arr_29 [i_8 + 1] [i_7] [i_7] [i_7])));
                    var_29 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1897544060U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7]))) : (arr_29 [i_9] [i_7] [i_7] [i_7]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9] [i_9] [i_8 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 3; i_11 < 17; i_11 += 4) 
                        {
                            {
                                arr_36 [i_8] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)7996)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_35 [i_7] [i_8] [i_9] [i_10 + 1] [(unsigned short)18] [(unsigned short)1]))))));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (12474876605785148996ULL)));
                                var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_8 - 1] [i_11 - 2] [i_9])) && (arr_33 [i_8 - 1] [i_11 - 2] [i_11 - 2] [i_10 - 1] [i_9] [i_10 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_32 = arr_29 [i_9] [i_8] [i_8] [i_8 + 1];
                                var_33 = 54176046;
                                arr_42 [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) 1897544079U);
                                var_34 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_13] [(unsigned short)0] [i_13 + 2] [i_13]))));
                                var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1271)) && (((/* implicit */_Bool) arr_29 [i_13 + 1] [i_12] [i_12] [i_12 - 2]))));
                            }
                        } 
                    } 
                    arr_43 [i_8] = ((short) arr_34 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]);
                }
                for (long long int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (short)32767))));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) min((arr_37 [i_8 - 1] [(short)6] [i_8 - 1] [i_7]), (((/* implicit */long long int) (signed char)-107)))))));
                }
                for (long long int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) 54176032);
                    arr_49 [i_7] [i_8] [i_7] &= ((/* implicit */unsigned short) 14405018U);
                }
            }
        } 
    } 
}
