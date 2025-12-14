/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200634
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) (short)-22423))))), (max((932383303148943212ULL), (((/* implicit */unsigned long long int) 536543005U)))))), (((/* implicit */unsigned long long int) var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (!(((_Bool) (short)-22416))));
                                var_14 = ((/* implicit */unsigned char) ((short) 2246707274U));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */unsigned int) (-(-1137259992)))) - (arr_3 [i_0] [i_0])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_18 [i_0] [i_2] = ((/* implicit */signed char) ((unsigned short) arr_16 [i_0] [i_1] [i_1 - 1]));
                            arr_19 [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) var_2);
                            arr_20 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)146)) || (((/* implicit */_Bool) 2048260035U))));
                        }
                        var_16 = var_3;
                        var_17 &= min((((/* implicit */int) min((var_9), (arr_14 [i_1 + 3] [i_1] [i_1] [i_1])))), ((-(((/* implicit */int) (short)-19194)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2246707280U)))))));
                        var_18 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (min((-4211155791466456601LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)12)))))))), (((((/* implicit */_Bool) max((3612380518U), (((/* implicit */unsigned int) arr_16 [(unsigned char)2] [i_7] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_2] [i_7 + 1])) << (((((/* implicit */int) (unsigned char)175)) - (157)))))) : (((((/* implicit */_Bool) 682586786U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17500))) : (var_7)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            var_19 = (-(((/* implicit */int) (unsigned short)12)));
                            arr_27 [i_2] [i_2] = ((/* implicit */_Bool) ((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169)))));
                            var_20 = ((/* implicit */int) max((749712402U), (((/* implicit */unsigned int) (short)19206))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (3470573868U)))));
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)146)) - (((/* implicit */int) arr_11 [i_7] [i_7] [i_0] [i_9 + 2] [i_9 - 2]))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */int) (signed char)-10)) <= ((+(((/* implicit */int) (unsigned char)140))))));
                            arr_36 [i_0] [i_2] [i_0] [i_10] [i_11] [i_2] = ((/* implicit */_Bool) ((short) ((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (-1662410714))));
                        }
                        arr_37 [i_0] [i_2] [i_1 + 2] [i_10] = (!(((/* implicit */_Bool) (((_Bool)0) ? (max((2U), (((/* implicit */unsigned int) var_6)))) : (var_3)))));
                    }
                }
            } 
        } 
    } 
}
