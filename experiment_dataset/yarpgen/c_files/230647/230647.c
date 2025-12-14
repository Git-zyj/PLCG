/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(52, (max(((var_4 ? 17 : var_5)), ((max(var_8, -6383320939377473631)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((max((arr_6 [i_0] [i_0 + 2] [i_1 - 4]), (arr_3 [i_0 + 3]))));
                    arr_9 [i_1] = (max(((((min(var_1, (arr_2 [18] [18])))) ? (arr_2 [i_0] [i_1 - 4]) : (-9223372036854775807 - 1))), ((min((((var_2 ? (arr_1 [i_0 + 2] [i_1]) : (arr_4 [i_0])))), (arr_0 [i_0 - 1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
