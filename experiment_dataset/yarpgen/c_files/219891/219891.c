/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (64 && (((var_4 ? ((min(0, var_6))) : 255))));
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = ((((((min(2795052270, (arr_9 [i_3] [i_1] [i_0]))) >> ((min(32755, 1)))))) ? ((((var_6 % 1) ? -16557 : (230 && 2305843009213693951)))) : (min((arr_4 [i_2 + 1] [i_2 + 1] [i_1 + 3]), var_2))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_14 [i_0] = (i_0 % 2 == 0) ? ((min(237, ((65535 << (((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]) - 13190372863294519861))))))) : ((min(237, ((65535 << (((((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]) - 13190372863294519861)) - 15270279007891037735)))))));
                                arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_0] = max(((min(var_0, -9))), (max((((arr_2 [i_4]) * var_3)), 1152921487426977792)));
                            }
                            var_14 = var_3;
                            arr_16 [i_0] = ((14427 + (((min(var_0, -102))))));
                            arr_17 [i_0] [i_0] = (min(((max(23411, 1))), (((((arr_9 [i_0] [i_1] [17]) < var_8))))));
                        }
                    }
                }
                var_15 &= 4294967295;
                var_16 &= (max(var_8, (((-var_0 ? (((arr_3 [i_0]) % 3)) : (!-16295))))));
            }
        }
    }
    #pragma endscop
}
