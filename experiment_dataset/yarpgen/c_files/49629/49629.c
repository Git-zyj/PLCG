/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_0));
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [4] = ((-471984295 && (~var_2)));
                var_21 = var_14;
                var_22 &= (~-471984306);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_23 = (-(-471984313 != var_0));
                            arr_12 [i_0] [i_0] [i_0] [i_0] &= ((~(var_6 < var_6)));
                            var_24 = (min(var_24, ((((1 * var_13) != (138 * var_10))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] &= ((7128865290807660261 << (2147483622 - 2147483572)));
            }
        }
    }
    #pragma endscop
}
