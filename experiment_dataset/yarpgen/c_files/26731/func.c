/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26731
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) (-((((-(var_1))) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3])))))));
                arr_7 [i_0] = (-(((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((arr_3 [(unsigned char)12]) & (((/* implicit */int) var_8))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 540431955284459520LL))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_2] [i_2] = ((/* implicit */int) min((min((((var_1) | (arr_0 [i_0] [i_1]))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_2 [i_3] [i_1 - 2])), (arr_12 [i_2] [i_1 - 1] [i_1] [i_2] [i_2] [i_3])))))), (((/* implicit */long long int) var_4))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(var_3))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 4; i_4 < 24; i_4 += 2) 
    {
        for (long long int i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            {
                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_16 [(unsigned short)10] [(unsigned short)10])) ^ ((~(var_1)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 16383LL)))))) : (var_1)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 24; i_6 += 4) 
                {
                    arr_22 [i_4] [i_4] [(short)20] [i_4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_6])))) ? (((/* implicit */int) arr_14 [(unsigned char)16] [(unsigned char)16])) : (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 24; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 24; i_8 += 1) 
                        {
                            {
                                arr_28 [i_8] = (short)19202;
                                arr_29 [i_7] [i_5 - 1] [(unsigned char)16] [i_7 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_11)))) && (((/* implicit */_Bool) arr_14 [i_4] [i_5 + 1]))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_35 [i_4 - 2] [i_5] [i_9] [i_10] = ((((/* implicit */int) var_10)) & (((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_4 - 3] [i_5 - 1] [i_9] [i_10] [i_9] [i_9]))))) | ((+(((/* implicit */int) (unsigned short)48208)))))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                    }
                    arr_36 [i_5] = ((/* implicit */int) ((long long int) ((max((arr_34 [i_4] [i_4] [i_4] [i_5 - 1] [i_9]), (((/* implicit */long long int) var_10)))) ^ (((/* implicit */long long int) var_0)))));
                    arr_37 [i_5] [(unsigned short)19] [i_9] [i_4] = ((/* implicit */unsigned int) min((var_0), (min((((/* implicit */int) (unsigned short)17327)), (((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_0)), ((+(((((/* implicit */unsigned long long int) var_0)) + (var_2)))))));
}
