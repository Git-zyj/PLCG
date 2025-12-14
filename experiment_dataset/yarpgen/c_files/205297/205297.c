/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_16 = ((17139 << (-32 + 37)));
        var_17 = (max(var_17, ((max((((arr_0 [8]) ? -910016552 : ((min(32768, (arr_0 [i_0])))))), (-4096 == 32770))))));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1 - 1] [i_1] = -var_12;
        var_18 = ((~((910016554 ? 5093940901650919117 : -58))));
        arr_5 [7] = 8191;
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_19 = (max(var_19, ((min(-34, ((~(arr_8 [i_2 + 2]))))))));
                var_20 *= (((-2204709896534410820 & 101) || -1605066469777350474));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 = ((5093940901650919110 ? 1 : (((~255) - -96))));
                                arr_17 [i_4] [i_5] [i_2] [i_4] [i_2] [i_2] [i_2] = ((-3660741844 < (((((arr_9 [i_2] [i_6 + 1]) <= var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_14;
    #pragma endscop
}
