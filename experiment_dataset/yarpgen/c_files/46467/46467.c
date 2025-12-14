/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_9 + var_11) ? var_8 : -var_5)) != ((58626558785223929 ? (var_7 / var_10) : (var_8 * var_9)))));
    var_13 = var_4;
    var_14 = ((2811753798 ? var_1 : ((((1483213498 && 18446744073709551615) ? var_7 : 2113929216)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, (((((var_8 ? 18446744073709551615 : (arr_1 [i_0]))) <= ((max((0 / 27618), (var_8 / var_7)))))))));
        arr_3 [i_0] = (!((((2811753795 - 2811753790) ? (var_1 | var_8) : (max(var_6, 18446744073709551595))))));
        var_16 = (max(var_16, (((!((!(arr_1 [i_0]))))))));
        var_17 = (((var_4 ? (max(1, 0)) : (((max(3518, 26999)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = (min(((var_9 ? ((min(0, -18259))) : 26999)), ((((arr_5 [i_1]) <= (arr_4 [i_1] [i_1]))))));
        var_19 = ((var_7 / ((104 ? (var_1 + 0) : var_5))));
        var_20 = ((0 ? 18446744073709551615 : 4194048));
        arr_6 [i_1] |= (((((((min((arr_4 [i_1] [i_1]), var_10))) ? (var_10 || 2811753790) : (min(-5930986956274597301, 2811753790))))) && (((((max((arr_5 [i_1]), var_9))) ? (2811753798 || var_4) : var_0)))));
    }
    #pragma endscop
}
