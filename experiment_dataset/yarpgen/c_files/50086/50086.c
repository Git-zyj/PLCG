/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((arr_1 [i_0] [i_0 + 1]) ? (min(((min(var_10, 221))), (arr_1 [i_0] [i_0 - 1]))) : ((-(arr_1 [i_0] [i_0 + 1]))));
                arr_7 [i_1] [i_0] = ((((-(max(-112232861, (arr_0 [4]))))) >> (3748861167 - 3748861162)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2 + 1] = (arr_8 [1] [i_2]);
        arr_11 [i_2] = ((arr_8 [i_2] [i_2]) % (min(3748861175, (((~(arr_9 [i_2] [i_2 + 2])))))));
        arr_12 [11] = (arr_9 [i_2] [i_2 - 1]);
        arr_13 [i_2 + 2] = (arr_9 [i_2 - 1] [i_2 - 1]);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_18 [i_3] [0] = (((((min((arr_15 [13] [3]), var_16)) >> (((arr_17 [i_3] [i_3]) - 39647457)))) < var_2));
        arr_19 [i_3] = (arr_1 [1] [2]);
    }
    #pragma endscop
}
