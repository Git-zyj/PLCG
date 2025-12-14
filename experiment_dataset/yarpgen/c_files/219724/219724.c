/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (min((1 ^ var_13), var_13));
    var_16 = (var_4 <= var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] [i_1] = ((24576 ? ((min(((((arr_6 [i_1] [i_1]) || (arr_0 [i_1] [i_0 + 2])))), (arr_5 [i_1 - 2])))) : (8539506277830887254 || 5603)));
                var_17 += 12682740398130688686;
                var_18 |= (((((-(var_4 <= var_11)))) || (5764003675578862914 || 5764003675578862937)));
            }
        }
    }
    #pragma endscop
}
