/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_0 ? var_11 : var_11)))) ? var_0 : var_12));
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((-(-12 / 7983)));
                var_16 = ((~(min(var_4, (arr_5 [i_1 - 1] [i_1 - 2])))));
                arr_7 [i_0] [i_1] = (min(var_0, (arr_3 [i_0] [i_0] [i_1 - 1])));
            }
        }
    }
    var_17 = max(-7984, 593451963);
    #pragma endscop
}
