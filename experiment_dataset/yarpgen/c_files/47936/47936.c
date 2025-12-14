/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_13));
    var_21 = (min(var_21, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = ((((-1473296716 && (arr_3 [14] [i_1]))) ? (-32767 - 1) : (((arr_9 [i_1 - 1] [i_1] [i_2 + 1] [12]) ? (arr_1 [i_1] [i_1 + 1]) : 30))));
                            var_23 = ((((arr_5 [i_1] [6] [i_2 - 1]) - (arr_5 [i_1] [i_1] [6]))));
                        }
                    }
                }
                var_24 = (min(var_24, (((((((arr_5 [10] [0] [i_1 + 2]) < (arr_5 [1] [4] [i_1 - 3])))) >> ((((~(arr_5 [14] [6] [i_1 - 2]))) - 1609652046)))))));
                arr_14 [i_1] = (min((arr_10 [i_0] [i_0] [i_1] [6]), (arr_6 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
