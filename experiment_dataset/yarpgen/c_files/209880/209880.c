/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (min(16, ((-27120 | (arr_0 [i_1 + 2] [i_0])))));
                arr_6 [i_1] [1] [i_1] = (min(((1 ? 127 : (((var_4 + 2147483647) << (((var_3 + 22983) - 14)))))), var_9));
            }
        }
    }

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_9 [i_2] = var_4;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_3] [i_2] [13] [i_5] = (arr_13 [i_3] [i_5]);
                        var_15 = var_6;
                        arr_19 [i_2] [i_4] [i_3] [i_5] = 15330;
                        var_16 = (min((((var_4 && (-32767 - 1)))), ((-1274741621 ? (arr_5 [i_4 - 2] [i_3] [i_4 - 1]) : var_8))));
                    }
                }
            }
        }
        arr_20 [i_2] = (1 * -4022269391945402397);
    }
    var_17 = var_5;
    var_18 = (var_12 || var_5);
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_19 = (177 | -28);
                var_20 = (arr_26 [i_6] [i_6] [i_6]);
                arr_27 [i_6] [7] [i_7] = 0;
            }
        }
    }
    #pragma endscop
}
