/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (((var_3 | (((max(var_14, 64)))))));
                var_18 |= -8992822785466440492;
                var_19 -= ((~(((~var_10) & (max(var_14, 262143))))));
                var_20 = (min(var_20, (((~(((63 || -2) ? (-2 * 15) : (-2 & 11093254166177355696))))))));
            }
        }
    }
    var_21 = (max(var_16, (((var_11 ? 4294967278 : 23)))));
    var_22 = var_2;
    #pragma endscop
}
