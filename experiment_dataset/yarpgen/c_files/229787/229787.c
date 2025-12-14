/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 112;
    var_11 *= (((1369 & 1) ? var_1 : -65535));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (min(var_12, (((((~(!var_7))) / ((-25506 ? ((-23984 ? (arr_2 [i_0]) : 1)) : (~var_7))))))));
        var_13 = (!5959);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        var_14 = (min(var_14, ((((127 ? 1 : 5508))))));
        arr_7 [i_1] [i_1 - 1] = ((((((1 ? 1494 : -128)) >= (((117 <= (arr_4 [i_1] [i_1])))))) ? ((((((((arr_5 [1]) > (arr_4 [i_1] [9]))))) < (arr_4 [i_1 - 1] [i_1 - 1])))) : 1));
        var_15 = (max(var_15, (~-1)));
    }
    var_16 = (max(var_16, var_7));
    var_17 = (((((((max(1, 3))) >> ((((0 ? var_3 : var_2)) - 5090))))) ? ((max(var_7, var_7))) : (((var_1 >= ((var_7 ? var_4 : 1)))))));
    #pragma endscop
}
