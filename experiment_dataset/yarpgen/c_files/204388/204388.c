/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [5] [5] = (2765524587745347706 ? 4101935729381336706 : ((((3761837324 ? (arr_1 [i_0]) : (arr_1 [i_0]))) / ((var_2 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = (!var_17);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_1 [i_1]);
        var_20 = (min(var_20, ((((((3761837324 ? (arr_4 [0] [i_1]) : 533129961))) ? ((var_1 ? (((arr_5 [i_1]) ? 65535 : var_12)) : -24237)) : (((((arr_1 [i_1]) && 114)))))))));
        var_21 = (!-1);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = ((((-127 ? ((var_13 ? -24614 : (arr_7 [i_1]))) : (arr_4 [i_1] [i_2]))) > ((((-(arr_8 [18] [7]))) / 1))));
            var_23 = ((((min((arr_7 [i_2]), var_6))) - ((((((arr_9 [i_2] [i_1] [i_1]) ? 410478469 : var_9))) ? var_5 : ((min((arr_8 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))))));
            arr_10 [i_1] = (max(114, ((-(((arr_9 [i_1] [i_2] [i_2]) ? -32761 : 111))))));
        }

        /* vectorizable */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_24 = (min(var_24, (((-8645 > ((var_6 ? (arr_8 [i_1] [i_1]) : (arr_0 [i_1]))))))));
            arr_15 [i_1] [i_1] [i_1] = (~15);
            var_25 += var_18;
            var_26 = (var_7 ? (arr_4 [i_1] [i_1]) : ((-(arr_14 [5]))));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            var_27 = ((-(arr_17 [i_1] [i_1])));
            var_28 = (84 > 1);
        }
    }
    var_29 = (((((-1 ? ((100 ? 4294967295 : 71)) : (!var_1)))) ? var_13 : var_8));
    var_30 = (!var_13);
    #pragma endscop
}
