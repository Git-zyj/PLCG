/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225461
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_1] [i_0] [i_0]), (arr_2 [i_1] [i_1] [i_0]))))) : ((-(arr_5 [i_0] [i_0] [i_0])))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [(_Bool)1] [(unsigned char)0] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_6);
}
