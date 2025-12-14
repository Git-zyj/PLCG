/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48538
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) max((207643461), (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_3))) : (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2] [(_Bool)1]))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_1 - 1] [i_2]))) : (var_1))) : (max((arr_5 [i_3 - 1] [i_2] [i_1] [2LL]), (((/* implicit */unsigned long long int) var_12)))))) > (((((/* implicit */_Bool) -9218251612254466939LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) % (((/* implicit */int) arr_9 [14ULL] [14ULL] [i_2]))))) ? ((~(((/* implicit */int) arr_9 [i_2] [i_0] [i_2])))) : ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))))));
                        var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) 15145138064810960343ULL)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_2] [i_1 + 3] [i_2])), ((+(min((var_3), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (~(var_10)));
}
