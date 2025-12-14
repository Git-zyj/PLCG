/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = ((-(arr_4 [i_0 - 1] [i_0 - 1])));
            var_17 = ((!(((3878725874308140896 ? 17052856530837350782 : (arr_2 [13]))))));
        }
        var_18 ^= (arr_2 [i_0 - 1]);
        var_19 = (((((817598108 | (arr_1 [i_0])))) ? 19252 : (~62856)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 ^= (arr_1 [i_2]);
        var_21 = ((!(arr_6 [i_2])));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_9 [i_2] = ((var_3 ? -41931 : -1990028633));
            var_22 = -23605;
            arr_10 [i_2] [i_2] = ((138 ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1])));
            var_23 += var_15;
            arr_11 [i_2] [1] [i_2] = (-486984559 || ((((arr_8 [i_2] [14] [i_3]) ? 1393887542872200842 : 25))));
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (arr_2 [i_4]);
        var_24 = ((((min(var_4, (arr_5 [i_4] [18])))) ? ((~(arr_12 [6]))) : (((+(((-32767 - 1) - (arr_14 [i_4]))))))));
        var_25 += (((((((var_10 ? (arr_0 [10]) : var_10))) ? 46284 : (arr_4 [i_4] [i_4]))) / (max((max((arr_5 [6] [10]), (arr_0 [i_4]))), (((arr_7 [i_4] [8]) ? var_12 : var_12))))));
        arr_16 [i_4] = ((((((arr_5 [i_4 - 1] [1]) ? (arr_5 [i_4 - 1] [22]) : -6447))) | 3701700452));
    }
    var_26 = (!var_0);
    var_27 = var_12;
    #pragma endscop
}
