/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (max(((32504 >> (((var_15 / 127) + 9436447407181033)))), ((((max(var_10, var_2))) ? var_4 : 102))));
    var_18 |= ((!((((var_14 + 2147483647) >> (var_0 - 32084))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [15] = (((arr_4 [i_0]) && ((((arr_3 [i_0 + 1] [i_0] [i_1 + 2]) & (arr_3 [i_0 - 1] [i_0] [i_1 - 1]))))));
                var_19 = (max(189, -70));
            }
        }
    }
    #pragma endscop
}
