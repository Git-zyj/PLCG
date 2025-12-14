/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248992
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((3424570400703794542LL), (((/* implicit */long long int) max((arr_1 [i_0]), (((signed char) arr_3 [i_1]))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 2461153125294341154LL)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) 3424570400703794568LL))));
}
