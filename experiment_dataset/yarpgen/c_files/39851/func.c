/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39851
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2547)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2547))) : (((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((var_12) - (((/* implicit */unsigned long long int) var_8)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [i_1] = ((unsigned int) arr_5 [i_1] [i_4 - 2] [i_3 + 1] [i_1]);
                            arr_16 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_4]);
                        }
                        var_18 *= ((/* implicit */short) var_4);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_13 [i_0] [(short)12] [i_2] [(short)12]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_21 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0] [(unsigned char)5]))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        arr_22 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62989)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_5])) : (((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (short i_6 = 4; i_6 < 21; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((9223372036854775802LL) / (((long long int) 1966136898U))));
                            arr_26 [i_1] [i_1] [i_1] [(unsigned short)8] [i_1] = ((/* implicit */signed char) var_4);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 4; i_7 < 23; i_7 += 1) 
                    {
                        arr_29 [i_1] = ((/* implicit */unsigned short) arr_3 [i_7]);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_0))));
                        arr_30 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) var_1));
                    }
                    arr_31 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max(((short)16352), (arr_11 [i_0] [i_0 + 1] [i_0] [i_1] [i_1] [i_1]))))) ? (var_4) : ((~(var_9)))));
                    arr_32 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)62989);
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */_Bool) max(((-(((((/* implicit */unsigned long long int) var_11)) - (var_15))))), (((/* implicit */unsigned long long int) var_11))));
    var_23 = ((/* implicit */unsigned char) var_0);
}
