/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((!((((arr_4 [i_0] [i_1]) / (arr_4 [i_0] [i_1]))))));
                var_13 |= ((((max(244, 244))) / ((((((arr_4 [6] [6]) / var_4))) ? (arr_5 [i_0] [i_1] [i_1]) : (arr_0 [i_0])))));
            }
        }
    }
    var_14 = (min(((~((max(var_12, var_8))))), (~var_0)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = ((((((!(arr_11 [i_2] [i_3]))))) * (((((240 << (var_9 - 7613962438163332817)))) ? (arr_13 [i_3]) : (max((arr_5 [i_2] [i_2] [i_2]), var_9))))));
                var_16 = (((var_8 / var_9) / (arr_2 [i_3])));
            }
        }
    }
    var_17 |= 576460748008456192;
    #pragma endscop
}
