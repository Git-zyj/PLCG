/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_14, 1815006426) ^ (max((-2147483647 - 1), (-2147483647 - 1)))))));
    var_19 = (var_7 & var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (min(((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))), (arr_2 [i_0] [i_0] [i_0])))));
                arr_4 [i_0 - 2] [9] [9] = (((arr_3 [i_0] [i_1] [i_1]) % (9327197505866855866 ^ 18446744073709551602)));
            }
        }
    }
    #pragma endscop
}
