/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = ((((((min(-41, (arr_1 [i_0] [i_0])))) ? ((215 ? var_6 : (arr_1 [i_0] [i_0]))) : (!var_10)))) && 1);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_13 = ((((arr_4 [3] [3] [i_2]) ? 16 : (arr_4 [i_0] [3] [i_2]))) / var_0);
                var_14 = ((~(((!(arr_2 [i_1]))))));
            }
            arr_8 [14] [9] [9] = min(-3, -5);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_16 [i_4] = var_5;
                            arr_17 [i_0] [6] [i_0] [i_3] [i_0] [i_4] [1] = ((1 % (((arr_15 [i_5] [i_4] [0] [i_4] [i_5 - 1] [6] [i_5 + 1]) | (arr_15 [i_5] [i_4] [i_5 - 2] [1] [i_5 + 1] [i_5] [i_5 - 2])))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_15 = ((var_3 >> (((47475 < (arr_4 [i_0] [i_0] [4]))))));
            arr_20 [i_6] [i_6] = ((((1 ? -2 : 6))) || (arr_11 [i_6 - 2] [0] [0] [i_6]));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_28 [i_0] [i_6] [i_7] [7] [i_0] [i_6 - 2] = ((((130 - (arr_7 [8] [i_6 - 2] [12] [i_6 - 2]))) == ((103 ? 16 : 28))));
                        arr_29 [i_6] = (((arr_0 [i_0]) || (arr_13 [i_6] [i_0])));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_16 = (arr_9 [i_9] [i_0] [6]);
            var_17 = ((((6 ^ ((0 ? 9 : var_10)))) <= ((((arr_4 [i_0] [i_0] [i_0]) || (arr_4 [i_0] [i_0] [i_9]))))));
        }
        var_18 = 0;
        arr_33 [i_0] = (((199 | 2) < (arr_5 [i_0] [i_0] [3] [3])));
    }
    var_19 = var_4;
    #pragma endscop
}
