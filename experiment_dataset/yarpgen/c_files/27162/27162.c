/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = max(((max((arr_3 [i_0]), 4607057246639097978))), var_8);
        arr_5 [i_0] [i_0] = (arr_1 [i_0]);
        arr_6 [i_0] = (-5832579117527217089 ? (((min(6, 5)))) : (min((min(2000923403, 1900758993927628127)), (arr_2 [i_0]))));
        arr_7 [5] [13] = ((~(arr_0 [i_0])));
        var_11 = (max(13839686827070453647, (max(60117, (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((max(((((arr_8 [14]) && (arr_8 [i_1])))), var_8)))));
        var_13 &= 1523884418847105617;
        var_14 = (-(max(-3744810325322703980, 4607057246639097978)));
        var_15 = ((-(((arr_8 [0]) ? (max(13271332532694433019, (arr_10 [i_1] [i_1]))) : (arr_8 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_13 [9] = ((max((arr_9 [i_2]), (arr_12 [i_2]))));
        var_16 = ((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2]));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_17 = (min(var_17, (((var_5 || (arr_19 [i_3]))))));
            arr_20 [i_3] [i_3] = (arr_16 [i_3]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_18 = (~(((arr_19 [i_3]) ? (arr_27 [i_5] [i_6] [i_5] [i_4] [i_3]) : (arr_22 [i_3] [i_4] [i_5]))));
                            var_19 = (arr_21 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]);
                            var_20 |= (arr_26 [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1]);
                            var_21 |= (~(arr_27 [10] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]));
                        }
                    }
                }
            }
            arr_28 [i_3] = (((arr_19 [i_3]) >= (arr_19 [14])));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_22 = (arr_21 [i_3] [i_8] [i_3] [i_9]);
                    arr_34 [i_9] [5] [i_9] = min((max((arr_33 [i_3] [i_8] [i_9]), (arr_19 [i_3]))), (arr_22 [i_3] [i_8] [i_9]));
                    var_23 = ((!(arr_31 [i_9])));
                }
            }
        }
        arr_35 [i_3] = 14669;
        arr_36 [16] = var_6;
    }
    var_24 = (max((4352464051955404786 < 1786690596106088715), (max(((var_0 ? var_0 : 16545985079781923489)), var_1))));
    #pragma endscop
}
