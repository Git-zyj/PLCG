/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) > 86));
        var_19 ^= (((arr_1 [i_0] [i_0]) ? var_10 : 0));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                arr_8 [i_1] = ((650557866 ? ((min(-983905138, (arr_4 [i_1] [i_2])))) : 983905138));
                arr_9 [9] = (((var_5 ? (min(-983905138, var_7) : (((arr_5 [i_1] [i_2]) ? 49291 : 124))))));
                var_20 += min(1, (max((min(765943676, (arr_7 [i_1]))), (min(65522, (arr_4 [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
