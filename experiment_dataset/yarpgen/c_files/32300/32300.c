/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((min(-8655964285433108510, (((var_0 ? 2436702765 : var_7))))), ((min((~var_7), ((1813909855653145334 ? var_7 : var_7))))));
    var_12 -= ((var_6 || ((((~1) ^ ((var_5 ? var_5 : var_2)))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (((((~var_0) + 2147483647)) << (((!(8655964285433108510 % var_4))))));
            arr_7 [i_0] [i_0] [i_0] = min((((arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1]) == (arr_3 [i_0 + 1] [i_0 - 2]))), (((arr_5 [10] [i_0 - 1] [i_0 + 1]) && (arr_5 [i_0] [i_0 - 2] [i_0 - 2]))));
            var_13 = (min(((!((min(var_4, -1813909855653145334))))), (min((!31), ((!(arr_2 [i_1] [i_1] [i_1])))))));
        }
        var_14 = (min(65535, 32));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_15 &= (((((arr_8 [i_0]) ? (arr_0 [i_2 - 2] [i_0]) : (arr_5 [i_0 - 1] [i_2] [i_0 - 1]))) + 4137));
            var_16 = var_10;
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_17 = ((~(min((arr_5 [i_3 - 1] [i_0] [i_0]), (var_7 + var_10)))));
            var_18 = arr_9 [i_3 - 2] [i_0] [i_0];
        }
        var_19 = ((((0 ? 1 : 61440)) % (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
        var_20 += (min(((+(((arr_8 [i_0]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2]) : (arr_11 [i_0] [i_0]))))), 45324));
    }
    #pragma endscop
}
