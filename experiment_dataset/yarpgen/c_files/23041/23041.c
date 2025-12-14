/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((0 * ((-((var_9 ? var_9 : var_9)))))))));
    var_13 = (min(var_13, var_1));
    var_14 = (max(var_14, 1));
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 7062;
                    var_16 = (max(var_16, ((~(((arr_7 [i_0] [4] [i_0]) ? (((arr_1 [i_2]) ? 1625746616 : 100)) : (((arr_7 [i_0] [18] [i_2]) ? (arr_1 [i_1 - 1]) : 1518610040))))))));
                }
            }
        }
    }
    #pragma endscop
}
