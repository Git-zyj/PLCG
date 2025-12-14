/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211618
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
    var_19 += ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_0 + 1]);
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99)))))) ? (max((-6914262887007315330LL), (((/* implicit */long long int) var_1)))) : (min((((/* implicit */long long int) arr_2 [i_0 + 2])), (-6914262887007315321LL)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) / (arr_2 [i_0 - 1])))) ? (((var_0) / (arr_2 [i_0 + 2]))) : (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 2])))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((max((17832938456553099104ULL), (((/* implicit */unsigned long long int) (unsigned char)95)))) >> (((((/* implicit */int) (unsigned char)168)) - (113))))) - (((/* implicit */unsigned long long int) min((arr_10 [i_3] [i_1] [i_1]), (((/* implicit */int) ((_Bool) 9223372036854775807LL)))))))))));
                                var_23 = ((/* implicit */int) (+((((!(((/* implicit */_Bool) arr_4 [i_4] [i_4])))) ? ((~(-5316208110131250943LL))) : (((/* implicit */long long int) 2330375277U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
