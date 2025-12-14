/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_9;
    var_18 = ((((max((((var_0 ? (-32767 - 1) : -26505))), var_16))) ? (((var_6 || 1) ? var_15 : (!var_8))) : (((var_10 ? (min(var_16, var_6)) : var_16)))));
    var_19 = ((((((((var_11 ? var_0 : 1988291166))) ? (min(var_14, var_7)) : 1))) ? var_15 : var_13));
    var_20 = (min(((var_8 ? var_15 : ((max(var_4, 1912833407))))), ((((!1) ? ((15433023694988038072 ? var_8 : var_12)) : (((max(25, var_2)))))))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = (min(((((max((arr_0 [2]), (arr_0 [i_1])))) ? (max((arr_1 [i_0]), (arr_3 [9]))) : (min(-336738606, -1988291166)))), 64));
            arr_4 [i_0 - 1] = (min((((((var_8 ? (arr_0 [i_1]) : 1))) ? var_8 : ((max(-1, (arr_1 [i_0])))))), ((+((((arr_0 [i_0]) > var_9)))))));
            arr_5 [i_1] = (arr_1 [i_1]);
        }
        arr_6 [i_0] = arr_1 [i_0];
        var_23 = var_9;
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
    {
        arr_10 [4] [i_2] = 1;
        arr_11 [3] = (((arr_7 [i_2 + 2]) && (((((max(var_13, (arr_1 [i_2])))) ? (arr_2 [i_2 + 1] [i_2]) : var_5)))));
    }
    #pragma endscop
}
