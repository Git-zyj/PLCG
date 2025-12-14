/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20565
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
    var_18 = var_11;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) max(((~(var_12))), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                arr_7 [i_0 - 3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (arr_3 [i_1 + 1] [i_1 - 1]))))));
                arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((_Bool) min((min((arr_4 [i_0]), ((short)-31078))), (((/* implicit */short) (_Bool)1)))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)-32534);
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((var_1) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
    var_20 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((var_15), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((short) var_3)))))), (var_14));
}
