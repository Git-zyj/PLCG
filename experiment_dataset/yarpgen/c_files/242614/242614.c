/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((max((arr_2 [i_0 + 1]), 0))) || (((var_8 & (arr_1 [i_0]))))));
                var_15 = ((((((3638740503 ^ (arr_0 [i_0]))) >> (((!(arr_3 [i_0] [i_1] [i_1])))))) << (-var_13 + 8640)));
            }
        }
    }
    var_16 = var_7;
    var_17 = ((((8893757205214272310 ? 3638740525 : (1 < 1)))) ? 3638740521 : -5105);
    #pragma endscop
}
