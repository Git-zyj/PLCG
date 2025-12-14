/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225099
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
    var_13 = (short)-7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))));
                var_14 = ((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) | (((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13792)))), (((/* implicit */int) (_Bool)1)))))));
                var_15 = max(((_Bool)1), ((_Bool)1));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            var_17 = ((signed char) (_Bool)1);
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3 - 1]);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) * (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_19 |= ((/* implicit */unsigned short) arr_8 [10ULL] [i_1] [10ULL] [i_0]);
            }
        } 
    } 
}
