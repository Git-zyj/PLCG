/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((((!1818068412881961286) == (1 << 1))))) | (min(var_4, (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = var_7;
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_12 = (max(var_12, 234881024));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_13 [i_1] = 1;
                        var_13 = 1;
                    }
                }
            }
        }
    }
    var_14 = 234881031;
    var_15 = ((var_5 != (-144115188074807296 == var_7)));
    var_16 = ((var_5 >> ((var_6 ? var_11 : (4060086271 == var_6)))));
    #pragma endscop
}
