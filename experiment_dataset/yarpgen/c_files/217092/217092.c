/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 0));
    var_18 = (min(var_18, 36028796750528512));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-36028796750528512 ? 11983815277830818294 : 36028796750528512)) >> (877197278 && 3400777664)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 += -877197274;
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((((((26 ? -36028796750528516 : -877197273)))) << 3));
                }
            }
        }
        arr_10 [i_0] = (((var_5 ? 4294967295 : (arr_6 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 4]))));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((-((2134534543 - (((arr_13 [i_3]) + 4503591037435904))))));
        var_20 = (max(var_20, var_4));
        var_21 = (max((~0), 2366896239872381354));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    arr_23 [i_4] = ((!(((~(((arr_21 [i_4] [6]) + 38)))))));
                    arr_24 [i_4] [i_4] [i_4] [i_4] = ((var_7 ? (((arr_22 [i_5 + 1] [i_4] [i_5]) ? 238 : var_9)) : (((-(arr_21 [i_4] [i_4]))))));
                }
            }
        }
        arr_25 [i_4] = ((((min(((18446744073709551605 + (arr_21 [i_4] [i_4]))), var_9))) ? ((var_15 | ((var_12 ? var_13 : (arr_16 [i_4] [i_4]))))) : var_8));
        var_22 = var_6;
        var_23 = (((((var_0 ? (arr_17 [i_4]) : 2147483647))) ? (arr_17 [i_4]) : (!var_2)));
        var_24 -= (((max(-49, 1))));
    }
    var_25 = var_15;
    #pragma endscop
}
