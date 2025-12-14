/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((((var_11 ? 1 : var_13)))) ? (!var_1) : (--0))))));
    var_21 = (max(var_21, (((max(((var_1 ? 732878129 : var_15)), (~var_13))) >> (((max(((min(var_9, 8192))), (var_5 + var_2))) - 4473))))));
    var_22 = (((max(((var_1 ? 0 : var_13)), 1)) - var_14));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((var_14 ? (arr_1 [0] [i_0]) : (!var_4)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_23 = ((1 ? (((-(arr_2 [i_0])))) : (((arr_7 [i_3] [4] [i_3] [i_3]) ? var_6 : (arr_11 [i_3] [14] [i_3] [i_3] [i_3 - 1] [i_3])))));
                        var_24 &= ((((arr_11 [i_3] [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3]) ? ((max(0, 252))) : (!10905023036317518234))) * var_14);

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            var_25 = (min(var_25, var_15));
                            arr_16 [i_4] [1] [i_2] [i_1] [19] [i_0] = ((((((max(1, (arr_7 [i_0] [i_1] [i_2] [i_4])))) % (max(65535, var_4))))));
                            var_26 *= ((var_12 / (arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])));
                        }
                    }
                }
            }
        }
        var_27 = ((!(((((!(arr_11 [i_0] [i_0] [1] [i_0] [i_0] [2]))) ? (!var_12) : (arr_9 [i_0] [0] [i_0] [i_0]))))));
        var_28 = (max(((((max((arr_7 [i_0] [11] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_2 [i_0]) : 532833230)), (~var_2)));
    }
    var_29 = ((var_17 ? var_19 : ((-4292907051415328203 ? -var_8 : ((var_11 ? var_1 : var_4))))));
    #pragma endscop
}
