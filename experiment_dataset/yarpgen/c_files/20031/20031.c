/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2 - 1] [i_1] = (min(((((((var_8 + 2147483647) << (((arr_2 [i_0] [12] [i_2 - 1]) - 16))))) ? (arr_10 [i_0 - 1] [i_2 - 1] [i_3 + 2] [5]) : ((~(arr_6 [1] [i_1] [7] [1]))))), (-9223372036854775807 - 1)));
                            var_13 = ((!((((arr_2 [i_0 + 3] [i_2 - 1] [i_3 + 2]) ? (arr_2 [i_0 - 4] [i_2 - 1] [i_3 + 1]) : (arr_2 [i_0 - 1] [i_2 - 1] [i_3 - 1]))))));
                        }
                    }
                }
                arr_12 [i_0] [12] [i_1] = ((-(-32767 - 1)));
            }
        }
    }
    var_14 = var_2;
    var_15 = (((max(var_1, var_1)) ? (~var_4) : (((1661261643 > ((var_3 ? var_11 : var_0)))))));
    #pragma endscop
}
