/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_5 || var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [14]);

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_14 = (~var_6);
            var_15 = (max(var_15, var_9));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_9 [i_2] = (((min((!var_5), -6529)) % var_4));
            arr_10 [i_2 + 1] |= ((4294967295 * (((-(arr_3 [1]))))));
            var_16 = (max(3218774140425063065, (((-19071 && ((min(var_4, (arr_7 [i_2])))))))));
        }
        arr_11 [i_0] = 236;
    }
    var_17 = var_1;
    var_18 = (((((var_2 << var_12) << (-var_1 - 19))) != ((~((var_11 ? var_11 : 19096))))));
    #pragma endscop
}
