/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = var_17;
    var_21 = ((var_4 ? var_8 : ((-(4294967289 ^ 408827723736689885)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = (((((~18037916349972861730) * (((max(25553, var_1)))))) - (((((((arr_2 [i_1 - 1] [4]) ^ var_10))) ? (arr_6 [20] [i_1 - 2] [i_0]) : var_9)))));
                    arr_8 [i_0] = (((var_13 * (-8 / 23289))));
                    var_22 = ((((max(-258, 23929))) == (arr_0 [i_0] [i_1 + 2])));
                    arr_9 [17] = max((arr_3 [i_0] [i_1 + 2]), (-32767 - 1));
                }
            }
        }
    }
    #pragma endscop
}
