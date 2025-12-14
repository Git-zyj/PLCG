/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (~var_13);
    var_18 = ((((((((var_3 ? 65524 : var_3))) ? (!9) : ((var_12 ? var_16 : var_2))))) ? ((var_12 ? (((var_6 ? var_13 : var_6))) : (~var_2))) : ((var_8 ? var_2 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((~(((((var_14 ? 65524 : var_1))) ? ((4201218800 ? 0 : var_13)) : 23))))));
                    var_20 ^= ((((((~var_6) ? -2685 : var_12))) ? var_1 : (((var_5 ? (~var_9) : 8153)))));
                    arr_8 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_2] = ((((var_6 ? var_6 : var_12))) ? 1182362723 : ((var_11 ? (!var_3) : var_9)));
                }
            }
        }
    }
    #pragma endscop
}
