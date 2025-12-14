/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_15 ^= (max(8, (max((arr_2 [i_1 - 1]), var_1))));
                var_16 = (!16563);
                var_17 ^= ((((((501 ? (arr_1 [i_1]) : (arr_3 [i_0] [i_0] [i_1]))) - ((max((arr_4 [1] [i_1]), -501))))) / ((+((max((arr_2 [i_0]), var_12)))))));
                var_18 = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [7] [i_0] [i_3] = (max((arr_7 [i_0] [i_1] [1] [i_3] [i_0]), 1));
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] = (max((((~(!10)))), (((arr_5 [9] [i_0] [3]) ? (arr_3 [i_1 - 1] [i_3 + 1] [i_2]) : (arr_6 [i_0] [i_0] [7] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max((((((max(1, var_1))) || 44586))), var_13));
    var_20 = (min(var_20, (59085 ^ var_9)));
    #pragma endscop
}
