/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min(-563839107188985115, ((max(1990181623, 3300))))), 31));
    var_11 = var_6;
    var_12 = (max(var_2, var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                    var_13 = 25238;
                    var_14 = (min(((min((min((arr_4 [2] [i_1] [i_1]), -8291970227480926724)), (!var_0)))), (max((arr_0 [i_0 + 1]), (arr_3 [i_0] [i_2])))));
                    arr_11 [i_0] [i_0] [i_0] = ((-(max((arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 3]), (arr_6 [i_0 - 1] [i_0 + 1] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
