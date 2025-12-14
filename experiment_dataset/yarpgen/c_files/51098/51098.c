/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [6] [i_0] &= (arr_4 [8] [i_1 - 2]);
                arr_7 [i_0] [5] [i_1] = (i_0 % 2 == 0) ? ((((((var_15 << (((arr_0 [i_0] [i_1]) - 6198622761172194072))))) * (min(251658240, 14686304797064164729))))) : ((((((var_15 << (((((arr_0 [i_0] [i_1]) - 6198622761172194072)) - 1138207624876697561))))) * (min(251658240, 14686304797064164729)))));
                arr_8 [i_0] = (17986967906534453675 * 1);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] = 0;
                            arr_16 [3] [i_2] [i_2] [i_0] = 31117;
                            arr_17 [i_0] [i_1] [i_0] [i_3] = (arr_11 [i_2 - 1] [i_3] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, (((1400 ? 54670 : ((31117 ? 253 : var_0)))))));
    var_18 = (min(var_9, 3319015519142845759));
    #pragma endscop
}
