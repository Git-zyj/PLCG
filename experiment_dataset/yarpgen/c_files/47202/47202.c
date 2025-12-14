/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [2] &= (arr_1 [6] [i_0]);
        arr_3 [i_0] = 9223372035781033984;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1 - 1] = (arr_1 [4] [i_1 - 1]);
        var_12 = (((((-112 % -94) / (-9223372036854775807 - 1))) ^ -102));
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    var_13 = ((((((((arr_11 [i_2]) + (arr_10 [i_2] [i_4]))) | ((((784021522062348524 && (arr_10 [i_2] [i_2])))))))) && 4261412864));
                    arr_14 [i_2] = (arr_9 [14] [i_3] [i_2]);
                    var_14 = (arr_11 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
