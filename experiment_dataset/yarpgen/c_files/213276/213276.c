/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!(~var_19)))));
    var_21 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = ((((!(arr_1 [i_0])))) >= ((var_11 ? var_0 : (arr_0 [i_0] [i_0]))));
        var_23 = ((((min(((var_18 ? (arr_0 [i_0] [i_0]) : var_15)), (!var_3)))) && ((min(29951, (((2047 && (arr_0 [i_0] [i_0])))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_1] [i_0] = (!-20640);
            arr_6 [i_1] = var_4;
            var_24 = (-2344473122768146950 != 2028350141736714376);
            arr_7 [i_0] [i_0] &= ((~(((((1 >> (var_1 - 3964)))) ? var_7 : -1))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_25 *= var_1;
            var_26 ^= var_5;
            arr_10 [i_0] [i_2] |= ((~(5502166429422800409 ^ -44)));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] = 104;
            var_27 = (((var_14 + var_17) ? ((max((arr_3 [i_0] [i_3]), (var_12 ^ -43)))) : (min((((arr_9 [i_0]) | var_17)), (!var_8)))));
        }
    }
    var_28 = ((var_6 ? (((var_3 ? var_11 : var_13))) : (--0)));
    var_29 = var_10;
    #pragma endscop
}
