/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = ((660135685 || (((0 ? var_3 : 49665)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1 + 2] [i_0] = 1;
                    arr_9 [i_1] [i_1 + 1] = (((((!(arr_7 [i_0] [i_2])))) + (!246)));
                }
            }
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_18 = (!(((arr_6 [i_0 - 1] [i_3] [i_4]) >= (arr_5 [i_0] [i_0] [i_0]))));
                var_19 = (!-1883248261);
                arr_14 [i_4] [i_3] [i_0] = ((((!(arr_7 [i_0] [i_0]))) ? (arr_4 [i_0] [i_0] [i_0 - 2]) : (arr_2 [i_0 + 3])));
            }
            var_20 = (arr_10 [i_0] [i_0] [i_0 + 3]);
            var_21 = (arr_5 [10] [13] [i_0]);
            var_22 = 0;
        }
        arr_15 [i_0] = (!137);
    }
    var_23 = (min(var_15, (!61041)));
    var_24 = (var_14 >= 116);
    var_25 = ((((((var_10 & var_7) << (((283897061507784591 & 169) - 137))))) ? var_4 : ((var_7 ? var_4 : var_9))));
    #pragma endscop
}
