/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (var_6 ? (((!(arr_0 [i_0])))) : ((max((arr_0 [i_1]), var_8))));
                var_20 = (min((((~(arr_3 [i_1])))), (min(var_18, (arr_2 [i_1] [i_0])))));
            }
        }
    }
    var_21 = var_18;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_22 = ((((var_5 >= var_10) ? (((arr_7 [i_2] [i_2] [0]) ? (arr_6 [i_2]) : (arr_9 [i_2] [i_3]))) : (((min(8190, (arr_7 [i_2] [i_2] [i_2]))))))));
                var_23 = 2171654831;
            }
        }
    }
    #pragma endscop
}
