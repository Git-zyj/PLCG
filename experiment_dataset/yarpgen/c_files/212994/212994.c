/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((2305047867 ? 1 : 0));
        arr_4 [i_0] = (1852931751 * ((((!324409926) ? (arr_0 [i_0]) : var_13))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = var_2;
            arr_8 [i_1] [i_1] [0] = ((-((min((!-324409927), (arr_0 [i_0]))))));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_0] = 324409926;
            arr_12 [4] [i_0] = (~324409929);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_15 [i_0] [9] [9] = (arr_6 [i_0] [i_0]);
            arr_16 [i_0] [i_3] [i_3] = (((min(-1, ((~(arr_13 [i_3] [8] [i_0]))))) * ((-28069 ? 0 : 91))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_25 [i_0] [i_6] [i_5 - 4] [i_6] = ((16518794032098934547 ? -2147483648 : 62));
                        var_16 = var_8;
                    }
                    var_17 = ((!((((((~(arr_10 [i_0])))) ? (min(255, -324409927)) : (-32767 - 1))))));
                }
            }
        }
    }
    #pragma endscop
}
