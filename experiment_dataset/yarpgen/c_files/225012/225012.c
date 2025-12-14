/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((1 ? -27310 : 27309)) / -11));
                arr_6 [i_0] [8] |= (~-1918834111);
                arr_7 [i_1] = (((((-(!-2817169145018006060)))) ? (+-3651931973791250504) : var_4));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_13 = ((!(3651931973791250503 + 15323173683315683399)));
                    arr_12 [i_1] [4] [i_1] = ((-(arr_2 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = ((14308 ? (arr_10 [i_0 + 3] [i_1] [i_1] [i_0 + 3]) : (((var_12 > (arr_4 [i_2 + 1] [i_2 - 1]))))));
                                var_15 = -1;
                                var_16 = (min((arr_10 [21] [i_1] [3] [21]), (((arr_0 [i_3]) | ((151 ? var_3 : var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_17 = ((-(max(9127389860447237479, -1099511627776))));
                    arr_26 [i_5] [i_5] = ((2594228598661976637 ? 27309 : -1));
                    arr_27 [i_5] [i_5] = -1;
                }
            }
        }
    }
    var_18 = 27309;
    #pragma endscop
}
