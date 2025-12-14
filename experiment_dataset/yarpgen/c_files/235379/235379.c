/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (((((13 ? -2008782617 : ((562945658454016 ? 18446744073709551615 : 2008782617))))) ? (-2008782594 <= 0) : (max(0, -8098))));
                var_21 = (((((max(19, 1)) & 1)) * (((12 >> ((2235977516 ? 22 : 65523)))))));
                arr_8 [i_1] = (((max(2235977512, -32763))) ? ((16711680 ? 33554431 : 1626242917)) : ((((-32767 - 1) ? 3 : 2058989783))));
            }
        }
    }
    var_22 = -6081095606645923255;
    var_23 = (max(var_23, var_18));
    #pragma endscop
}
