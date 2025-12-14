/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = ((min(117, -var_4)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_8 [1] [10] [10] = ((117 < (arr_4 [i_0 + 1] [i_1] [i_2])));
                        arr_9 [i_0] [i_1] [3] [i_3] = -262144;
                    }
                }
            }
        }
        var_20 = ((1487923793 ? 262144 : -17329));
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 = var_13;
                    var_22 = ((((((arr_12 [i_4] [i_5]) ? 125 : -118))) ? (((10 ? var_10 : ((1487923770 ? var_12 : 8067))))) : ((((max(var_1, 0))) ? var_8 : -1592519075))));
                    arr_17 [i_4] [i_4] = 1;
                }
            }
        }
    }
    #pragma endscop
}
