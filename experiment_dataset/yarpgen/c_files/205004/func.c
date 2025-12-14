/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205004
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) max((((/* implicit */short) var_13)), (var_5))))))));
                arr_7 [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(unsigned short)8] [i_1] [i_1 + 1]))))) ? (((int) (short)(-32767 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)4] [i_1 + 1])))))));
                arr_8 [4ULL] [4ULL] [7LL] = ((/* implicit */int) var_13);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_16);
}
