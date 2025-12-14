/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(var_10, (var_12 - var_3))) >= ((((max(-175174000, var_0)) > var_11)))));
    var_16 = max((-var_6 | var_7), ((((var_14 ^ var_1) > var_12))));
    var_17 = 13835058055282163712;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) >= (17762 < 62090)));
        var_18 = (-(min(((8408279544039234195 ? 12352 : var_0)), ((var_9 ? (arr_0 [i_0]) : 1985178177)))));
        var_19 = ((!((((((min(-1006104599, var_3)) + 2147483647)) << (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) + 98015652)) - 13)))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_20 = ((((((arr_5 [i_1]) <= (arr_3 [i_1 - 1])))) != (((!((max(var_7, var_2))))))));
        var_21 = ((-(var_7 + 426617150)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] [9] = (~(((!var_14) % -var_13)));
        var_22 = arr_4 [20];
        arr_9 [i_2] [i_2] = ((((-(!10235638095925426846)))) ? 17179803648 : (((!((min(var_8, (-2147483647 - 1))))))));
    }
    var_23 = (min(var_23, (min((min((max(1766358004, -109387943)), 1747973488)), ((min(var_1, var_0)))))));
    #pragma endscop
}
