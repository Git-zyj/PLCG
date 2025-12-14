/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50837
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
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) var_5);
                arr_5 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */int) arr_3 [i_0 + 2]);
                var_17 += ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((signed char) arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_12))) && (((/* implicit */_Bool) var_2))))), ((~(((var_14) ? (((/* implicit */int) (unsigned short)62256)) : (((/* implicit */int) var_14)))))))))));
}
