/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0 + 1] [i_0 + 1] |= ((-(arr_1 [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((((min(14205356605322376451, 302))) ? (min(-64, 4241387468387175176)) : (((32 && -20308) ? (min(526506251769495232, 65535)) : -var_5))));
                                arr_14 [i_1] [i_1] [i_3] = ((var_14 ? ((((max((arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_4]), (arr_3 [i_0])))) ? -3041331661596290266 : (arr_6 [i_3 - 4] [i_0 + 3] [i_0 + 3]))) : 17920237821940056376));
                                var_19 -= (min((14205356605322376438 - 35753), (arr_6 [i_4] [i_3] [6])));
                            }
                        }
                    }
                    arr_15 [11] [i_1] [i_2] = (min((min(var_11, 28180)), (((var_3 & var_5) ? ((-(arr_12 [i_2] [9] [i_0] [i_1] [0] [i_0] [i_0]))) : (arr_13 [i_2] [i_1] [i_1] [i_0])))));
                    var_20 ^= (((((arr_1 [i_0 + 2]) >= (arr_1 [i_2]))) ? (arr_1 [i_0 + 1]) : (((arr_1 [i_1]) / (arr_1 [i_0 + 2])))));
                }
            }
        }
    }
    var_21 |= (var_7 - 31893);
    var_22 = var_4;
    #pragma endscop
}
