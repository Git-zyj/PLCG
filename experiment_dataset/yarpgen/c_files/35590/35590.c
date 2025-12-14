/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~-6287145706843222956) % -var_2));
    var_13 = (((max(var_3, 1525181899815188962))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_14 += ((!(arr_0 [i_0 - 1] [i_0 - 4])));
        arr_3 [i_0] [i_0 - 4] = 3;
        var_15 = (((arr_0 [i_0 + 2] [i_0 - 3]) ? (arr_0 [i_0 - 4] [i_0 - 4]) : (arr_0 [i_0 - 1] [i_0 + 3])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (arr_5 [i_1]);
        arr_9 [i_1] = 2268757481;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (+-64335)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_17 += var_11;
                    var_18 = var_10;
                }
            }
        }
    }
    #pragma endscop
}
