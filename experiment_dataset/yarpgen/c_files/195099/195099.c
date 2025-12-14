/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = (15968636338025501756 ? (((~((((arr_8 [i_0] [i_2] [i_0] [i_4 - 1]) == var_9)))))) : (((var_7 ? var_2 : 26))));
                                arr_13 [i_1] [i_2] = 39848;
                            }
                        }
                    }
                    var_11 = (!(~288230376151711743));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_21 [i_5] [i_6] [i_7] [i_5] = 1008765181;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_12 = (!((min((min(10332398072500504715, 1)), var_2))));
                                var_13 = (min(var_13, (arr_26 [15])));
                                var_14 |= (min(6, 0));
                                var_15 = max(((((max(var_9, (arr_14 [i_8]))) <= ((250 * (arr_26 [i_8])))))), (((arr_23 [i_5] [i_5] [i_5] [i_7] [i_8] [i_9]) ? (arr_23 [i_9] [i_9] [i_8] [i_7] [i_6] [i_5]) : (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
                                var_16 = ((-(min((10721318047502183023 - var_0), var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (!var_3);
    var_18 = (min(var_18, (-2147483647 - 1)));
    #pragma endscop
}
