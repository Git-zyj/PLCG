/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = ((~(((min(1021277354, 1021277328)) * (!25851)))));
            arr_5 [i_1] [i_1] = 5388589292316233307;
            arr_6 [i_0] [i_1] [i_1] = (((!-1) ? (((!(~-1)))) : (min(-1021277355, 1296))));
        }
        arr_7 [i_0] = ((~((((1 ? 1073741822 : 1296)) >> (-1021277355 + 1021277369)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (((((~64240) * -1)) & ((((64249 < 1) >= -336069025)))));
        var_19 = (max(992323627, 31807));
        var_20 = (max(var_20, (((((-1021277355 & 28645) ? (1322 <= 3711874939) : 336069025)) > ((336069024 + ((min(0, 22736)))))))));
    }
    var_21 = ((~(var_5 >= var_13)));
    var_22 |= var_0;
    var_23 = -7;
    #pragma endscop
}
