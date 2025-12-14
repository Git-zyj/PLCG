/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((!var_10) || ((min((min(var_17, var_13)), ((min(var_10, var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (((((~(arr_1 [i_1 + 1])))) || ((min(var_5, (arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = 456457008;
                            var_22 = ((-((max((arr_8 [i_0] [i_0] [i_0] [10] [10] [i_3]), (arr_8 [i_3] [i_3] [i_0] [i_1] [i_0] [i_0]))))));
                            var_23 = (34 - 8325793266552572336);
                        }
                    }
                }
                var_24 += 1730802268626954895;
                var_25 = (((~(arr_1 [i_0]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    var_26 += (arr_12 [i_4 + 2] [i_4 + 2] [i_6]);
                    arr_17 [i_4] [i_5] [i_6] [i_5] = (((((((-1 ? (arr_13 [i_4] [10] [i_4] [i_4]) : (arr_15 [i_4] [i_4] [i_4] [i_4]))) / (min(var_0, (arr_16 [i_5] [i_5] [i_5] [4])))))) ? 0 : ((-((1887239759 / (arr_14 [i_4] [i_4] [i_4])))))));
                    var_27 = (max((min(18446744073709551615, var_3), (-2147483647 - 1))));
                }
            }
        }
    }
    #pragma endscop
}
