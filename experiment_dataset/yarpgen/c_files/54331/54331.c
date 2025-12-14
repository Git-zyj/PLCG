/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= -1759347851;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, (((0 ? 864691128455135232 : ((((arr_4 [i_0] [2] [i_2]) - 1))))))));
                    arr_7 [i_0] [11] [1] [i_0] = 4190732079653563279;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, ((((arr_3 [i_1] [i_1 - 1] [i_1 - 1]) ? (arr_3 [12] [i_1 + 1] [i_1 + 1]) : 85)))));
                    var_18 = (arr_9 [i_0] [i_0] [i_1 - 2] [i_3]);
                    arr_10 [i_1 + 1] [i_1 + 1] = (((((arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]) + 2147483647)) << ((var_2 ? var_11 : var_10))));
                }
                var_19 = (min(var_19, (((!((((((max(47, 8290)))) & (max(7, var_5))))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 = (min((max((-2147483647 - 1), 64)), ((min((arr_9 [i_0] [i_1] [13] [i_5]), 7526087896001101091)))));
                            var_21 ^= -var_13;
                            arr_17 [i_5] = (((1 ^ 321) ? (18446744073709551615 & var_8) : ((min(var_1, (arr_14 [i_0] [i_1] [i_4] [i_5] [i_5]))))));
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_0] = ((((((!3806321702721715139) ? var_11 : (~var_12)))) ? 1248582756 : 4051008269704122272));
                arr_19 [1] [i_1] [i_1] &= ((5894575168235600868 ? 105 : ((var_13 ? (arr_12 [18] [i_1] [i_1] [1]) : (((arr_0 [i_1]) ^ 1))))));
            }
        }
    }
    #pragma endscop
}
