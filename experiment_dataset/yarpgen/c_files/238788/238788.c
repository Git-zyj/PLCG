/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] &= var_3;
                var_15 = (min(var_15, -var_6));
                arr_8 [i_0] = var_14;
            }
        }
    }

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_12 [6] |= 1;
        var_16 = (((((max(var_11, var_1)) < (((1936746952944081483 ? 32767 : 1))))) ? ((((max(1, 50))) ? var_3 : ((var_2 ? 1516638409 : var_11)))) : (--26)));
        var_17 = (min(var_17, (((((max(((min(var_8, var_2))), (max(2123222682, var_11))))) ? (max((~7400822616302738664), 184)) : -var_9)))));
        var_18 = ((4294967295 ? 16319746447397988821 : 52));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                arr_18 [i_3] = 230;
                arr_19 [i_3] = (min((!26), (~-var_6)));
                arr_20 [i_3] = 428781772;
            }
        }
    }
    #pragma endscop
}
