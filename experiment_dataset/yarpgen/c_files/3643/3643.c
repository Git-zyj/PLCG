/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((((125 >> (11652360558793549567 - 11652360558793549565))) * (3925 ^ 9880))))));
    var_13 = max(63354, var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = -751709734;
                var_15 = (min((!1834732464), ((((max(3533985445, -112)) < ((max((arr_0 [i_0]), 734414018))))))));
                var_16 = ((~(min(1378031160708198106, (arr_3 [i_0 - 1] [i_0])))));
                var_17 = 32767;
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
