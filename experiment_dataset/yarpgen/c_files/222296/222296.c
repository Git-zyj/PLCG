/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (min(((1 + (max(var_4, -691887809)))), ((((-669069952036436032 >= var_6) ? ((var_10 ? 1 : var_10)) : (max(var_8, var_0)))))));
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_9;
                var_15 = ((((max(((min(-8, var_10))), (arr_2 [i_1] [i_0 + 2] [i_0 + 3])))) ? var_1 : ((((var_4 ? var_8 : -5287622155821801073))))));
            }
        }
    }
    var_16 -= ((((((2147483647 ? 5 : -1117)))) ? 2 : (-var_9 % var_11)));
    #pragma endscop
}
