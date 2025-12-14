/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (max(var_10, -126));
        var_11 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (((((126 ? var_5 : -126))) ? var_5 : (((var_0 ? 39 : var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1 - 2] = (((((4572867655271629561 ? 0 : var_9))) ? 0 : 1688849860263936));

        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            var_12 = -126;
            arr_10 [i_1] [i_2 - 1] = (arr_7 [i_1 - 4] [i_2 - 1]);
            var_13 = var_8;
        }
        var_14 -= (372471927 % -21786);
    }
    var_15 = (((max((min(109, -372471928)), 65535))) ? 229127923 : 0);
    var_16 = -1909789131;

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_17 = ((((min((min((arr_9 [i_3] [i_3 + 1] [i_3]), var_2)), -17991))) ? ((min((((0 && (arr_12 [i_3] [i_3])))), (min(-372471928, 217))))) : (arr_6 [i_3] [i_3 - 1] [i_3 + 1])));
        arr_13 [i_3 + 1] [i_3 + 1] = 0;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_18 = 3931975365;

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_19 = (max(4294967295, 0));
                var_20 = (max(var_20, (63454 / -372471928)));
            }
            arr_21 [i_4] [i_5] [i_5] = (max(-5561485586672044474, ((max((!var_3), ((var_3 ? var_0 : var_7)))))));
            var_21 = ((+((max((arr_12 [i_4] [i_4]), var_1)))));
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = ((-(arr_3 [i_7])));
        var_22 = 15883424700151865722;
        arr_25 [i_7] [i_7] = ((-var_6 ? (((var_2 ? var_4 : -1))) : ((max(127, 1479706762)))));
    }
    #pragma endscop
}
