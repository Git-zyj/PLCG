/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((~(arr_1 [i_0])));
        var_16 &= (((((1177507185570517098 * (arr_1 [2]))) ^ -7384816202765014753)));
        var_17 -= (min(((17269236888139034517 ^ (2026749471 > 185))), (((arr_1 [12]) << (((185 >= (arr_1 [14]))))))));
        var_18 &= ((~(min(var_13, (arr_2 [4])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, var_10));
                    var_20 = ((((max(0, (arr_7 [i_0])))) ? (4294967295 >= 185) : 1177507185570517109));
                    var_21 ^= (((((((((var_13 ? var_9 : 0))) && (!-30035))))) == (((((min((arr_0 [i_2]), (arr_0 [4]))))) ^ ((4233573725 ? (arr_6 [i_1]) : var_2))))));
                }
            }
        }
    }
    var_22 = (min(var_22, ((((!var_13) > var_8)))));
    #pragma endscop
}
