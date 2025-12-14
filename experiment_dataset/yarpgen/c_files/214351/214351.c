/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(-3289404281478799535, -10824);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 1]), (((arr_4 [i_0 - 3] [i_1 - 1] [i_1 + 1]) ? var_2 : (arr_4 [i_0 + 2] [i_1 + 1] [i_1 + 1]))))))));
                arr_7 [i_0] [i_0] [i_0] = ((((((((arr_2 [i_0 - 2]) ? 5263 : (arr_3 [3] [1]))) % (arr_3 [i_0 - 2] [3])))) - (((min(285978576338026496, (arr_6 [i_0 - 3]))) >> (arr_2 [i_0])))));
                arr_8 [i_0] [i_0] [i_0] = (((((arr_6 [i_0 - 2]) ? (arr_3 [i_0 - 2] [i_1 + 1]) : (arr_3 [i_0 - 2] [i_1 + 1]))) * (((arr_3 [i_0 - 2] [i_1 + 1]) ? 4294967287 : (arr_6 [i_0 - 2])))));
            }
        }
    }
    #pragma endscop
}
