/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_4);
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_2] = ((((2147483642 ? 48079 : 2147483647))) ? var_10 : (((~(arr_6 [i_0] [i_1] [i_2 + 2])))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] |= (max((min((var_5 & 1251360723), ((max(-23040, 17462))))), ((((((var_7 ? -1251360714 : var_9))) ? 31 : (arr_3 [i_0] [i_1] [i_2 - 1]))))));
                    arr_9 [i_0] [i_0] [i_2 + 1] [4] = ((max((arr_4 [i_2] [i_2 + 2] [i_2 - 1]), (min((arr_4 [i_0] [i_1] [i_0]), 6577023434359415028)))));
                    var_13 = (max(-756730372, -64));
                }
            }
        }
    }
    #pragma endscop
}
