/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max((min(var_0, (max(var_9, 2019105511925576222)))), ((((~0) | ((var_6 ? var_4 : 4026531840))))))))));
    var_12 &= (min(0, 689236804));
    var_13 = (var_5 + var_2);
    var_14 = (min((min(0, 16777215)), var_10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (var_4 ? (((arr_1 [13] [13]) * var_10)) : ((((min(var_9, var_10))) ? (min(4026531840, (arr_1 [i_0] [i_0]))) : var_10)));
        arr_2 [i_0] [i_0] = ((+((-(((arr_1 [i_0] [i_0]) ? var_3 : 367952399))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_16 = ((268435455 ^ ((1372884673 ? (arr_7 [i_1] [i_2 - 2]) : 19799))));
            var_17 = ((~(((arr_5 [i_1] [i_2]) ? (arr_4 [i_1] [1]) : var_3))));
            var_18 = (-22466 ? (arr_3 [i_1]) : (arr_1 [i_2 - 3] [i_2]));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_19 = (max(var_19, ((((arr_15 [i_3]) ? 0 : (arr_15 [i_3]))))));
                            var_20 ^= (arr_12 [0] [i_4 + 1] [i_4] [i_4]);
                        }
                        var_21 = (arr_8 [11] [i_2 + 1] [i_4 + 4] [i_4 + 1]);
                    }
                }
            }
        }
        arr_17 [i_1] = ((-(arr_3 [i_1])));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_22 = var_9;
        var_23 = (arr_18 [i_6]);
        var_24 = (min((((arr_18 [1]) ? var_4 : (arr_18 [i_6]))), -8));
        var_25 = (((((min(256030643386726796, (-127 - 1))) * var_7)) * ((min(0, 7105409767159125901)))));
    }
    #pragma endscop
}
