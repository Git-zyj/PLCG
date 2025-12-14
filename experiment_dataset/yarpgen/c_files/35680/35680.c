/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (max(var_0, (((1712294063635048661 << (var_10 - 146))))));
    var_20 *= 1;
    var_21 = ((!((max(var_7, 1)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_22 = ((((((arr_2 [i_0]) - (arr_2 [i_0])))) && -var_18));
        var_23 = ((+(min((arr_2 [i_0]), (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_24 = ((((((min((arr_0 [i_1]), 3567387184974942786)) * (arr_0 [i_1])))) && 2310741256679930226));
        var_25 = (((arr_2 [i_1]) ? ((-4 ? 68 : 2310741256679930226)) : (min(-3392295948409360342, 6633793503276408641))));
        var_26 = ((!((min(163, (arr_3 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_27 ^= (min((max((((arr_8 [1]) ? 1 : (arr_6 [i_2]))), (((65235 && (arr_6 [i_2])))))), (!-2310741256679930226)));
        var_28 = arr_7 [i_2];
        var_29 = ((((-(arr_8 [i_2]))) & (+-830633513)));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_30 = (58 - 4);
        var_31 = (min(var_31, ((min(1, 4294967272)))));
        var_32 = (~63488);
        arr_12 [i_3] = (((((-(arr_6 [2])))) ? (arr_8 [i_3]) : (min((((var_8 ? var_12 : (arr_11 [i_3])))), ((3392295948409360333 / (arr_7 [i_3])))))));
    }
    #pragma endscop
}
