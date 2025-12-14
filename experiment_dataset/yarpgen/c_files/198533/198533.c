/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (max(((-((0 ? var_10 : var_12)))), ((var_13 & (arr_3 [22] [14])))));
                    var_14 = 1860656590777266430;
                }
            }
        }
    }
    var_15 = (((((18446744073709551611 >> (var_12 - 1052079738857001064)))) ? ((~(~16796430752395643475))) : ((max(var_7, var_4)))));
    var_16 = var_4;
    var_17 = ((!((max((-1537205905 ^ 4294967295), 791543748)))));
    var_18 = (max(1679697923, (34359705600 || 0)));
    #pragma endscop
}
