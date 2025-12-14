/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227479
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1])) <= (-2000927588))) ? (((/* implicit */long long int) ((int) (-(((/* implicit */int) (_Bool)0)))))) : (min((((/* implicit */long long int) max((46534335), (46534335)))), (arr_2 [i_0] [i_0])))));
                arr_5 [i_0] = ((((/* implicit */_Bool) arr_4 [i_0])) ? ((-(1008312025))) : (((/* implicit */int) arr_3 [2LL] [2LL] [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (short)(-32767 - 1));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_1))));
    var_19 = ((/* implicit */short) var_9);
    var_20 = ((/* implicit */signed char) var_10);
}
