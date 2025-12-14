/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(!17467404071308374148)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = ((((max((1465918473 || 2047), (-1181424915 != 3400093321)))) + (-2147483647 - 1)));
        var_13 = ((-((((arr_0 [i_0]) != 1264633382)))));
        var_14 = ((-48 ? 23 : var_5));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 -= ((!(((41 - (arr_2 [i_1]))))));

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_16 = (arr_6 [i_1]);
            var_17 = (4053312044 ^ var_2);
            var_18 = (((!var_0) >= (var_10 | var_5)));
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_19 = (arr_6 [11]);
        var_20 = ((((((arr_5 [i_3]) ? (arr_4 [9]) : 682688914)) >> (var_1 - 122))) ^ (((~(~47211)))));
        var_21 = (min(var_21, (((+((-(min((arr_9 [8] [i_3]), 13975235440952242958)))))))));
    }
    #pragma endscop
}
