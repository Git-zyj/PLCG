/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, (((((min(((var_7 ? (arr_2 [6] [i_0]) : (arr_1 [18] [i_0]))), ((max((arr_1 [2] [2]), (arr_1 [20] [i_0]))))))) ? (((724309828 - 724309828) ? (((arr_1 [1] [1]) + var_4)) : var_2)) : ((((arr_2 [18] [i_0]) ? (arr_2 [1] [i_0]) : ((min(var_7, (arr_1 [12] [i_0]))))))))))));
        arr_3 [10] &= ((724309825 ? 3479053031 : -724309828));
        var_19 = (min((arr_0 [i_0]), (((((((arr_2 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0])))) ? ((201 ? 724309827 : var_1)) : ((max((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_4 [i_0] = ((((min(var_10, (arr_1 [i_0] [i_0])))) ? ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : ((min(-99, 40318)))));
        arr_5 [i_0] = (((((min(-724309828, 25218)))) ? ((max(var_12, (arr_0 [i_0])))) : ((var_2 ? ((min(var_11, (arr_1 [i_0] [i_0])))) : var_14))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (max(var_20, (((((max((arr_6 [i_1]), (arr_6 [i_1])))) ? (((arr_6 [i_1]) >> (((arr_6 [i_1]) - 1978345606)))) : (arr_6 [i_1]))))));
        var_21 = (min(var_21, ((((max(((min(25218, -724309828))), ((var_9 ? (arr_6 [3]) : (arr_7 [i_1] [i_1]))))) % (((((((arr_1 [i_1] [i_1]) == (arr_0 [i_1])))) - (arr_2 [i_1] [i_1])))))))));
        var_22 |= var_17;
        var_23 = var_13;
        var_24 = (((((arr_0 [i_1]) + 2147483647)) << (((((((arr_6 [i_1]) ? (((arr_0 [i_1]) ? (arr_0 [i_1]) : var_12)) : var_8)) + 17)) - 7))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (min(((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))), (max(var_3, (arr_2 [2] [2])))))));
        var_26 = (246 ? ((var_3 ? -724309818 : 1)) : (((arr_9 [i_2] [i_2]) ? 0 : 25198)));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = var_11;
        var_27 += ((((((arr_10 [i_3] [i_3]) ? (arr_10 [i_3] [6]) : (arr_10 [i_3] [i_3])))) ? (arr_12 [i_3]) : (min(var_5, (arr_10 [i_3] [i_3])))));
        arr_16 [i_3] = (min((((arr_1 [14] [10]) ? var_13 : (arr_1 [0] [i_3]))), var_13));
        arr_17 [5] [5] |= ((((((arr_1 [2] [i_3]) ? ((max(0, 144))) : var_6))) || ((max((arr_2 [0] [i_3]), (arr_6 [i_3]))))));
        var_28 += (max(((((arr_2 [18] [i_3]) ? (((var_0 == (arr_10 [i_3] [i_3])))) : (arr_9 [9] [4])))), ((0 ? -1 : 4294967295))));
    }
    var_29 = (((var_7 ? (((max(var_2, var_8)))) : var_3)) ^ ((min(((var_10 ? var_15 : var_5)), var_0))));
    var_30 = var_12;
    #pragma endscop
}
