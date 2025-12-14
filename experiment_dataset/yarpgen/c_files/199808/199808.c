/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 -= (((59820 ? (59816 != 18) : ((-(arr_10 [i_0] [i_0] [i_2] [i_2]))))));
                                var_21 = (max(var_21, (((((arr_12 [12] [i_3 - 3] [i_3 - 2] [i_3] [i_3 - 2]) | 3633511708878501016))))));
                                var_22 = (max(var_22, ((((arr_11 [i_1] [21] [21] [i_1]) > (max(3633511708878501016, 59820)))))));
                            }
                        }
                    }
                }
                var_23 = (min(var_23, -14813232364831050606));
                arr_15 [i_1] [i_0] [1] = (((min((arr_5 [i_0] [i_1]), 104))) ? 28992 : -var_15);
            }
        }
    }
    var_24 = (((((var_14 & (var_12 >= -424893941)))) * ((-(min(var_5, 11761913931687401530))))));
    #pragma endscop
}
