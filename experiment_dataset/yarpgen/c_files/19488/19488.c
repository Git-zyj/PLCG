/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = (arr_0 [i_0 + 2]);
        arr_2 [i_0] = (((arr_0 [i_0]) ? (min((arr_1 [i_0 - 1]), ((1 ? 1506532356142098295 : 4505121095735836004)))) : ((((min(var_1, var_0))) ? (max((arr_1 [0]), (arr_1 [i_0]))) : 1))));
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_12 *= var_1;
            var_13 = (min(var_13, ((min(((var_4 ? 1 : (arr_3 [i_1 + 1] [i_1 - 1]))), (((arr_3 [i_1 - 1] [i_1 + 2]) & (arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 1]))))))));
            var_14 = (((((var_10 ? (arr_4 [i_1 + 1]) : (arr_6 [i_1 - 1] [i_2])))) ? (((1 ? ((((arr_6 [i_1] [i_1]) + var_8))) : (max(55, (arr_3 [i_1 - 2] [21])))))) : ((min(1, 1506532356142098308)))));
        }
        var_15 = (max(((var_2 ? (arr_6 [i_1 + 2] [i_1 - 4]) : 1)), (1 - 1)));
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        arr_9 [i_3] = (((min(1506532356142098309, 1)) - (((8911800366795040291 ? 512005902 : 948701776)))));
        var_16 = -107;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_17 = ((((min(((1 ? var_7 : (arr_13 [8]))), ((((arr_12 [19]) ? (arr_6 [i_4] [i_4]) : 1)))))) && (((18446744073709551615 ? -7038828165015944174 : 13)))));
        arr_14 [i_4] = (max(((max(var_6, (arr_3 [i_4] [i_4])))), ((((max((arr_3 [i_4] [1]), 1))) % (min(-4096, 11761173071879880219))))));
        var_18 *= -63;
    }
    var_19 = (min(var_19, (((var_10 & (max((((var_7 ? var_0 : 10))), ((var_2 ? -89 : var_1)))))))));
    var_20 = (min(var_5, ((~(13 && 1)))));
    var_21 = ((var_8 && ((max(((8254 ? 2004637385 : 16816)), (!var_3))))));
    var_22 = ((((min((var_10 - 1), (max(4294967295, var_8))))) ? var_1 : var_0));
    #pragma endscop
}
