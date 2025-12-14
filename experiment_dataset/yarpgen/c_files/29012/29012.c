/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(1, -20459));
    var_21 = ((-(((32 ? 20459 : 20460)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0 + 1] [i_0] [13] = var_14;
                    var_22 &= ((-4535271252579796348 ? 239 : 3401202603));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_23 = (((((((1 ? (arr_9 [13] [i_2] [i_3]) : (arr_7 [i_0]))) <= (768 == 12288)))) << ((-(((!(arr_13 [i_0] [i_0] [10]))))))));
                        var_24 = ((min(var_8, -421108895)));
                    }
                    var_25 = (max(var_25, ((min(((((123 && (arr_8 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_2]))) || var_15)), (-7586990579867494081 || 145))))));
                    var_26 += (((255 || -2147483647) == (min((max((arr_3 [i_0]), 4032)), (((var_7 && (arr_3 [i_1 - 2]))))))));
                }
            }
        }
        var_27 = var_19;
    }
    #pragma endscop
}
