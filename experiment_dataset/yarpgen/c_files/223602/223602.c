/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 57;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (((((var_7 ? 2002440083 : var_9))) || (var_1 > var_0)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (min(((max(32084, 2147483641))), ((73 ? var_2 : -114))));
                    var_13 = -1084038087;
                    var_14 += var_5;
                    var_15 = (1006632960 > -1591187630);
                    arr_8 [i_1] [i_0] = (var_10 / 1);
                }
                var_16 -= (var_9 >= 57);
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
