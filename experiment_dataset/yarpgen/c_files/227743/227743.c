/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((46395 || (arr_3 [i_0 + 1] [i_0 + 2]))))));
                var_15 *= 19140;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_16 ^= (max(((-123 ? -8882916902642610227 : (arr_1 [i_1 - 1]))), (arr_1 [i_2])));
                            arr_11 [i_0] [i_3] [i_2] [i_3 - 1] [i_0] [i_3] = ((-(min(((var_12 ? 46395 : -1)), ((min((arr_1 [i_0 + 1]), var_8)))))));
                            arr_12 [i_0] [i_3] [i_3] = (arr_0 [i_2]);
                            var_17 = 0;

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_18 += (min(19140, 0));
                                arr_16 [i_0 + 3] [i_1 - 1] [i_2] [i_3] [i_4] = (max(((19140 ? (!46395) : (min(3871319300, 2865)))), -var_12));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 8;i_7 += 1)
                        {
                            {
                                var_19 += ((var_3 ? (~-3172175951460229419) : (((~((((arr_17 [i_0] [i_1 - 1]) || (arr_6 [i_0 - 3] [i_0 + 3] [i_0 + 3])))))))));
                                var_20 = (1889028908 & 93);
                                var_21 += max((arr_3 [i_1 - 1] [i_0 - 2]), (arr_22 [i_0 - 2]));
                                var_22 = min((var_1 & var_11), (((var_6 << (((arr_23 [i_0] [i_1 - 1] [i_6] [i_7 + 2]) + 8996))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
