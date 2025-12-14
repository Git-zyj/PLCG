/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_0 ? var_9 : var_11)) - var_14))) * (min(((var_0 ? var_13 : var_8)), (3634204039324193222 & -3634204039324193223)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = (((arr_0 [i_1]) ? var_3 : ((4605021900575460428 - (14653752707815223181 >= 1)))));
                                var_16 = (min((min((((!(arr_3 [i_0] [i_0] [i_0])))), ((var_0 ? 17206276455933324210 : (arr_1 [i_2 - 1]))))), ((((((-3634204039324193220 ? (arr_4 [i_0] [i_1 + 2]) : -901982497))) && 1)))));
                                var_17 = (!((max((max(3634204039324193222, 31)), (arr_9 [i_1 - 2])))));
                            }
                        }
                    }
                }
                arr_17 [i_1] [i_1 + 1] [i_1 + 2] = (max((((arr_4 [i_0] [i_1]) - 18065517774954166389)), (min(3511351230232179928, (min(17206276455933324197, (arr_9 [i_0])))))));
                var_18 |= (arr_9 [i_0]);
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
