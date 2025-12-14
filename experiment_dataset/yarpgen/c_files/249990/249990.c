/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((~(14641083328193155016 * 1326189146)));
                arr_6 [i_1] [i_1] [i_0 - 2] = -877002265704620234;
                arr_7 [i_1] = var_0;
                arr_8 [i_0] [i_1] = (((((~(((2968778149 > (arr_2 [i_0]))))))) ? (arr_2 [i_0]) : (8760870213260055563 + -877002265704620234)));
                var_16 = ((3101650798 + (arr_2 [11])));
            }
        }
    }
    #pragma endscop
}
