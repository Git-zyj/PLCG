/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (min(var_11, ((((15805322479897580836 <= var_9) > ((var_2 ? 32 : var_8)))))));
        var_12 = ((9180544708508181622 ? 9266199365201369993 : 4087874978193150888));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 = (30720 <= 15805322479897580836);
        var_14 = arr_3 [i_1];
        var_15 = ((~(~var_1)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_16 = arr_0 [i_2];
            var_17 = ((172 ? 27354 : 0));
            arr_12 [i_2] = var_5;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_18 -= 13000015902362615855;
            var_19 = (((arr_11 [i_2]) ? (((arr_13 [i_2] [i_4]) ? 0 : 1)) : (((!(arr_2 [i_2]))))));
        }
        var_20 *= ((4503462188417024 ^ (arr_8 [8] [i_2])));
        var_21 = 1;
    }
    var_22 = var_1;
    var_23 = (var_3 > var_9);
    #pragma endscop
}
