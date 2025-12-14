/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-9223372036854775807 - 1) < (max(6846631092353114536, (((3472854777938700773 ? 2996826548 : var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((max(6846631092353114536, -6846631092353114537)) >> ((((~0) || -0))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (max((((var_7 <= (arr_4 [i_1 - 3] [i_1 + 1])))), (((arr_8 [i_4] [i_3 - 1] [i_1 + 1]) | (arr_4 [i_3 + 3] [i_1 - 3])))));
                                var_18 = -21;
                                var_19 = -31045;
                            }
                        }
                    }
                    var_20 = ((min((arr_3 [1] [i_1]), var_12)));
                    var_21 = (max(var_21, var_7));
                }
            }
        }
    }
    var_22 = ((~(min((max(var_3, 988569865)), (~var_4)))));
    #pragma endscop
}
