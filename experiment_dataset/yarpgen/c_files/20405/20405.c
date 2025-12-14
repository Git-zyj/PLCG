/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (max((arr_2 [i_1 - 3]), (((((max((arr_4 [i_1 - 3] [i_1 - 3] [i_0]), (arr_4 [i_0] [i_1] [i_2])))) ? (arr_5 [i_2] [i_1] [i_1]) : (arr_6 [i_1 + 1] [i_2]))))));
                    arr_8 [i_2] [i_0] [i_1] = (min((max(12, 6201)), (arr_2 [0])));
                    var_16 = ((((max((((arr_1 [i_2]) ? var_1 : (arr_0 [i_0]))), ((((arr_5 [i_0] [i_1] [i_1]) ? var_12 : (arr_0 [i_0]))))))) ? (((18446744073709551603 ? -25081 : 58316))) : (max(var_8, ((((arr_3 [i_2]) != (arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 2]))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_2]);
                    var_17 = (arr_0 [i_1 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
