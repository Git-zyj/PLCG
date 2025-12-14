/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_11 |= (min(((((-(arr_5 [i_0] [i_0]))) ^ var_1)), ((((((1845282678491915379 + (arr_5 [i_0] [15])))) || ((1845282678491915371 && (arr_0 [i_0]))))))));
            arr_6 [i_0] [i_1] = (((((((((arr_2 [i_0] [4]) ? (arr_5 [i_0] [i_1]) : (arr_2 [i_1] [i_0])))) ? (min((arr_2 [i_1] [i_1]), var_9)) : (arr_1 [i_1])))) ? (((arr_2 [7] [i_1]) << (((arr_3 [i_0] [i_1]) + 3783570691977104176)))) : 1845282678491915379));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_12 ^= ((min(var_9, ((var_2 ? 1845282678491915379 : var_8)))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((-(arr_5 [i_0] [23])));
                        var_13 += (~var_8);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    {
                        var_14 = (max((arr_4 [i_1] [i_4] [i_5 - 1]), (arr_7 [i_4])));
                        var_15 &= ((!((!(((var_7 << (((((arr_3 [i_0] [4]) + 3783570691977104148)) - 4)))))))));
                        arr_21 [i_0] [i_0] [i_1] [19] [i_5] = (arr_3 [i_0] [i_1]);
                        var_16 = (min(var_16, ((max((((!(arr_17 [23] [i_1] [i_4])))), (arr_20 [i_0]))))));
                        var_17 |= 26482;
                    }
                }
            }
            var_18 = (max(var_18, (((+(((((min((arr_8 [i_0] [i_0] [i_1]), -59))) || ((max(var_4, (arr_20 [i_0]))))))))))));
        }
        arr_22 [i_0] = (((((max((!59), (max((arr_17 [i_0] [20] [20]), var_5)))))) / (arr_14 [i_0] [i_0] [i_0])));
    }

    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_19 = (min(var_19, ((max((((arr_0 [i_6 - 2]) ? (arr_0 [i_6 + 1]) : (arr_0 [i_6 - 3]))), (((arr_0 [i_6 + 1]) ? (arr_0 [i_6 - 2]) : var_4)))))));
        var_20 = (((((((var_0 ? var_5 : var_9))))) + (arr_2 [i_6] [i_6 + 1])));
        arr_26 [i_6] = -1845282678491915380;
        var_21 = (min(var_21, (arr_9 [23] [i_6] [i_6 + 1] [i_6])));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_22 = (min(var_22, (((((!(((-(arr_28 [i_7])))))) ? (((((58 ? 1657826127 : (arr_19 [i_7] [i_7 - 1] [i_7] [13] [i_7])))) ? ((max((arr_17 [i_7] [9] [i_7]), (arr_14 [i_7] [i_7] [i_7 + 1])))) : (((arr_11 [i_7] [i_7] [i_7] [i_7]) ? (arr_3 [9] [i_7 - 1]) : (arr_24 [10] [i_7]))))) : -1845282678491915397)))));
        var_23 = (min((max((((arr_16 [18] [i_7] [i_7 + 1]) & var_7)), (min((arr_24 [9] [i_7]), var_5)))), ((min(((-62 ? (arr_9 [12] [i_7] [i_7 - 1] [i_7]) : (arr_12 [i_7] [4] [18] [i_7]))), (!var_3))))));
    }
    #pragma endscop
}
