/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(((min(72622802, 4294967295))), ((10881 ? var_5 : 12))))) ? (((var_5 << (var_8 - 25533)))) : (((((var_3 ? 10904 : (-127 - 1)))) ? ((var_6 ? 6779266707550146939 : var_4)) : 32962))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1 + 2] [i_2] = 2601932682603978822;
                    var_14 = 127;
                    arr_11 [i_2] [i_0] [i_2] = min((max((-40 / 2338344537), ((0 ? 9223372036854775807 : var_8)))), var_8);
                }
            }
        }
    }
    #pragma endscop
}
