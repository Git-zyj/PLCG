/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [2] [1] = ((((arr_2 [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? (arr_2 [i_2 + 1] [i_2 + 1] [i_2]) : (arr_2 [i_2 + 1] [i_2 - 1] [i_2]))));
                    arr_8 [11] [i_1] [i_2] = (max((arr_5 [i_0] [i_1] [6] [i_1]), (arr_5 [1] [i_1] [i_2] [i_2 + 1])));
                }
            }
        }
    }
    var_18 = 786432;
    var_19 &= (((((var_11 + 2147483647) >> ((((var_17 ? var_10 : 19783)) + 5513))))) < ((-786432 ? var_11 : (max(786432, 29306)))));
    #pragma endscop
}
