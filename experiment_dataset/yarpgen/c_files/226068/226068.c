/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (((((arr_3 [i_1]) && 1)) ? (((!(((var_1 ? (arr_3 [i_0]) : 15872)))))) : ((((-1805598355 || 52778) || var_11)))));
                var_20 = ((((18446744073709535748 ? (arr_1 [i_0 + 1] [i_0 + 1]) : 109))) ? 11037933269680274526 : (max(((var_6 | (arr_4 [1]))), ((min((arr_0 [i_1] [5]), 102794022))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_10 [0] = (arr_8 [i_2] [i_2] [i_2]);
                var_21 ^= (arr_6 [i_2]);
                arr_11 [i_2] [1] [i_3] = ((26735 ? (arr_9 [i_2 + 1] [i_3]) : (min(var_1, (arr_6 [i_3])))));
            }
        }
    }
    var_22 = (min((~18446744073709535743), var_4));
    #pragma endscop
}
