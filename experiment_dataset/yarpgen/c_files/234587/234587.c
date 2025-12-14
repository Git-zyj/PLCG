/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_9, (min(16443129107855336749, -3773300939011376538))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 ^= (min(var_1, var_9));

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_19 = (min(var_19, (((((arr_4 [i_2 - 2] [i_3 + 3] [i_3 + 3]) || ((max(var_8, var_0)))))))));
                        var_20 -= max(16384, (arr_6 [i_2 - 2] [i_3 - 2]));
                        arr_8 [12] [i_1] [i_2] = (((((~(var_7 << var_14)))) ? (-674105753 % 6493791188582569992) : var_14));
                    }
                }
            }
        }
    }
    var_21 ^= ((+(min((!var_8), ((var_1 ? var_2 : var_9))))));
    var_22 = (min(var_2, var_14));
    var_23 += (max(11952952885126981638, 42));
    #pragma endscop
}
