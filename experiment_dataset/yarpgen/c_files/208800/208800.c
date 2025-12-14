/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min(var_5, var_10));
    var_17 &= (~43305);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((-(!22214)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [11] [13] [i_1] [9] [i_3] [i_1] = (-((-(min(-1, 22231)))));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [23] [i_3] = (max(((-((~(arr_2 [i_3]))))), (arr_8 [i_0] [10] [i_2])));
                            arr_13 [i_1] = (max((!239), ((!(arr_5 [i_3])))));
                        }
                    }
                }
                var_19 = (arr_7 [22] [15] [i_1] [i_0]);
                var_20 = (max(var_20, ((!(arr_10 [12] [12] [12] [i_0] [i_0])))));
            }
        }
    }
    var_21 = ((!((max((!var_2), (max(43305, 9716737580789041121)))))));
    #pragma endscop
}
