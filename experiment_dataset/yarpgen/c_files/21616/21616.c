/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!var_1) ? (var_13 || var_11) : (max(var_9, -573816970)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 = 573816986;
            var_16 = (min(var_16, ((max(((-(min(var_13, var_12)))), (!var_9))))));
            arr_6 [i_1] [i_1] [i_0 - 1] = 573816963;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_2] = 573816963;
            arr_10 [i_0] [i_0] = -1884524197;
            arr_11 [i_0] = var_13;

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_14 [i_0 + 1] = (min(25934, -573816970));

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_17 [i_2] [i_3] [i_2] [i_0] [i_0] [i_0] = (arr_2 [i_2]);
                    var_17 = (((((var_1 ? 0 : (arr_3 [i_0 + 1])))) ? (((arr_3 [i_0 + 1]) ? var_13 : (arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]))) : (arr_3 [i_0 + 1])));
                    arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = (!56);
                }
            }
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_18 = (max(var_10, (13930349418963333306 >= 3726475312)));
                            arr_27 [i_0 - 1] [i_5] [i_0 - 1] = ((var_7 == var_0) + ((max(0, (arr_3 [i_0 - 1])))));
                        }
                    }
                }
            }
            var_19 = (max((((min(var_1, 3556133410)) + var_1)), (((((max(var_7, (arr_24 [i_0 - 1] [i_0] [i_0])))) > (arr_19 [i_0] [i_5 + 2] [i_0 - 1]))))));
        }
        var_20 = ((((max(var_4, var_3)))) >> (((~1884524197) + 1884524226)));
    }
    var_21 = (max(var_21, 1));
    #pragma endscop
}
