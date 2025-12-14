/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = ((!((((6144 * var_4) ? ((var_9 ? 97 : var_2)) : (arr_6 [i_0 + 1]))))));
                    arr_10 [i_0 + 1] [i_1] [i_1] = 99;
                }
            }
        }
    }
    var_14 = 6142;
    var_15 = (max(var_15, (((~(max(-22051, ((1707424989 ? var_7 : 59392)))))))));
    var_16 = var_6;
    #pragma endscop
}
