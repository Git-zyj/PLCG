/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (0 << 1);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = ((((min(var_6, 1)))) | (arr_0 [i_0]));
        var_22 = (((((min(var_14, (arr_0 [i_0])))) ? (arr_3 [i_0]) : 3068460147970313423)));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = ((+(min((((arr_3 [i_1]) ? (arr_2 [i_1]) : 18446744073709551603)), (((!(arr_3 [i_1]))))))));
        var_24 *= -65530;
        var_25 = (min(var_25, 3676169115));
        var_26 = ((((((!((max(var_18, (arr_2 [i_1])))))))) > var_18));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [10] = (min(((((arr_8 [i_2] [i_2]) + (arr_8 [i_2] [i_2])))), (max((arr_8 [i_2] [i_2]), 15))));
        var_27 += (min((((!(arr_3 [i_2])))), var_18));
    }
    #pragma endscop
}
