/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_3 ^ (24131 == var_12)));
    var_14 = (max(var_12, ((((824967408 == var_10) + (53064 || var_6))))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] |= var_9;
                    var_15 = ((!(((~((51526 ? 16631560576719925796 : 8190602965193504585)))))));
                }
            }
        }
        arr_9 [i_0 - 4] = (arr_0 [i_0]);
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_15 [i_3] = (max((!var_10), -57));
            arr_16 [i_3] = (arr_2 [i_3]);
        }
        var_16 = -96;
        var_17 -= var_12;
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_19 [i_5 + 1] [2] = (arr_18 [i_5 + 1] [i_5 + 1]);
        arr_20 [i_5] [i_5] = ((((-(arr_17 [i_5]))) / var_7));
    }
    #pragma endscop
}
