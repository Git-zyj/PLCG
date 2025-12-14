/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_2);
    var_11 = 232;
    var_12 = 1629776903;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0 - 1] = max(var_1, (max((arr_3 [i_0]), (arr_6 [i_0] [i_1]))));
                    var_13 = (((((((var_4 >= (arr_1 [i_2])))) & ((max(16, (arr_2 [i_2])))))) >= ((-((min((arr_6 [i_0] [i_1]), (arr_2 [i_2]))))))));
                    arr_8 [i_0] [i_1] [i_2] = min(var_8, ((max(((16 / (arr_6 [i_0] [i_1]))), (232 == var_0)))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_6 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
