/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206028
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
    var_11 = min(((~(344101242671849534LL))), (((var_2) % (var_2))));
    var_12 = (+(-9223372036854775780LL));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])) == (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2])))))) / (max((((/* implicit */long long int) var_9)), (var_0)))))));
                arr_5 [i_0 + 2] [i_0] = ((/* implicit */long long int) ((short) ((long long int) (short)32749)));
                var_14 = ((/* implicit */long long int) min((var_14), ((-(arr_1 [i_0] [i_0])))));
                var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) max((arr_1 [i_0 - 1] [i_1 + 3]), (max((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */long long int) (short)-32731))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32731))) : (((arr_1 [i_0 + 1] [i_1 + 1]) >> (((var_10) - (139651653428785591LL)))))))));
            }
        } 
    } 
}
