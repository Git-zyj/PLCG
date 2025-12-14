/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 ^= (arr_0 [i_0]);
                arr_4 [i_1] = arr_0 [i_0];
                var_19 -= (arr_0 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_10 [i_3] [i_2] [i_2] |= (arr_7 [i_2]);
                var_20 = ((((((arr_7 [i_2]) ? ((((arr_1 [12]) >= (arr_3 [i_2] [i_3])))) : (max((arr_0 [7]), (arr_7 [i_3])))))) ? (~-1412401059) : (((arr_0 [i_2]) ? (arr_2 [i_3] [i_3] [i_2]) : (arr_0 [i_2])))));
            }
        }
    }
    #pragma endscop
}
