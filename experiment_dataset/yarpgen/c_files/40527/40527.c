/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 *= (((arr_1 [i_0] [i_0]) == ((((((14514104348654384800 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [22]) : (((((arr_0 [i_0] [i_0]) >= (arr_1 [i_0] [i_0]))))))))));
        arr_2 [i_0] = ((~((~(arr_1 [i_0] [i_0])))));
        var_15 += (((arr_0 [i_0] [i_0]) != ((((min((arr_0 [i_0] [i_0]), 12355885187960578482))) ? (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (max(541165879296, (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_16 -= (((min((arr_4 [6]), (((-541165879276 || (arr_5 [0]))))))) ? (arr_5 [4]) : (max(2305561534236983296, (((~(arr_4 [14])))))));
        var_17 = ((min((((arr_1 [i_1] [i_1]) ^ (arr_4 [i_1]))), ((-541165879278 ? -5797176909086762178 : 1)))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_18 = (max(var_18, ((+(((arr_8 [10]) ? ((8375797030163440643 % (arr_8 [4]))) : (max((arr_6 [i_2]), (arr_0 [i_2] [i_2])))))))));
        var_19 = ((~((-(arr_6 [i_2 + 1])))));
    }
    var_20 = min((((!((max(9050628232784437086, -541165879287)))))), ((min(-5983755621921737818, var_2))));
    #pragma endscop
}
