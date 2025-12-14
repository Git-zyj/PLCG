/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48410
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
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                            arr_8 [i_0] = ((((/* implicit */long long int) ((int) min((((/* implicit */int) (signed char)111)), (1048320))))) <= (6994847253203594177LL));
                            var_16 = ((/* implicit */int) max((min((((/* implicit */long long int) ((1669851164) + (((/* implicit */int) (signed char)105))))), (arr_6 [i_0] [i_2] [i_2] [i_0] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-91)))))));
                            var_17 = ((/* implicit */short) (signed char)-92);
                        }
                    } 
                } 
            }
        } 
    } 
}
