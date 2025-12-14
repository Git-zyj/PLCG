/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_6, var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 2] [i_1] [5] = -1;
                    var_13 = (min((min((arr_3 [6] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 - 1]))), (((!((42 != (arr_4 [10] [10] [3] [i_2]))))))));
                }
            }
        }
    }
    var_14 += ((var_3 <= ((~(47 / 9223372036854775807)))));
    #pragma endscop
}
