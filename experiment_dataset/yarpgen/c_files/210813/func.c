/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210813
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = var_5;
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_13), (((/* implicit */short) (unsigned char)0))))), (arr_1 [i_0])))) | (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (var_0)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [8ULL] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_4 [i_2])) >= (max((((/* implicit */long long int) var_6)), (var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (780634050013930892ULL)));
                    var_17 = ((/* implicit */long long int) (~(449763932U)));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((9223363240761753600ULL), (((/* implicit */unsigned long long int) var_11))))) || (((/* implicit */_Bool) arr_5 [i_0])))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    arr_10 [i_0] = ((/* implicit */long long int) min((449763939U), (449763925U)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_2] [14ULL] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_2)))))));
                        arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) var_7));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (unsigned short)41443);
        var_19 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (780634050013930892ULL) : (arr_11 [i_4] [i_4]))));
        arr_18 [10ULL] [(short)13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) arr_11 [(unsigned char)20] [i_5]);
        var_21 = ((((/* implicit */_Bool) var_1)) ? (arr_11 [2] [2]) : (min((((/* implicit */unsigned long long int) (unsigned char)0)), (9174765777211851346ULL))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_0 [10ULL]))));
    }
}
