/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = var_7;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = ((((((max(860477362, (arr_1 [i_2])))) ? (arr_4 [14] [14]) : 55466577764499831)) << ((4675663601655386887 ? ((2147483647 ? (arr_5 [1] [i_1 - 2] [i_0]) : var_1)) : (max(2631, var_4))))));
                        arr_11 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_3] [i_0 + 2] = max(((-5534293637167649389 ? -25889 : -1341)), ((((arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 2]) && (arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 2])))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, 1));
                        arr_16 [i_2] [i_1] [2] [0] = -731561545;
                    }
                    var_18 += (arr_14 [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_19 = (~(arr_21 [2] [i_6] [i_6]));
                arr_22 [i_5] = ((((((0 ? 16 : (arr_21 [1] [i_6] [6]))))) > (max((var_13 * -17), ((-55466577764499828 ? 10 : -30143))))));
                var_20 = ((((max(4096, (max((arr_17 [i_5]), (arr_17 [8])))))) ? (((65526 - var_6) ? ((-6798540081902320074 ? 10 : (arr_21 [i_5] [i_6] [22]))) : ((((arr_18 [i_6]) + var_15))))) : (((((!(arr_18 [i_6]))))))));
            }
        }
    }
    #pragma endscop
}
