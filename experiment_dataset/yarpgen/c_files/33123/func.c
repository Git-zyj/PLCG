/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33123
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
    var_13 += ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((var_9) ? (447774942U) : (447774942U)))) | ((~(-3140480664640777249LL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_3 + 2]));
                                arr_12 [(short)9] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_3 + 2] [i_4 + 1]))));
                                arr_13 [3LL] [i_4] [3LL] = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    var_16 = arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [(_Bool)1] [(unsigned short)14];
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_7 [i_2] [i_2] [(unsigned char)1] [i_0]) : (13284316265212363396ULL))))));
                    var_18 = ((((/* implicit */unsigned long long int) 6086922833222344152LL)) == (arr_7 [i_0] [i_1] [i_2] [i_2]));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            {
                arr_18 [i_5] [i_5] [(unsigned short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((9722629156893792553ULL) / (185091639869068755ULL)))) ? ((+(((/* implicit */int) arr_16 [i_5 + 1] [i_6])))) : (((/* implicit */int) arr_11 [i_5 - 1] [i_6] [i_5]))));
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)62572))));
            }
        } 
    } 
}
