/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!((max(-895738444, var_4))))) && var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0]) / (47 % 8160))) > (((!(((var_12 / (arr_0 [i_0])))))))));
        arr_2 [i_0] = (-127 - 1);
        var_15 = ((!((max((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_16 = (max(((55 ? var_8 : (arr_0 [i_0]))), var_8));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (((arr_4 [i_1] [i_1]) ? var_0 : (arr_4 [i_1] [i_1])));
        var_18 = (max(var_18, (((57390 ? var_0 : (-2040170726927267671 > var_11))))));
        var_19 = (((((var_7 ? var_8 : 2634649823081694103))) ? (88 ^ var_2) : var_10));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_7 [i_2] = (((((2834835915 < -1) < 1460131380)) ? (((((57398 ? 5064 : 60472))) ? ((1 ? 1 : 57376)) : (arr_5 [i_2]))) : ((((57390 - 304165543461971771) < (var_5 >= 76))))));
        var_20 = var_3;
        var_21 &= 64192;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_2] [8] [i_4] [i_2] = 57934;
                    var_22 = (((arr_10 [i_2]) <= (!255)));
                    arr_14 [i_3 - 1] = 1;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_23 += (arr_17 [14]);
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            arr_28 [i_9 + 1] [i_8] [15] [i_5] [i_5] = ((!(arr_24 [0] [0] [i_6] [i_7 + 1] [i_9 + 1])));
                            arr_29 [i_9] [i_8] [i_7 + 3] [i_6] [i_6] [i_5] = (!var_11);
                            var_24 = (max(var_10, (((!(arr_18 [i_6] [i_8] [i_6]))))));
                            arr_30 [i_5] [i_5] [i_7 + 2] [i_8] [i_9] &= (max(((((arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) < var_8))), (0 % 60321)));
                        }
                    }
                }
            }
            arr_31 [i_5] = (0 <= 1344);
        }
        var_25 = (max(var_25, ((min(((((((!(arr_16 [i_5]))))) == (1667260050 ^ -5069772535832093581))), (!var_5))))));
    }
    var_26 = 0;
    var_27 = (max(var_0, -var_6));
    #pragma endscop
}
