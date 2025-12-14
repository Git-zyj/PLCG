/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 39575;
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] |= max(((0 ? (var_8 << 0) : (((arr_0 [i_0]) >> 0)))), ((109 ? 25107 : ((min(4, 203))))));
        arr_3 [18] &= (arr_0 [i_0]);
        var_13 = (max(var_13, ((((((8106596092596433753 <= (((3717733862634343938 ? 0 : 40428)))))) ^ (((!(((3596226832 ? 18446744073709551612 : 25119)))))))))));
    }
    var_14 = (min(var_14, (((((((!var_5) ? ((15 ? 4 : var_1)) : ((117108617 ? 65532 : var_5))))) ? var_10 : (((!var_3) ? (var_1 || var_10) : (var_6 && var_6))))))));
    var_15 = var_7;
    #pragma endscop
}
