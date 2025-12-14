/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((min((!var_5), 6817312407258919748)))));
    var_21 = (((~var_9) * (min((!11368), ((var_4 ? 120 : -23))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = 1876518640631929358;
                                var_23 = (-2216 > -1876518640631929361);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((var_3 > (min(((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) || 8755515560598041422))), ((~(-9223372036854775807 - 1))))))))));
                                var_25 = ((!((min((min(-9350, var_1)), (((~(arr_2 [i_0] [i_0])))))))));
                                var_26 = ((-24 == (arr_16 [i_0] [i_1] [i_0] [i_5])));
                                var_27 = (((((min(var_15, (arr_11 [i_6] [10] [i_2] [i_1] [i_0])))) ? 17229 : (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_17 : var_10)))));
                                var_28 = (min(((min(35, -17235))), 4041308841077090824));
                            }
                        }
                    }
                    var_29 *= (((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_0]) ? (arr_11 [1] [i_1] [i_0] [i_1] [1]) : 28)) != (max((arr_11 [i_0] [9] [i_1] [9] [9]), (arr_11 [i_0] [i_0] [i_0] [i_2] [i_2])))));
                }
            }
        }
    }
    var_30 = var_18;
    #pragma endscop
}
