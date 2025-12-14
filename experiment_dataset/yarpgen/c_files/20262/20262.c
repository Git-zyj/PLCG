/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max((min(var_2, var_11)), (((var_8 ? var_7 : var_7))))), -var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 += -11359;
                var_15 = var_4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_16 ^= (max((((67 > var_10) ? ((-96 + (arr_7 [i_2] [i_3]))) : (1 / 23))), ((((arr_1 [i_2]) < ((var_5 % (arr_3 [i_2] [i_3] [i_3]))))))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_17 += (arr_2 [i_5] [i_2]);
                            var_18 += (arr_5 [i_3] [i_5]);
                        }
                    }
                }
                var_19 = (max(71, (((arr_5 [i_2] [i_3]) ? var_8 : ((max(22227, 1)))))));
            }
        }
    }
    #pragma endscop
}
