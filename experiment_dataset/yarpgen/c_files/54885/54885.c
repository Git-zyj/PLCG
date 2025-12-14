/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_6 >= var_17);
    var_20 = (max(var_20, ((-32 << (((-11440221872640345631 <= (((var_16 ? var_13 : var_16))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((((max((18 >= var_3), var_3))) ? -var_18 : (var_12 <= var_4)));
                    var_21 = (max(var_21, 128));
                    var_22 = (((min(768709033, var_14)) + -1));
                    var_23 = (((((-5533794369930693630 <= var_12) >= -var_7))) >= (max(var_11, ((min(1, 7))))));
                    var_24 += (-4 >= 65535);
                }
            }
        }
    }
    #pragma endscop
}
