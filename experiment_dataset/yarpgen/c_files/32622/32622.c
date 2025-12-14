/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (max((max(15249856005375984390, 66)), ((((((arr_0 [i_0 + 2] [i_0 + 3]) ? 1 : (arr_1 [i_0 + 1])))) ? (arr_0 [i_0 + 3] [i_0 - 2]) : 1))));
        var_15 = ((((((((max((arr_1 [i_0 - 1]), var_2)))) + (((arr_0 [i_0] [i_0]) + var_0))))) && var_0));
        var_16 = var_8;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_17 = (arr_3 [i_1 + 2]);
        var_18 = ((var_6 * (((((var_7 ? (arr_0 [i_1] [i_1]) : 26368))) ? (var_14 >= -17) : ((max((arr_1 [i_1 + 3]), var_7)))))));
        var_19 = ((60 ? -1287086137 : 1));
        var_20 += (arr_3 [i_1 - 2]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = (max(var_21, (((((min(var_3, var_9))) && ((19 != (((var_13 >= (arr_6 [2])))))))))));
        var_22 = var_13;
        var_23 = (arr_5 [i_2]);
        var_24 -= ((1287086137 ? (((arr_7 [i_2]) ? (((arr_5 [i_2]) & (arr_7 [i_2]))) : (arr_5 [i_2]))) : (((min(0, -26369))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_25 = (((((arr_9 [i_3]) ? var_13 : (arr_6 [i_3]))) != (arr_8 [i_3] [i_4])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_26 = (max(((~(max(1, var_1)))), ((((0 ? var_11 : (arr_6 [i_3])))))));
                                var_27 += (arr_13 [i_3] [i_4] [i_5] [i_7]);
                                var_28 ^= arr_15 [i_6 + 2] [i_6] [i_6 - 2] [i_6 + 1] [i_6 + 1];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
