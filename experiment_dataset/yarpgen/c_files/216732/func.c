/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216732
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) var_7))) == (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) var_5)) : (var_9)))) ? (((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)29743)))))) : (var_3)))));
    var_12 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)-29743)) ? (((/* implicit */int) (short)-29742)) : (((/* implicit */int) (short)29741)))) + (2147483647))) << (((((/* implicit */int) var_4)) - (8610)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 299332971002636803ULL)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_9 [i_0] [i_0] [(short)4] [i_0] [i_2] [i_3 + 3])))) / (arr_6 [i_0] [i_1] [0])))) ? ((((+(((/* implicit */int) arr_2 [i_0])))) & (((((/* implicit */_Bool) (short)29741)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_1 [0LL] [i_1])))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775807LL)) || (((/* implicit */_Bool) 16723167361203120575ULL))))), (arr_0 [i_0])))))))));
                        var_14 -= ((/* implicit */short) min((max((((/* implicit */long long int) arr_2 [i_1 - 1])), (9223372036854775794LL))), (((/* implicit */long long int) max((arr_7 [(short)0]), (arr_7 [0]))))));
                        arr_10 [i_0] [i_3] [i_2] [i_3 + 1] = (+((~(min((-186925023), (((/* implicit */int) (unsigned char)125)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */_Bool) -9223372036854775794LL);
                                arr_16 [i_0] [i_0] &= (+(min((((int) 4294967295U)), (((/* implicit */int) arr_0 [i_0])))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [(_Bool)1] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)10366)) ^ (((/* implicit */int) (unsigned short)43274))))) ? (((((/* implicit */_Bool) -991629815)) ? (arr_12 [i_0] [i_1] [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_2 - 1] [8ULL])))) : (((/* implicit */int) (short)29741))))) + (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8LL] [i_2] [(unsigned char)6] [(unsigned char)6] [i_0] [i_0]))) & (3486566063U))), (((/* implicit */unsigned int) -659621504))))));
                }
            } 
        } 
    } 
    var_16 = ((int) 551453841);
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 2136762688U))));
}
