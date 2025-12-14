/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max((min(1522268933, 1561517514)), 1907594469))) ? ((((max(1561517514, 606958654))) ? var_9 : ((2628164545821409571 ? -3406 : var_3)))) : var_3));
    var_12 = (min(var_12, (((var_8 ? (max((549755813887 <= 42923851), ((1 ? 3373575750 : 131)))) : 3373575750)))));
    var_13 = ((var_0 & ((min(var_3, 3373575732)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = (((((14875 ? -27 : var_4))) ? ((((((6858543711862645630 ? 17580391869682443844 : -118))) ? 106 : ((4828740738300526535 ? var_4 : var_3))))) : ((var_5 - ((106 ? -4069794221979779244 : var_7))))));
                    arr_9 [i_0] [i_2] [i_2] = (min((((((-32 ? -1 : 41))) ? 1 : (268435455 > 1))), 39));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = 1;
                }
            }
        }
    }
    #pragma endscop
}
