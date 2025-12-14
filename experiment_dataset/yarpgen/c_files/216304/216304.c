/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(var_8, var_3))) ? (((max(7660, var_12)))) : ((1 ? var_10 : var_4))))) ? (max(((min(var_5, var_5))), ((var_13 ? 14023313788038689842 : var_3)))) : (max(((max(-8357683005547024786, var_2))), (max(var_12, var_7))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_15 -= (max(((((max(var_12, (arr_1 [i_0] [8])))) ? (max((arr_0 [i_0]), var_10)) : ((7751012457849492821 ? (arr_0 [9]) : -14)))), ((((min((arr_0 [i_0]), 3716658175))) ? ((var_3 ? 2379389564 : (arr_1 [i_0] [i_0]))) : (min((arr_1 [i_0] [i_0]), (arr_0 [i_0 - 2])))))));
        var_16 = ((((max(((max(0, var_1))), ((var_12 ? 1 : (arr_0 [i_0])))))) ? ((max(((1 ? -8512302659079448948 : 1)), ((max(var_3, 1)))))) : ((((max(var_10, 21151))) ? ((max(5101268897291052964, 1))) : ((var_2 ? (arr_1 [i_0] [i_0]) : 0))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = (max(((min((((arr_3 [i_1]) ? var_12 : var_10)), (((10600338567799144320 ? (arr_2 [i_1] [i_1]) : 1)))))), ((((max(-2571, 3845063426))) ? (max(2405356242410248053, 9013)) : (((0 ? (arr_4 [i_1]) : var_11)))))));
        arr_6 [i_1] = (max((max((min(478925850, -1276445981508524657)), ((min(1, var_13))))), (((24 ? -1251834974 : -2571)))));
    }
    #pragma endscop
}
