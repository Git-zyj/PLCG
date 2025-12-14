/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((-0 ? 4137339479 : (max(4137339493, (-9223372036854775807 - 1))))), (min(1, 0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0] = max((((arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 2]))), (((!(arr_3 [i_0 - 1] [i_0 - 1] [i_0])))));
                var_18 = (min(var_18, (((((((((var_1 << (var_8 - 3031126113)))) ? (arr_2 [i_1]) : ((var_3 ? var_10 : var_1))))) ? (arr_2 [i_0 - 1]) : 1143914305352105984)))));
                var_19 = (max(var_19, var_1));
                var_20 ^= (arr_0 [i_1 + 1] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
