/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_6;
    var_15 = ((((max(var_2, ((var_2 ? 2243894865 : var_1))))) ? (!var_11) : var_5));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [11] [i_0] = ((((var_12 != (~116))) ? var_8 : ((((max(15437332954461338015, var_2))) ? ((max(2002028017, 209))) : (arr_1 [i_0])))));
        var_16 = (min(var_16, ((min(((min((arr_0 [i_0]), (arr_0 [i_0])))), (max((arr_1 [i_0]), ((max(227, 2))))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = (max((max((arr_5 [i_1] [16]), (arr_6 [i_1] [i_1]))), (arr_6 [i_1] [i_1])));
        var_17 = ((-(max((arr_5 [i_1] [i_1]), 2243894865))));
        arr_8 [i_1] = ((+(((!((max((arr_6 [18] [24]), var_10))))))));
        var_18 = (min(var_18, ((max((min(15757, 1)), 8942)))));
    }
    var_19 = (~var_0);
    #pragma endscop
}
