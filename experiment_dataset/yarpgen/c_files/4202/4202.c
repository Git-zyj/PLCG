/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = 16186512204551682970;
        var_18 = (((arr_1 [i_0]) * -17602));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = (((arr_3 [i_1]) ? (max(((~(arr_3 [i_1]))), (((13 << (((arr_3 [i_1]) - 12605615320728492694))))))) : ((((min((arr_3 [i_1]), 1352008777266957126))) ? (arr_3 [i_1]) : (((var_7 >> (((arr_3 [i_1]) - 12605615320728492704)))))))));
        var_20 = (max(3635804372730852564, -6750));
        var_21 = (-1995569890 >= 0);
    }
    #pragma endscop
}
