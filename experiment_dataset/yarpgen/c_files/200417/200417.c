/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9899487886052486187;
    var_17 = 7978397675970217036;
    var_18 = 0;
    var_19 = -6095882485554777254;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min(var_20, var_8));
                var_21 ^= -var_15;
                var_22 = var_13;
                arr_8 [i_0] [i_0] = var_9;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_23 = var_2;
                            arr_15 [i_0] [5] [i_2] [i_0] = var_3;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
