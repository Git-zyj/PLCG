/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((-3522 ? (arr_5 [i_0] [i_1] [i_0]) : (((arr_3 [i_0 - 1] [i_2]) ? -3522 : -64))));
                    var_21 = var_0;
                    var_22 = (((arr_5 [i_0] [i_2 + 1] [i_0]) ? var_16 : (arr_5 [i_0] [i_2 + 2] [i_0])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_23 = ((arr_9 [i_0 - 1] [i_0 - 2]) % (arr_9 [i_0 - 1] [i_0 + 1]));
            var_24 = (arr_8 [i_0] [i_0 - 1] [i_0 + 1]);
            var_25 = var_6;
            var_26 = (((arr_3 [i_0] [i_3]) < (var_15 - var_4)));
        }
        var_27 += (var_5 ? (arr_4 [i_0] [i_0]) : (arr_9 [i_0 - 2] [i_0 - 2]));
    }
    var_28 = var_16;
    var_29 += -var_9;

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_30 -= 40265;
        var_31 = (-3522 < 3504);
        var_32 = (max((min((arr_12 [i_4] [9]), (arr_0 [i_4]))), var_15));
        var_33 = ((((min(131068, 4095))) ? 18 : 40267));
    }
    #pragma endscop
}
