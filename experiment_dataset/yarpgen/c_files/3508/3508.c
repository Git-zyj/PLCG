/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;
    var_17 = (((-2147483647 - 1) ? 51347 : 20957));
    var_18 = (min((max(var_2, var_15)), (((var_3 >= ((0 ? 9159012824328855840 : 1013155380)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(11, (((0 || 1) + -61573011))));
                arr_5 [i_0] [i_1] = (min((65535 <= -3415135273686805238), -12));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_8 [i_2] &= 2571;
        arr_9 [i_2 - 1] = (19 && 65529);
        arr_10 [i_2] = (65514 >= 18);
        var_20 ^= -1822824247;
        arr_11 [i_2 - 1] [2] = ((-9 ? 18 : 29));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [i_3] = ((((((((max(8, 0))) && (1890886048 < 0))))) != ((-((1 ? -1061314215382036474 : 65512))))));
        arr_15 [i_3] = (min(((65517 % ((1 ? 65528 : 1782764705)))), 65514));
    }
    #pragma endscop
}
