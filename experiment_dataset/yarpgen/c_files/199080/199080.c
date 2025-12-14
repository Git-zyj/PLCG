/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_3, (max(var_8, 14357))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((max(2500306230, 17)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 = (min(var_16, 1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = (((min((min(2147483647, 1)), 1))) - (max(((3242302154 ? (arr_5 [i_0]) : 1)), (arr_4 [i_0]))));
                            arr_19 [1] [i_6] [i_0] [i_0] [i_0] [i_0] = max(2147483647, 753413312303236175);
                            var_18 = ((((((var_8 ? 17181026801195550443 : (arr_17 [i_0] [i_0] [i_0]))))) % (min((min(33554304, (arr_10 [i_0] [i_1] [i_5] [i_6] [i_1]))), 1))));
                            var_19 = (((max(1, (arr_2 [i_0] [i_0]))) == ((((-8587065106281736371 ? -33554304 : 7629440532666656946))))));

                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] = min(((((((arr_14 [i_0] [i_6] [i_5] [i_1] [i_0]) ? (-2147483647 - 1) : var_7))) ? (min((arr_10 [i_0] [i_0] [i_5] [i_6] [i_7]), var_12)) : (arr_0 [i_0]))), ((((0 || (arr_14 [i_0] [i_6] [i_6] [i_6] [i_6]))) ? (((var_12 << (753413312303236200 - 753413312303236199)))) : (min(var_13, (arr_20 [i_0] [i_7] [i_0] [i_6]))))));
                                arr_23 [i_0] [i_1] [i_1] [i_5] [i_6] [i_0] [i_7] = (min(11, (~1)));
                                arr_24 [i_0] [i_6] [i_5] [i_0] = (min(7629440532666656950, (((arr_15 [i_0] [i_6]) ? -5112944895656496229 : (arr_15 [i_5] [i_1])))));
                                var_20 = ((!(arr_0 [i_0])));
                            }
                            for (int i_8 = 0; i_8 < 24;i_8 += 1)
                            {
                                var_21 = (min(((~((1849193621901382516 ? 19 : (arr_7 [i_5] [i_1] [i_0]))))), 1265717272514001173));
                                var_22 = (max((max((arr_21 [i_0] [i_8] [i_5] [i_6] [i_0]), (min(45705, 17340596865087174310)))), ((max(1, 1)))));
                                var_23 = ((((min((arr_13 [i_8] [i_6] [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_1] [i_1] [i_5] [i_0] [i_8] [i_8])))) ? (1 ^ -2207251066029589036) : (max((arr_13 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5] [i_5]), -5112944895656496221))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
