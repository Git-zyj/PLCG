/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_1 / var_8) + (var_6 < var_6))) % var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0 + 1]) | (((!(arr_0 [i_0 - 1]))))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0 + 1] = 104690205;
            var_22 = (max(var_22, (318649858 != 4035)));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0 - 1] [i_0 + 1] = var_11;
            arr_8 [i_0 + 1] [i_2] [i_2 - 1] = (((arr_6 [i_2 + 2] [i_0 - 1]) + (arr_1 [i_2 + 2])));
            var_23 = (arr_5 [3] [i_2]);
        }
        var_24 = 1979621075;
    }
    var_25 = (max(65531, 2608609004899821796));
    #pragma endscop
}
