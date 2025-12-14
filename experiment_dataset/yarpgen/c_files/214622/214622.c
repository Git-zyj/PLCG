/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((6343366632752730415 ? 777554491 : (((-3581960700424174935 ? -6250 : -98)))))) ? ((97 ? var_0 : 4954530932518183625)) : 5075);
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (max((max((arr_2 [i_0]), 138)), ((((88 / 230) ? (110 * -15) : ((13492213141191368001 ? 104 : 70)))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (max(((+((max((arr_2 [i_0]), 61))))), 721555335));
            var_17 = 45;
            var_18 = (max(((((max(var_3, var_10))) ? ((max(101, -2127597139))) : var_10)), (arr_3 [i_1] [6] [i_0])));
        }
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = (max((max(((var_2 ? 1714502210675417630 : var_9)), var_7)), (17515328838079237878 && 1)));
        var_19 = ((-((var_5 + ((-42 ? var_2 : var_4))))));
        arr_9 [i_2] = var_11;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = var_2;
        var_21 = ((((7908 % (max(-849676764, var_6))))) ? var_9 : (!39775));
        var_22 = (max((max((arr_11 [i_3]), (arr_11 [i_3]))), (((arr_11 [i_3]) ? var_10 : (arr_11 [i_3])))));
        var_23 -= (((1 & 65) ? var_4 : -var_0));
        arr_13 [i_3] [i_3] = (i_3 % 2 == 0) ? ((((((!((((arr_11 [i_3]) ? var_12 : 1714502210675417624)))))) >> (((((((arr_10 [i_3]) ? 18171225873638248252 : var_4)) << (((max((arr_11 [i_3]), var_2)) - 8755140800459838211)))) - 15281219481171394538))))) : ((((((!((((arr_11 [i_3]) ? var_12 : 1714502210675417624)))))) >> (((((((((arr_10 [i_3]) ? 18171225873638248252 : var_4)) << (((((max((arr_11 [i_3]), var_2)) - 8755140800459838211)) + 8755140800459819238)))) - 15281219481171394538)) - 7556534229224390677)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_24 = (max(var_24, (arr_20 [i_5])));
            var_25 = (min(var_25, (arr_20 [i_5])));
            var_26 = (min(var_26, var_12));
        }
        var_27 = (min(var_27, ((((arr_17 [10]) - var_11)))));
        arr_21 [i_4] = (arr_18 [i_4] [i_4]);
        arr_22 [i_4] [i_4] = ((arr_18 [i_4] [i_4]) ? (arr_17 [i_4]) : var_2);
        arr_23 [i_4] = (var_3 % var_1);
    }
    #pragma endscop
}
