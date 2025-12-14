/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] = ((!(~var_9)));
                        var_16 = (max(1222672908555689212, 18446744073709551615));
                        var_17 = ((~(((!((max(var_3, 18446744073709551596))))))));
                    }
                }
            }
        }
        var_18 = (((-((-(arr_1 [i_0]))))));
        var_19 = (-(max((arr_7 [i_0]), 5683661007144090378)));
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = (max(var_0, (arr_11 [i_4 - 1])));
        arr_14 [i_4] = (!-41620);
        var_20 = (max(var_20, ((min((max(469664816680751557, 43908)), (((~(arr_11 [i_4 + 2])))))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                {
                    var_21 = ((-(min(57767, var_4))));
                    var_22 ^= (-(max(30435, (arr_19 [i_4 + 3]))));
                    var_23 = ((!((min((arr_19 [i_5 + 2]), var_4)))));
                }
            }
        }
    }
    var_24 |= var_2;
    #pragma endscop
}
