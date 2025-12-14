/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 99;
    var_18 += var_2;
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += -var_11;
                var_21 = (62420 | var_14);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_22 = (((((var_9 ? -1921253103 : 4716108844403351796))) && (((((min(1872841713, var_11))) ? 17677 : var_0)))));

                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    var_23 = ((-((var_11 ? (arr_14 [i_4] [i_4] [i_4 + 2]) : 3620228105))));
                    var_24 += (-4 && var_7);
                    var_25 = (arr_6 [i_2] [i_2]);
                    var_26 -= 1;
                    var_27 ^= 0;
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_17 [i_2] [i_3] [6] = 9007199254740991;
                    arr_18 [i_2] = var_5;
                }
                var_28 = (max(var_28, (((((((arr_10 [i_2] [i_3]) ? (arr_16 [i_3] [i_2] [13]) : var_12))) ? var_13 : var_9)))));
            }
        }
    }
    #pragma endscop
}
