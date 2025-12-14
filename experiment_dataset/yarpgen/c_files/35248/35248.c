/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((!55) ? 26792 : 4717))))));
    var_12 = (min(var_12, 5630725039793303277));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 |= (((min(((max(9, -10))), (201 / 5710047982790980822)))) ? ((18 ? -1 : 3135872209)) : (arr_0 [i_0] [i_0]));
        var_14 = ((((max((((((arr_0 [i_0] [i_0 + 1]) + 2147483647)) << (46 - 46))), (((!(arr_0 [8] [8]))))))) ? var_8 : (((arr_0 [i_0 + 1] [i_0 + 1]) - -7))));
        arr_2 [i_0] = ((((((((-5630725039793303259 % (arr_0 [i_0 + 1] [i_0])))) ? (((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0 + 1] [i_0]) : (arr_0 [i_0] [i_0]))) : ((~(arr_0 [i_0] [i_0])))))) ? ((255 ? (min(4442791498125359680, 17)) : var_6)) : (((65535 / ((-2741562575342286684 ? 20 : 1187035211)))))));
    }
    #pragma endscop
}
