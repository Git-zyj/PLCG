/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206529
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
    var_13 = ((((((/* implicit */long long int) var_12)) / (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) var_12)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((var_11) ? (((/* implicit */int) var_0)) : (var_8))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2]);
                            var_15 = ((/* implicit */short) (+(((((arr_8 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [15LL] [15LL]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6ULL] [i_1]))) ^ (var_3))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))) : (arr_1 [14U])));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((((/* implicit */_Bool) arr_5 [(unsigned short)5] [i_1 + 1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) << (((((((/* implicit */_Bool) var_12)) ? (arr_10 [i_0] [i_0] [i_0] [7ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))) - (2556547136U))))) : (arr_6 [(short)10] [11LL] [i_1]));
            }
        } 
    } 
}
