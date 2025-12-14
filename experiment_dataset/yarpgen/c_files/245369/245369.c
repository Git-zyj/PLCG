/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 = var_7;
        var_12 = (460924132 && var_10);
        var_13 += arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, 8730));
        arr_7 [i_1] = ((-159 != -3027) >> ((((arr_0 [i_1]) == ((((arr_2 [i_1]) || (arr_6 [10]))))))));
        arr_8 [i_1] = ((min((max((arr_4 [13]), (arr_0 [i_1]))), 924626488)) | ((max((max(1536, 18033)), var_3))));
        var_15 *= ((((-(arr_4 [i_1]))) == -1674160477));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_16 = -1850462985;
        arr_13 [i_2] = ((!(!18033)));
        arr_14 [i_2 + 3] = (-(min(2147483643, -24652)));
    }
    var_17 = var_4;
    var_18 = var_2;
    var_19 = var_9;
    #pragma endscop
}
