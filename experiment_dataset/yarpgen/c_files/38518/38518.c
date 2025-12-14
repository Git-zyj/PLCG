/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_9;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_16 *= (((((!(arr_2 [i_1 - 1] [i_3]))))));
                        arr_10 [i_3] [i_2] [i_1] [i_0] = ((!(((~(!28641))))));
                        var_17 = (+-247249984);
                        var_18 = ((-(arr_5 [1] [i_1] [1])));
                    }
                }
            }
        }
        var_19 = ((-(arr_7 [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_20 *= (((~(~-7084602195043318650))));
        arr_15 [i_4] [7] = ((~((~((~(arr_11 [i_4] [i_4])))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_6] = (!var_6);
                var_21 *= (!var_1);
                var_22 = ((~((~(~var_1)))));
            }
        }
    }
    #pragma endscop
}
