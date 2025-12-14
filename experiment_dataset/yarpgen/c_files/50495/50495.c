/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 |= min((min((((!(arr_4 [i_1 - 1] [i_0])))), (arr_7 [i_0] [i_1] [i_2]))), (((((var_11 ? -299167721 : (arr_3 [i_2]))) + ((var_2 ? 1467504960 : (arr_5 [i_0 + 1])))))));
                    arr_9 [i_0] [i_0] [i_1] [2] = ((((!(arr_0 [i_1]))) ? ((((arr_5 [i_0]) ? (((arr_6 [i_0] [i_2]) ? (arr_8 [i_0]) : var_2)) : ((var_8 ? (arr_3 [i_0]) : var_6))))) : ((((max((arr_8 [i_2]), (arr_1 [i_0 + 1] [i_2])))) ? var_1 : (arr_5 [4])))));
                }
            }
        }
    }
    var_13 |= -1467504969;
    var_14 -= ((78 ? -23423 : 4198216859));
    #pragma endscop
}
