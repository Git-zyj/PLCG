/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_5 / var_18) ? var_19 : var_5)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 ^= (min((max(((var_19 ? var_14 : var_7)), ((min(var_10, var_10))))), var_18));
        var_22 = ((((((var_14 ? var_2 : var_19)) * -var_4)) * (((-((var_3 ? var_17 : var_10)))))));
        arr_4 [10] [10] &= (-56 == 1);

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_23 = (max(var_23, ((((!(252 <= 14783889573211575312)))))));
            var_24 = ((((!((min(var_17, var_16)))))) < (~-var_9));
            var_25 = (min((max((255 * 16678885816712522058), (((var_15 ? var_7 : var_18))))), (((var_10 ? (min(var_14, var_1)) : var_10)))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (((!((var_5 >= ((var_7 ? var_19 : var_9)))))))));
            arr_11 [i_0] = ((((min((var_2 + var_13), var_6))) ? (~var_3) : var_5));
            var_27 = var_13;
            var_28 = (min(var_1, var_3));
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_29 = var_14;
        arr_14 [i_3] = ((var_19 - (var_12 - var_12)));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4 + 1] = ((((!(var_12 >= var_19))) ? var_13 : (min(((var_9 ? var_18 : var_6)), var_4))));
        arr_18 [i_4] = 1;
        var_30 = (((((~((var_10 ? var_17 : var_16))))) ? ((((!((min(var_1, var_12))))))) : -3200417562739988222));
    }
    #pragma endscop
}
