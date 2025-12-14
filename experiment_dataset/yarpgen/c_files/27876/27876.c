/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 18007;
    var_11 = (min(var_11, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 -= (((2190433320960 != 5) * 11179));
                                arr_16 [i_4] = (((((88 ? 1 : (arr_12 [i_0] [i_0] [i_2])))) ? 1 : ((288230376151711743 ? 1 : 20))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2] [i_2] = (!((((34 | var_9) ? 29892 : ((4227858432 ? var_7 : 1157958046403980023))))));
                }
            }
        }
    }
    var_13 = 2305843009213693951;
    #pragma endscop
}
