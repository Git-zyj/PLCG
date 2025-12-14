/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (max(((-448658924 ? (arr_3 [5] [i_2 - 1] [i_2]) : (arr_3 [i_2] [i_2 - 1] [i_2]))), (((arr_3 [i_2] [i_2 + 1] [i_2]) ? var_11 : (arr_3 [i_2] [i_2 + 1] [i_2])))));
                    arr_8 [i_0] [i_1] [i_2] = (((((arr_1 [i_1 + 1] [i_0 + 3]) ? var_8 : (arr_1 [i_1 + 1] [i_0 - 1]))) * -448658925));
                    var_14 &= ((((arr_7 [4] [i_2 + 2] [i_2]) ? ((448658926 ? (arr_4 [12] [12]) : 3404388277)) : (((63975 ? var_10 : var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
