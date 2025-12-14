/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] = ((~(arr_4 [i_0 - 2])));
                arr_6 [i_0] [i_1] = (((arr_2 [i_0]) ? (((var_2 ? (arr_1 [i_0]) : var_2))) : ((((arr_0 [i_0] [i_0]) ? 252 : (arr_0 [6] [i_0]))))));
                arr_7 [i_0] = ((~(arr_3 [i_0 + 1])));
            }
        }
    }
    var_13 = ((~((var_9 ? ((3 ? 252 : var_6)) : 12))));
    var_14 = ((var_1 ? -var_9 : var_9));
    #pragma endscop
}
