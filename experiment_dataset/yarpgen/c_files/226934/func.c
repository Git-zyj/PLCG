/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226934
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_0 [i_1 - 1]);
                var_16 *= ((/* implicit */unsigned short) var_10);
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_1 [i_1 - 1]) + (2147483647))) << (((((arr_1 [i_1 - 1]) + (55130124))) - (22)))))) ? (-1124538924) : (((/* implicit */int) ((((var_1) - (((/* implicit */unsigned int) -1124538924)))) != (((/* implicit */unsigned int) -1124538924)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) var_7);
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 0ULL))));
                            arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [0] [13ULL] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned short) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
