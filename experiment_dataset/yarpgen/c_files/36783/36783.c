/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((-205552430 | (((((var_6 ? var_0 : var_0))) ? (var_13 ^ var_12) : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] = (~(((!205552428) ? var_11 : (max(var_0, (arr_2 [i_0 - 1] [i_0 - 1] [i_1]))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_0 - 2] [i_2] |= (8128 | 14);
                    arr_8 [i_0] [i_1] [i_1] [i_2] |= (((((var_14 <= ((((arr_5 [i_0] [i_0 + 2] [i_0 + 2]) ? var_11 : (arr_3 [i_1] [i_0])))))))) | ((4294967278 ? -6670197967093031992 : 6)));
                }
            }
        }
    }
    var_18 *= max((((var_9 ? var_15 : 255))), (~var_1));
    var_19 = var_6;
    #pragma endscop
}
