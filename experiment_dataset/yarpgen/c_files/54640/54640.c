/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min(2256759059, (((-((min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        var_12 = ((~((((arr_1 [i_0]) && (arr_1 [i_0]))))));
        var_13 = 23307;
        arr_3 [i_0] = (min((--29426), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_14 [18] [i_1] [i_2 + 1] [i_1] = (arr_12 [i_1] [i_2] [i_2]);
                    arr_15 [i_1] [i_1] [i_1] = var_3;
                    arr_16 [i_2] = (min((min(var_9, (max((arr_9 [i_3] [i_3]), var_1)))), ((max((arr_13 [0] [0] [i_1]), (arr_13 [i_1] [i_2] [i_3]))))));
                    var_14 = (min(var_14, ((min((arr_7 [i_2 + 1]), (((arr_0 [i_2 + 1]) % (arr_0 [i_2 - 1]))))))));
                }
            }
        }
        var_15 |= (((3317647484454519891 != 23308) >= ((-(arr_13 [i_1] [i_1] [i_1])))));
        var_16 += ((-(max(((min(23296, 24284))), 2256759059))));
        var_17 += (min(-4700, (arr_6 [i_1])));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_18 = (((arr_18 [i_4]) <= (arr_4 [i_4])));
        arr_19 [i_4] = (23296 * 1103998047281619804);
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_23 [i_5] = ((((min((arr_9 [i_5] [i_5]), 95863844))) + (((((arr_20 [i_5] [i_5]) && var_8))))));
        var_19 ^= (max((((((max((arr_17 [4]), var_4))) && (arr_0 [i_5])))), 37795));
    }
    #pragma endscop
}
