/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_4, (((max(0, 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [0] [0] = (max(((-1508876343 ? (max(var_10, 564241711)) : ((-(arr_1 [5]))))), -500275606));
                arr_8 [i_0] [i_0] [i_1] = -1598908019;
                arr_9 [i_0] [i_1] = (arr_6 [i_0] [i_1]);
                var_12 -= (((((((-1550800532 > (arr_2 [i_0]))))) * (min((arr_5 [14]), var_3)))));
            }
        }
    }
    var_13 = (--1);
    #pragma endscop
}
