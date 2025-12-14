/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_2 | ((((((var_9 ? -6102651496370742756 : 6102651496370742755))) ? var_5 : var_1))))))));
    var_12 = (max(var_12, (((min(((var_7 ? var_10 : var_4), var_0)))))));
    var_13 -= (min(((((var_2 <= var_6) ? var_10 : var_9))), -6102651496370742756));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_1]) ^ 16901277965722394531)) : ((1 ? -8 : 119761120752427786)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 ^= (arr_7 [i_2] [i_2] [i_2]);
                            var_16 = (0 >= -71);
                            arr_11 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] = 4294967295;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
