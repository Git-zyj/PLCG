/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46490
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0] [i_0] [i_2]), (((/* implicit */signed char) var_1)))))))) + (((/* implicit */unsigned long long int) (-(var_8)))))))));
                    var_15 = ((/* implicit */_Bool) max((12044260928827801933ULL), (((/* implicit */unsigned long long int) 96358947U))));
                    var_16 = max(((+(min((arr_2 [i_0 + 2] [i_0 - 1]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_7) || (var_6))))))));
                    arr_6 [i_0] [3ULL] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    arr_7 [0U] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_6))));
    var_18 = ((/* implicit */int) var_7);
}
