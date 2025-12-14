/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((((min((arr_7 [i_0] [i_0 - 1] [i_2]), (arr_1 [i_0 - 1])))) ? (((arr_7 [i_0 + 2] [i_0 - 1] [i_2]) ? var_9 : (arr_7 [i_0 - 1] [i_0 - 1] [i_2]))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_7 [i_0] [i_0 - 1] [i_2]))))))));
                    arr_8 [i_2] [i_2] [i_0 - 1] = ((var_8 ? (var_16 < var_16) : 236));
                    var_20 = 0;
                    arr_9 [i_2] [i_1] [i_2] = ((min(var_5, 102)));
                    arr_10 [i_2] = (((((arr_2 [i_2]) ? (arr_7 [i_0 + 1] [i_0] [i_0]) : (arr_2 [i_1]))) != ((((~(arr_4 [i_0] [i_1] [i_2]))) | ((max(30130, -48)))))));
                }
            }
        }
    }
    #pragma endscop
}
