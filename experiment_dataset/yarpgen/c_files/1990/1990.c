/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] = (max(13844, var_1));
                    arr_7 [i_1] = (max((((!(arr_1 [i_0 + 1])))), (arr_1 [i_0 - 2])));
                }
            }
        }
        arr_8 [i_0] = (((var_9 ? (880599666 % var_2) : ((13825 ? var_4 : var_9)))));
    }
    var_11 = ((~(((var_9 * 20116) ? -var_9 : ((max(-13004, -13845)))))));
    #pragma endscop
}
