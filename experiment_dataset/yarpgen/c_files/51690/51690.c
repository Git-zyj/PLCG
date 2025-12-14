/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            var_18 = (min(((-(arr_1 [i_0]))), 1525594230));
            arr_5 [i_1] [i_0] [i_0] = (((var_4 + 2147483647) >> ((((var_14 ? (~4501) : (!4493))) + 4529))));
            var_19 = (max(var_19, var_12));
            var_20 = ((((var_9 ? var_6 : var_8)) * (!var_1)));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_21 = 61034;
            var_22 = 31999;
            var_23 = (min(var_23, var_15));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_24 = 4501;
            arr_12 [i_0] [i_3] &= 61034;
        }
        arr_13 [i_0] = (((((arr_10 [i_0] [i_0] [1]) ? (var_2 == 61034) : ((61035 ? 62 : 3688)))) << (((((((arr_9 [22] [22]) > 61848))) == (var_11 == 0))))));
    }
    var_25 = var_5;
    #pragma endscop
}
