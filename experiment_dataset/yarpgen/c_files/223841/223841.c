/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = 26;
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = (arr_3 [i_1]);
        arr_4 [11] = ((26 | (((((max(26, 243)))) | (((arr_2 [i_1] [i_1]) / 17259765977620119804))))));
        var_20 = 487620566;
    }

    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_21 = (min((min((((var_13 <= (arr_3 [i_2])))), (arr_0 [i_2] [i_2]))), 5));
        arr_8 [i_2] [i_2] = ((((max(3004663069, (arr_2 [i_2 - 2] [i_2 - 2])))) ? (max((arr_3 [i_2 + 1]), (arr_6 [i_2 - 1]))) : 5));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_22 = ((+(((arr_2 [i_3] [i_3]) >> (((arr_1 [i_3]) - 128))))));
        var_23 = ((min((((arr_2 [i_3] [i_3]) || (arr_10 [i_3]))), ((!(arr_3 [i_3]))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        arr_14 [i_4] [i_4 + 1] = (((~(arr_12 [i_4] [i_4 - 1]))));
        arr_15 [i_4] [i_4] = ((var_10 | (arr_3 [i_4 + 1])));
    }
    var_24 = (!3145728);
    #pragma endscop
}
