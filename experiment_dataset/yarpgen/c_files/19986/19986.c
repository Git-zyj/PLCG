/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = -var_10;
    var_13 = 49153;
    var_14 &= (!120883214);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = -1;
                arr_5 [i_0] [i_0] [0] = (((max(var_0, 1))));
                var_16 = (max(var_16, (((62 ? 30 : 1)))));
                var_17 = (max(((!((max(-4170729351475545962, 9223372036854775807))))), ((((max(1204174846, 32752))) || 30))));
            }
        }
    }
    #pragma endscop
}
