/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (max((((((((arr_1 [i_0]) ^ var_0))) ? var_6 : (~50179)))), (max((arr_5 [i_1 + 1]), ((var_5 ? var_9 : var_0))))));
                arr_7 [i_0] [i_1 - 1] = (!65535);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_16 = ((((((max((arr_11 [i_2] [i_3 + 1]), var_12))) > var_7)) ? (var_3 > -var_14) : (((arr_11 [i_3 + 3] [i_3 + 3]) - (arr_10 [i_3 + 2] [i_3 + 3] [i_2])))));
                var_17 = (-(max((max(50, -1242833858)), (~25))));
                var_18 = (max(var_18, (max(((((arr_11 [i_3 + 1] [i_3]) <= var_11))), (((arr_8 [22]) ^ var_14))))));
            }
        }
    }
    var_19 = ((-(((var_5 > (((max(20, var_8)))))))));
    #pragma endscop
}
