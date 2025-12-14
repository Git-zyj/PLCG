/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216172
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
    var_14 = ((/* implicit */short) max((var_6), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned char) arr_3 [i_0 + 1])), (arr_2 [i_0 - 2] [i_1]))), (((/* implicit */unsigned char) arr_3 [i_0 - 2]))))) ? (min((((var_4) * (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) > (arr_1 [i_0])))))) : (max((var_4), (((/* implicit */int) arr_2 [i_0 + 1] [i_1]))))));
                var_16 ^= arr_2 [i_0] [(unsigned short)19];
                arr_4 [i_0 - 3] = ((/* implicit */long long int) arr_2 [(_Bool)1] [(unsigned char)5]);
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_1);
}
