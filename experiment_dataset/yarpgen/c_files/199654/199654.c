/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (((2943898432 || -6504864500493609209) || (((arr_3 [i_1 - 3] [i_1 - 3] [i_0]) && (arr_3 [i_1 - 1] [17] [i_1])))));
                arr_4 [i_0] = 6583934741716932005;
                arr_5 [i_0] [i_1 - 2] = ((((((((255 ? (arr_0 [1]) : (arr_2 [i_0] [8])))) ? (arr_1 [i_1 - 3]) : ((2943898443 ? 12 : 2943898432))))) ? 1351068852 : (((+((0 ? (arr_1 [i_0]) : 50)))))));
                var_11 = (min(var_11, (arr_3 [i_0] [i_1 - 1] [11])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max(1, 173));
                            arr_11 [i_0] [20] = (((0 / -81) ? (min((((arr_1 [i_0]) ? (arr_10 [i_0] [i_0] [i_2] [i_3] [13]) : (arr_6 [i_0] [i_1] [i_0]))), (arr_10 [i_2 + 3] [i_1 - 2] [1] [i_3] [i_2]))) : (((arr_9 [i_0] [i_1] [8] [i_0] [i_0]) * (1 / 2974094575)))));
                            arr_12 [i_0] [i_1] [12] [i_3] = (arr_9 [i_0] [5] [i_2] [i_3] [5]);
                        }
                    }
                }
            }
        }
    }
    var_13 = ((-(((-20594 - var_0) ? var_9 : var_0))));
    #pragma endscop
}
