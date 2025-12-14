/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((((((((var_14 ? var_19 : (arr_1 [i_0] [i_1])))) ? 2958292563 : (arr_2 [7] [i_1] [12])))) || ((((((23077 >> (((arr_2 [i_1] [10] [4]) - 11055))))) + (((arr_2 [i_0] [i_0] [i_1]) ? var_6 : 1336674715)))))));
                var_20 = ((((((arr_3 [i_0]) - (min((arr_3 [i_0]), var_5))))) ? (arr_2 [i_1] [5] [i_0]) : (((var_1 < (arr_0 [12]))))));
                var_21 = ((var_4 + 2147483647) << (((((((1336674733 || (arr_3 [3])))) << (((((arr_3 [i_1]) << (arr_0 [i_0]))) - 2363106550146035825)))) - 524288)));
                var_22 = (min(var_22, ((((((((((arr_2 [i_0] [i_1] [i_1]) >> (-1731435278 + 1731435287))) != ((var_3 >> (var_12 - 16794204288980092379))))))) * ((~(arr_3 [i_0]))))))));
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
