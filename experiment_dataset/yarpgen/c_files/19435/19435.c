/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = ((((((var_10 ? 17176664410895505535 : -16)) ? -7729 : var_11))));
    var_15 = (min(-16, 1270079662814046069));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((var_10 ^ (arr_4 [8] [i_1]))), (((arr_4 [i_0] [i_0]) ? 6605141804739128903 : (arr_4 [i_1] [i_1])))));
                var_16 = (max((!82), 17176664410895505517));
                var_17 ^= var_11;
            }
        }
    }
    #pragma endscop
}
