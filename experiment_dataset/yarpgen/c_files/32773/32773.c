/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min((((var_3 ? 0 : var_7))), (min(var_7, var_8))))) ? -44018 : -var_7);
    var_12 = (!0);
    var_13 = (!var_4);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_3] [i_2] = (min(((min((arr_0 [i_0]), (arr_0 [1])))), ((min((arr_4 [i_0] [i_1] [i_2]), var_1)))));
                                var_14 = ((21525 ? 255 : -39511504));
                                arr_14 [i_0] [i_4] [i_4] [i_4] = (max(44036, 44011));
                                var_15 = (min(((min(var_7, ((!(arr_6 [i_4] [i_2] [i_1] [i_0])))))), (arr_4 [i_2] [0] [i_0])));
                            }
                        }
                    }
                    var_16 = (((362 + -1592094559) + (min((arr_8 [i_0] [i_1] [i_1] [i_2]), (arr_0 [i_0])))));
                }
            }
        }
        var_17 = ((((max(var_5, (min(77, (arr_2 [i_0])))))) ? ((4294967276 ? (!7546799720498502562) : -173)) : (((!(arr_10 [i_0] [14] [i_0] [16] [i_0]))))));
        arr_15 [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
        arr_16 [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [9] [i_0] [3]);
    }
    #pragma endscop
}
