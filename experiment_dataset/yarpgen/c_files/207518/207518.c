/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = ((!(((((var_9 ? (arr_0 [1]) : 18014396361998336)) * var_1)))));
        arr_3 [i_0] = ((var_4 && ((((min((arr_1 [i_0]), (arr_2 [i_0])))) == ((-8192 ? (arr_2 [i_0]) : var_3))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (((((((max((arr_11 [i_0] [i_0]), -1923800055086937290))) ? (arr_7 [i_0] [i_0] [i_2 + 1]) : (arr_9 [i_0] [i_1])))) ? ((-(arr_8 [i_0] [i_1 + 1] [i_0] [i_3 - 1]))) : 8187));
                        var_15 = (max(var_15, ((((((arr_4 [i_3 - 1] [i_2 + 2] [i_1 + 1]) >= (arr_6 [i_0] [i_1] [i_0] [i_1]))) && var_3)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_16 = (arr_12 [i_4]);
        arr_14 [i_4] = (max((arr_13 [7]), var_1));
        var_17 += ((((!(arr_13 [i_4]))) || (((8213 / (arr_12 [i_4]))))));
    }
    var_18 = (min(var_18, (((((max(var_8, var_5))) ? var_2 : (max((max(var_11, var_5)), var_4)))))));
    #pragma endscop
}
