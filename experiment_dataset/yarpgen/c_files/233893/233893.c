/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((((16382 ? (~var_2) : -1))) ? ((((16396 != (arr_6 [i_1 - 2]))))) : (((var_3 ? -912559041420006280 : (arr_2 [i_1]))))));
                var_12 = (max(var_12, (arr_1 [i_0] [19])));
            }
        }
    }
    var_13 = ((var_4 ? var_9 : ((max(var_2, var_7)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_4] [i_4] = ((-16393 * (((((arr_7 [i_3 + 2]) != (arr_11 [i_2]))) ? (arr_8 [i_3 - 1] [i_3 + 1]) : 769637578))));
                    var_14 *= (((((-((var_1 ? 1 : (arr_12 [i_4] [i_4] [i_4])))))) ? ((min((((arr_6 [i_2]) ? var_7 : var_8)), (arr_12 [i_3] [i_3 + 2] [i_3 + 2])))) : (min((arr_10 [i_3 - 1] [i_3 + 2] [i_3 - 1]), (min(var_10, var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
