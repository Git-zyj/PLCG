/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_5);

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((-(min((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_2)), -66985506))));
        var_11 = (((max(var_9, 15605378043563264180)) * ((((var_4 > (arr_2 [10])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_12 = (min(-21380, (min((max((arr_2 [i_1]), var_9)), var_7))));
        arr_8 [i_1] = (~var_7);
        arr_9 [i_1] [i_1] = var_1;
        arr_10 [i_1] = min(1037643216, -1626997379289153918);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_20 [i_2] [11] [11] = 134217696;
                    var_13 = (min((min(1984910064, (arr_19 [i_3 - 2] [i_3 - 2] [i_3 - 1]))), (((!(arr_15 [i_3 + 1] [i_3 + 1]))))));
                }
            }
        }
        arr_21 [0] = ((!(((((max((arr_19 [i_2] [i_2] [i_2]), 49712))) ? (((var_2 ? var_7 : var_3))) : var_1)))));
    }
    #pragma endscop
}
