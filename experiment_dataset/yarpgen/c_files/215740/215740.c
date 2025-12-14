/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((((min(var_4, var_1))) > var_9)))));
    var_21 = (((((min(-77, 127)))) < (((((2425170281 ? var_15 : var_8))) ? var_9 : 35))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_5 [6] [i_1 + 2] [i_1 + 2] = ((-16777216 ? -27911 : -47));
            arr_6 [i_0] [i_0] [i_0] = -82;
            arr_7 [i_0] [i_0] [i_0] = ((!(1 * 2220463707)));
            arr_8 [5] = (((1355468216 ? 2220463707 : 2147483647)));
            arr_9 [i_0] = (max(-1, 18530));
        }
        arr_10 [i_0] = (((((-(((arr_3 [i_0]) ? 5 : 2220463707))))) ? (arr_1 [i_0]) : ((-(~2230591941706436136)))));
        arr_11 [i_0] [i_0] = ((!((max(54, (arr_1 [i_0]))))));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_14 [i_2] = (min(((-((-2 ? 32767 : (arr_2 [i_2 + 1] [i_2]))))), (((-(arr_1 [i_2 + 1]))))));
        arr_15 [i_2] = ((!(var_7 > var_6)));
    }
    var_22 = ((!(((var_10 ? var_0 : var_18)))));
    var_23 = ((-56 ? -1 : (((!(((var_12 ? var_17 : var_8))))))));
    #pragma endscop
}
