/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = min((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (max(var_3, (arr_1 [i_0] [i_0]))));
                var_16 = 1377839048;
            }
        }
    }
    var_17 = (((((max(var_6, var_3)) >> (var_11 + 5164136510729899184)))) ? ((((max(7302983590978478727, var_2))) ? 134184960 : var_6)) : var_10);
    var_18 = var_5;
    #pragma endscop
}
