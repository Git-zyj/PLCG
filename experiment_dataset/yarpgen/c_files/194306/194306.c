/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (((((min(var_18, 245)) >> (var_6 + 1686536416))) == ((var_10 ? -var_18 : var_17))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_0 - 1] [i_0] &= (((((((max((arr_4 [9]), (arr_2 [i_1])))) ? 22 : var_12))) >= var_10));
                var_21 = ((((((var_11 != (max(252, 9047517876032347069)))))) < (11353444711980906545 + 2125)));
                var_22 = (arr_0 [i_0]);
                arr_7 [i_0] [i_0 - 2] = 174;
            }
        }
    }
    #pragma endscop
}
