/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(0, 1)) ? 19873 : 2458948831));
    var_13 = ((var_10 ? var_7 : ((-var_4 ? (max(var_2, var_11)) : ((var_7 ? var_2 : var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = (arr_2 [i_1] [i_0]);
            var_14 = (((arr_1 [i_1 + 2] [i_1 + 1]) > 1));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_15 = 1631951691;
            var_16 = ((1243756889 != (arr_7 [10])));
            var_17 = (min(var_17, (((arr_7 [i_2 + 2]) ? var_3 : (!var_11)))));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_12 [1] [i_3] = -6164126650018013018;
            arr_13 [i_0] [i_3] = -330801784;
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_17 [i_4 - 1] [23] [23] = 62180;
            var_18 = 1;
        }
        arr_18 [i_0] = ((-2375 ? (arr_7 [i_0]) : var_11));
        var_19 = ((146 + (arr_0 [i_0])));
        arr_19 [i_0] = ((((!(arr_6 [i_0]))) ? (arr_2 [i_0] [i_0]) : ((-85 ? 31410 : 2752747346))));
    }
    #pragma endscop
}
