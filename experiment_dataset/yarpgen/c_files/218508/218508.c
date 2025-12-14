/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 65534));
    var_18 += ((var_12 + (4797724116663689625 / 22719)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((arr_3 [i_1] [i_1]) ? (arr_1 [i_2] [i_0]) : ((~(!-3888))))))));
                    var_20 *= ((((((arr_2 [i_0] [i_2]) ? (arr_1 [i_1 - 1] [i_1]) : var_16))) ? ((((arr_2 [i_0] [i_1 + 1]) > (arr_2 [1] [i_1 - 1])))) : var_15));
                    arr_7 [i_1 + 1] [i_1 + 1] [1] [i_0] |= ((0 << ((max((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
