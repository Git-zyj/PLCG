/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-6355510763552789595 + 9223372036854775807) << ((var_4 % (var_5 || var_11)))));
    var_20 = (max(var_20, ((+((((~var_4) != ((var_16 ? var_5 : var_12)))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((1116892707587883008 == ((~(((arr_2 [i_0]) ? 1437800184990792986 : (arr_0 [i_0])))))));
        var_21 = ((((max((var_17 || var_13), (arr_1 [i_0] [i_0])))) ? (((!var_11) ? (!var_2) : (arr_0 [i_0]))) : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = (((min((((var_6 ? var_0 : var_0))), (((arr_1 [i_0] [i_0]) ? var_17 : (arr_2 [i_0]))))) != (((((arr_1 [i_0] [i_0]) ? -1437800184990792990 : var_7)) % (arr_0 [i_0])))));
        var_22 = (((((~(arr_2 [i_0]))) | 16815187465926895216)));
    }
    #pragma endscop
}
