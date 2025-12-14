/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((((var_9 ? -118 : var_4))), -6329299974692882782))) ? ((-1476147617 ? var_11 : (!-120))) : 117));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((min(-118, 162))))));
                var_14 = (min(((!(arr_2 [i_0 + 1] [i_1 + 2]))), (!117)));
                arr_5 [i_0] = (max((((!(arr_1 [i_0 + 1])))), (((15 != 230) ? (((min(192, 120)))) : ((50447 ? 14277423112164700526 : 44067))))));
                var_15 = ((~(arr_0 [i_0] [i_0])));
                var_16 ^= -9705;
            }
        }
    }
    #pragma endscop
}
