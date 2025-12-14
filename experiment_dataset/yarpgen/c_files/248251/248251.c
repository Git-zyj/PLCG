/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (max(var_7, ((var_2 ? (var_13 - -1426726606035727619) : (((max(162, 162))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((((((((var_11 ? 118 : -2054828075))) ? ((min(116, -118))) : (((arr_0 [i_2]) ? (arr_3 [i_2] [i_1] [i_2]) : 59731066))))) ? (((arr_6 [i_0] [i_1] [12]) ? 1155282186 : (arr_6 [10] [10] [i_2]))) : var_12));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((((arr_2 [i_0]) ? var_17 : (arr_2 [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
