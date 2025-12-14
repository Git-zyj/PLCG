/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (((-var_2 + 2147483647) << ((((3507038099 ? 787929175 : 3010684847)) - 787929175))));
                    var_12 = (((((var_9 ? (arr_1 [i_0 - 1]) : (max((arr_0 [i_0]), 787929190))))) ? (10871 <= 787929190) : (!18446744073709551603)));
                }
            }
        }
    }
    var_13 = ((((min((0 >= 3507038109), var_2))) ? (!5954889635368543291) : var_1));
    #pragma endscop
}
