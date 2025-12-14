/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min((((((var_3 ? var_9 : -7863697069025724755))) ? (var_6 - var_0) : var_1)), ((((min(450027899, var_12))) ? var_8 : (10597 >= 7863697069025724755)))));
    var_15 = (min(var_4, (min((((var_10 ? 1 : 98))), (var_0 ^ -8291060251614735054)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((((max((arr_0 [i_0 - 1]), (arr_8 [i_1] [i_1])))) ? (250 ^ 347420165931587357) : var_6)))));
                            var_17 &= var_12;
                            var_18 = ((-((max((arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_1] [i_1 + 4] [i_3 - 2]), (arr_0 [i_0 - 1]))))));
                            arr_9 [i_1] = (min((max(3, -8291060251614735054)), (((((~(arr_1 [i_3]))) / ((-(arr_1 [i_2]))))))));
                        }
                    }
                }
                var_19 -= 1;
                var_20 = 3198149056;
                var_21 = var_7;
            }
        }
    }
    #pragma endscop
}
