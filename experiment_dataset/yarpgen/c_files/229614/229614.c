/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = (max(((-((max(var_8, (arr_2 [19])))))), (((!(arr_0 [i_0] [i_0]))))));
        var_16 = 40;
        var_17 = 9;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_18 = (min(var_18, ((min(((((((1648238947 ? 29 : 37))) * -0))), ((4294967295 ? (((97 ? 8837 : -6763))) : 702164265309829406)))))));
            var_19 = (min(var_19, (((!((max((arr_3 [i_1] [1]), ((1 & (arr_6 [i_1] [i_2])))))))))));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_11 [i_3] [i_1] = (!-38);
            var_20 = (max(43, (((arr_6 [i_3 - 1] [i_3 - 1]) ? (-2147483647 - 1) : -9223372036854775781))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_21 = (min(var_21, 18446744073709551615));
            arr_15 [17] [i_1] [17] = (!38690);
        }
        arr_16 [i_1] [i_1] = ((((!(arr_14 [i_1] [i_1]))) ? (((!(arr_0 [i_1] [i_1])))) : (16171 & 5)));
        arr_17 [i_1] [i_1] = (!-9223372036854775778);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = (((max(var_5, 0)) + -22244));
            arr_22 [i_1] [20] = (max(-22244, -29327));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_23 = 1;
        var_24 &= ((4143206794603684991 ^ (arr_8 [i_6])));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_25 = (min(var_25, (((((arr_5 [i_7]) <= (arr_8 [i_7])))))));
        var_26 = var_10;
        var_27 = (min(var_27, (((var_3 + (arr_21 [i_7] [i_7]))))));
    }
    var_28 = ((((min((~154), var_7))) ? var_5 : var_0));
    var_29 = (((max((~1), (~30))) >= -var_9));
    #pragma endscop
}
