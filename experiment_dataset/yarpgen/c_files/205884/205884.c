/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_11 ? 893066777 : var_0)));
    var_17 = var_12;
    var_18 = -16786794919375704235;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 ^= 893066762;
                                var_20 ^= ((var_4 ? -893066762 : (((((893066794 ? 1 : 8877777822075306908))) ? ((max(59376, var_14))) : (max(var_1, var_6))))));
                                arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (max((~var_6), ((~(~1)))));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    arr_13 [7] [i_1] = (max(var_9, (max(27, 2241570959))));
                    var_21 -= ((-((((38 ? 2341407907 : 48230))))));
                }
            }
        }
    }
    #pragma endscop
}
