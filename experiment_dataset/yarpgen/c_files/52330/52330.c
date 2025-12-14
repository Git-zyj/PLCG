/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -2856878304;
    var_13 = var_1;
    var_14 ^= (max(1438088991, 2856878304));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (max((min(0, ((-4551485250877002672 ? 114 : (arr_1 [i_0] [i_0]))))), (((!(((28746 ? -19 : 1940273501))))))));
        var_15 = (max(4198384286693176689, 1));
        var_16 = (arr_1 [i_0] [i_0]);
        var_17 = (min(0, ((114 ? -1012725779 : 2124))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_18 ^= ((21208 ? 3551634365 : -19));
        var_19 = (~22117);
        arr_8 [i_1] = ((-18169 == (+-245)));
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 = ((9 ? (arr_10 [i_3]) : 1));
                                var_21 = (max(var_21, var_9));
                            }
                        }
                    }
                    var_22 = 1;
                    arr_19 [i_2] [i_3] [i_4] = ((((var_6 ? 2059455597250763919 : 44628)) / ((max(-50075899, ((min(187, 2187))))))));
                }
            }
        }
    }
    #pragma endscop
}
