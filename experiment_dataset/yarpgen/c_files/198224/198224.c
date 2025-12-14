/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min((((((-268435456 + 2147483647) >> (-1 + 15))) ^ -1576919652)), ((((174360089 < -243002476685957879) == (max(-1576919629, var_5)))))));
    var_13 = (2792882390 != 65534);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (arr_7 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_4 - 2] [1] [i_4] [i_3 - 2] [1] = min(7862860164918192714, (arr_12 [19] [i_3] [i_2] [i_2] [i_0] [i_0]));
                                arr_16 [i_1 - 1] = -1576919652;
                                arr_17 [i_4 - 4] [i_3] [i_2] [8] [10] = (min((+-814615227), (67108736 | 2008813055)));
                                arr_18 [i_0] [i_1 + 1] [i_2] [i_3] = (18446744073709551615 >= 16383);
                            }
                        }
                    }
                    arr_19 [2] [i_1] [2] [i_2] = (((((((max(3594, 2008813055))) - -243002476685957863))) % ((243002476685957865 - (~6007230215447752247)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 &= (arr_20 [i_0] [i_1 - 1] [i_2] [i_1 - 1]);
                                var_16 ^= (arr_12 [13] [13] [i_1 + 1] [13] [i_5] [i_6]);
                                arr_28 [i_6] = 366770461;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
