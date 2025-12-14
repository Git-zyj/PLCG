/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] = (1732025244 && ((min(-var_5, (((1 ? 2053359054 : 2044)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = 101;
                            arr_9 [1] [1] [15] [i_1] [11] = (max((-2053359037 & 2053359040), ((((min(var_15, 2053359054))) ? (min(14800, 2626397323)) : (((min(165, 6996))))))));
                            arr_10 [18] [1] [16] [i_0] |= ((((max(18446744073709551615, var_12))) ? (263019407771435581 / 263019407771435586) : 198));
                        }
                    }
                }
                arr_11 [i_1] = ((((((~var_12) ? 895526843 : (18 / 2053359053)))) && var_5));
            }
        }
    }
    var_18 = ((var_1 ? (!2) : -1));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            {
                arr_16 [12] = (min((-19 > var_2), 21));
                arr_17 [20] = (max(var_1, (39200 == 0)));
            }
        }
    }
    #pragma endscop
}
