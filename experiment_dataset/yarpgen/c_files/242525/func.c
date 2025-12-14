/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242525
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 2])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1]))))) - (((/* implicit */int) arr_0 [i_0 + 1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) 2535191737U);
                                arr_17 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_2] [i_3]);
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1] [i_3 - 1])) ? ((~(arr_2 [i_0 + 1] [i_1] [i_3 - 1]))) : (arr_2 [i_0 - 1] [i_0 - 1] [i_3 - 1])));
                                var_17 = ((/* implicit */int) max((-5566973403745036601LL), (((/* implicit */long long int) arr_1 [i_0] [i_0 + 2]))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0 - 1] [i_0 + 2] [i_0]);
                arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1759775557U)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0]))) - (((arr_16 [i_0] [i_1] [i_0] [i_1] [11ULL]) / (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [i_0] [i_1])))));
                var_19 = ((/* implicit */signed char) (~((+(arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((int) var_1));
}
