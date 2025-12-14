/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (-96 ? ((min((arr_3 [i_1]), (arr_4 [i_0 + 1])))) : (-32767 - 1));
                var_16 = (max(var_16, (((((min(-7533, (arr_0 [i_1])))) ? ((((arr_1 [i_0 + 1]) >= (arr_2 [i_0 + 1] [i_0 + 2] [i_0 + 1])))) : (max((min(781922995, var_5)), (max((arr_1 [i_1]), var_6)))))))));
                var_17 = (((arr_1 [i_0]) ? ((max((arr_4 [i_0 + 3]), -1387897183))) : ((-((-(arr_3 [i_1])))))));
                var_18 = (arr_3 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {
                var_19 = (min((~var_6), (arr_9 [i_3 - 2] [i_3 - 2])));
                var_20 = ((((-(arr_7 [i_2] [i_3 + 1]))) | ((~(min(var_8, var_6))))));
            }
        }
    }
    #pragma endscop
}
