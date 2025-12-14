/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (max((arr_3 [i_1 + 1] [i_1 + 2]), (((arr_3 [i_1 - 2] [i_1 + 1]) - (arr_3 [i_1 - 2] [i_1 - 3])))));
                var_11 |= 32760;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_12 = ((-(~-32761)));
                            var_13 *= ((!(((-(arr_9 [i_1] [i_1] [i_1 + 1] [5] [i_2] [i_2 + 1]))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_0]) | var_3));
                        }
                    }
                }
                arr_11 [i_1] = ((!((max(((min((arr_8 [i_0] [i_0] [i_0] [i_0]), var_0))), (max(16630524500117331192, (arr_0 [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_14 |= (((var_5 ? var_3 : (arr_14 [i_4]))) % var_9);
                arr_17 [i_4] [i_4] [i_5] = ((!(((arr_14 [i_4]) == (arr_16 [i_5])))));
                var_15 -= (min((((1 - 1816219573592220405) - ((min(var_6, (arr_14 [i_4])))))), (((-(arr_13 [i_4]))))));
            }
        }
    }

    for (int i_6 = 4; i_6 < 21;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_23 [i_7] [i_6] [i_7] = ((+(((arr_13 [i_6]) ? (~16630524500117331183) : var_2))));
            var_16 = var_5;
        }
        arr_24 [i_6] = ((min((arr_20 [i_6] [i_6]), var_4)));
    }
    #pragma endscop
}
