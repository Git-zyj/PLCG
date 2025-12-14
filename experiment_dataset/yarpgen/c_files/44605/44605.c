/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_14 = (max(var_14, (arr_8 [i_4] [i_4] [i_4 + 4] [i_4 + 3] [i_4] [i_4 - 2])));
                            var_15 = (max(var_15, ((((arr_7 [i_3] [i_2 - 2] [i_2 + 1] [i_0] [i_0] [i_0]) || 1)))));
                            var_16 = (((((arr_5 [5] [5]) + 2147483647)) >> (((arr_5 [i_4 + 2] [i_1]) + 1828506030))));
                        }
                        var_17 -= (((!(((var_6 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_7 [i_3] [i_2 - 2] [i_0] [i_1] [i_0] [i_0])))))) ? (((((arr_1 [i_1]) || (arr_4 [i_3] [i_3]))) ? ((((arr_0 [i_0]) && 1445150410))) : (((-859651440 || (arr_3 [i_0] [i_0] [i_0])))))) : (((!((!(arr_2 [i_0] [i_2] [i_3])))))));
                        var_18 = ((+(((arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1]) * (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = 0;
        var_19 = ((!(((712041637 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        arr_12 [i_0] = ((+(min((arr_2 [i_0] [i_0] [i_0]), ((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_0]))))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_16 [i_5] = (min((arr_14 [i_5] [i_5]), -366778022880638210));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_24 [i_7] [i_6] [i_6] [i_5] = (arr_15 [i_5] [i_5]);

                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        var_20 = (arr_25 [i_6] [i_6]);
                        var_21 = (min(((((((arr_22 [12] [i_6] [7]) ? 1 : (arr_20 [i_7] [i_8])))) ? 65534 : ((-18030 ? 65534 : 3584)))), var_8));
                    }
                    var_22 = (min((arr_13 [i_6]), (((((arr_14 [i_5] [i_5]) ? (arr_26 [i_7] [i_7] [i_7] [i_7]) : (arr_20 [i_5] [i_6]))) + (arr_14 [i_5] [i_5])))));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_23 ^= (((max((arr_28 [i_9 - 1] [i_9]), ((((arr_29 [0]) && var_0))))) / ((-(min((arr_28 [i_9] [i_9]), 620101789))))));
        var_24 = (min((arr_29 [i_9]), (((arr_27 [i_9 - 1]) & (((!(arr_29 [i_9]))))))));
        arr_30 [i_9] = (arr_29 [i_9]);
    }
    var_25 = var_3;
    var_26 = ((var_4 <= (((((max(var_0, var_2))) && (!var_12))))));
    var_27 = ((!(((var_12 ? (!var_5) : ((-229902258 ? var_6 : var_4)))))));
    var_28 = (min(var_5, var_4));
    #pragma endscop
}
