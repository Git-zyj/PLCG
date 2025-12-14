/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (max((((!(arr_0 [20])))), (((arr_0 [10]) ? (arr_0 [14]) : var_1))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 = (max(var_20, 119));
            arr_5 [i_0] [i_1] = (((arr_0 [i_0]) != var_9));
            var_21 = (max(var_21, ((((max(((11908652719267654813 ? var_12 : -119)), ((max(-4, 1)))))) >= (((arr_4 [1]) & ((-4633556275373489083 ? (arr_3 [i_0] [i_1] [i_1]) : var_6))))))));
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_22 = var_3;
            var_23 |= (arr_4 [0]);
        }
        for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_24 = var_10;
            var_25 = (max(((~(arr_9 [i_3 - 1] [i_3]))), 755059849));
            arr_13 [11] [i_3] [i_0] = (max((arr_7 [15] [i_3] [i_0]), (max((arr_12 [1]), (max(6538091354441896792, var_6))))));
            arr_14 [i_0] = (max((max((arr_7 [i_0] [16] [i_3 + 1]), (arr_7 [i_0] [i_3 - 3] [i_3 + 1]))), (arr_7 [i_0] [i_3] [i_3 - 1])));
        }
    }
    var_26 = var_11;
    #pragma endscop
}
