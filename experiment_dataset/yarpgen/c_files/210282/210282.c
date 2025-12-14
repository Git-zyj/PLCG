/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_21 += (min(0, ((((((arr_5 [i_0]) ? (arr_2 [i_0] [i_1]) : var_16))) ? (min(var_17, var_2)) : (((var_14 ? var_13 : -8355540818685073617)))))));
                arr_7 [i_1] [i_1] = (arr_2 [i_1 + 1] [i_1 - 1]);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_22 *= (min((arr_5 [i_1 + 1]), (((arr_3 [i_3 + 2]) ? (arr_3 [i_3 + 3]) : (arr_3 [i_3 + 2])))));
                        var_23 ^= ((((4895506510669062462 ? 236 : 0)) < (((4895506510669062462 ? 81 : -113)))));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_2] [i_2] [i_4] [i_4] [i_2] = (max(var_5, ((((min(576460752303423487, (arr_3 [i_4]))) <= (((143 ? (arr_1 [i_2]) : var_14))))))));
                        var_24 = (((207047009295082323 ? 2147483647 : (arr_1 [i_4]))) | ((((arr_5 [i_0]) ? (arr_0 [i_0]) : var_3))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] = (((min((arr_12 [i_0]), ((max((arr_6 [i_1] [i_2] [i_1]), var_8)))))) ? (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 92 : 13551237563040489153)) : ((9223372036854775807 ? ((((arr_1 [i_0]) ? var_16 : (arr_5 [i_0])))) : (((arr_3 [i_2]) ? (-9223372036854775807 - 1) : var_6)))));
                        arr_17 [i_0] [i_4] = (max((((((var_5 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0])))) ? ((((arr_3 [i_0]) ? var_3 : (arr_14 [i_4] [i_1] [i_4])))) : (9223372036854775807 ^ var_17))), 576460752303423499));
                    }
                    var_25 = (((arr_14 [i_1 + 1] [i_1] [2]) ? (((arr_14 [i_1 + 1] [i_1 + 1] [14]) ? (arr_10 [i_1 + 1] [i_1] [i_2] [i_2] [i_2]) : (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_2]))) : ((-1352 ? var_5 : (arr_14 [i_1 + 1] [i_1] [1])))));
                }
            }
        }
    }
    var_26 = (((((var_12 ? (0 + 10) : var_18))) + (min(((var_19 ? var_1 : var_0)), (-2147483647 - 1)))));
    #pragma endscop
}
