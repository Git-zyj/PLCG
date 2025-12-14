/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_1;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_14 = ((var_3 ? (((max((arr_1 [i_0]), 50)))) : (max(var_7, (202 * 0)))));
            arr_5 [i_0] |= var_1;
            var_15 = (min(var_15, (arr_4 [i_0] [4] [i_1])));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_17 [1] [i_3] [17] [1] [19] = 0;
                                var_16 = ((-var_8 + (!-1809466235)));
                                var_17 = (((((202 ? (!18721) : (!1)))) && 0));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [6] [i_3] |= (29 > 1);
                    arr_19 [i_3] [i_3] [i_2] [i_3] = ((1 > -63103591) | var_2);
                    arr_20 [i_0 + 1] [20] [i_3] = ((((arr_3 [18] [18] [i_3]) | var_3)));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            arr_37 [i_6] [i_6] [i_8] [i_9 - 1] [i_10 - 1] [i_9 + 1] = ((((((var_11 ? var_0 : -231457448)) ? (!1) : (!29897)))));
                            arr_38 [i_6] [i_7] [i_8] = (-((-var_3 ? -63103590 : (1 + 9063))));
                            arr_39 [i_8] [11] [i_8 + 1] [10] [i_10 - 1] [i_9 - 1] [2] = (arr_9 [i_8] [1]);
                        }
                        var_18 *= (arr_34 [i_7] [0] [2] [i_9 + 1] [3] [i_6] [i_6]);
                    }
                }
            }
        }
        arr_40 [i_6] = (((-9223372036854775807 - 1) ? var_10 : (arr_15 [i_6] [i_6])));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_43 [i_11] = 0;
        arr_44 [i_11] = (1 ? -231457475 : -1);
    }
    var_19 = var_12;
    #pragma endscop
}
