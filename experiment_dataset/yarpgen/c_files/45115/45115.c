/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_5;
    var_17 = (((((127 | var_2) ? var_4 : -121)) | (((var_6 | var_14) & ((max(var_4, -115)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [9] = (((((((min(1201138389, (arr_1 [i_0] [i_1])))) ? (min(var_0, (arr_1 [i_0] [i_1]))) : (((min(var_7, var_2))))))) ? ((-((((arr_2 [i_0]) == (arr_3 [i_0] [i_0] [i_1])))))) : (-var_9 != var_9)));
                var_18 ^= (arr_2 [i_1]);
                var_19 = (!(((((((-127 + 2147483647) >> (112 - 90)))) ? ((1201138394 ? (arr_3 [6] [i_0] [i_0]) : var_4)) : (((~(arr_1 [i_0] [i_1]))))))));
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
