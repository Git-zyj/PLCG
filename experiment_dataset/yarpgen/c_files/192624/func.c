/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192624
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
    var_10 += ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [3U]))) / (var_7)))) ? (((var_7) / (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_3)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [(_Bool)1] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)1493)) ? (((((/* implicit */_Bool) 8388604)) ? (((/* implicit */unsigned long long int) 2050140878U)) : (arr_8 [i_0] [i_1] [(signed char)8] [i_3] [(signed char)8]))) : (((/* implicit */unsigned long long int) 1409671747U))))));
                            arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((_Bool) ((2885295532U) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1927634072697585531LL))))))))));
}
