/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (arr_2 [i_0 + 1]);
        arr_4 [i_0 + 1] [i_0 + 1] = (((((arr_2 [i_0 + 1]) || -3)) ? (((min((arr_0 [i_0 + 2]), (var_6 == var_1))))) : (arr_2 [i_0 + 2])));
    }
    var_15 = ((var_12 != ((0 ? (var_1 <= var_12) : var_13))));
    var_16 = ((1 || ((((658420652 > 0) ? var_3 : (var_12 >= var_9))))));
    var_17 = (((var_7 < var_5) <= (-658420652 || var_13)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                arr_10 [i_1] &= ((((((arr_5 [i_1] [i_2]) || (arr_5 [i_1] [i_2])))) > ((-(arr_5 [i_1] [i_1])))));
                var_18 ^= (max(var_6, ((((65228 < var_2) < (217 > var_6))))));
            }
        }
    }
    #pragma endscop
}
