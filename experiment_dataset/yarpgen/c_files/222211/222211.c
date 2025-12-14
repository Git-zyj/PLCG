/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_18 -= (-1794360805 != 2147483647);
                            arr_15 [i_0] [i_0] [i_0] [3] [i_0] [i_0] [i_0] = arr_10 [i_0] [i_1] [6] [i_4];
                            var_19 |= ((((arr_11 [i_0]) ? (arr_11 [i_0]) : 1)));
                            var_20 = (max(var_20, (-2147483647 - 1)));
                        }
                    }
                }
            }
            var_21 = (arr_11 [i_0]);
        }
        var_22 = (max(var_22, ((max(711944317, ((-604923696 ? (arr_1 [i_0] [i_0]) : 711944346)))))));
        var_23 -= ((((((min(var_14, var_9))) ? (arr_5 [i_0] [i_0] [i_0]) : 5608682907451806178)) / ((((8559251355971757396 + 9432153149925253071) ? -6244659566727876567 : (-2147483647 - 1))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = (((((-(arr_17 [i_5] [i_5]))) | -2147483647)));
        arr_19 [i_5] [i_5] = 8559251355971757403;
        var_24 = ((~((~(arr_17 [i_5] [1])))));
        var_25 = ((-(((arr_16 [i_5]) ^ (arr_16 [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_26 = (((var_5 + (arr_20 [i_6]))));
        arr_23 [i_6] [i_6] |= ((var_6 | (arr_16 [i_6])));
        var_27 = var_16;
    }
    var_28 = (max(var_28, var_15));
    #pragma endscop
}
