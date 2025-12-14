/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_2 ? 1 : 10757393073812241262)) <= ((16022809193763223222 ? var_5 : 18446744073709551615))))) <= var_4));
    var_19 = (((((var_5 <= (var_10 <= 1608190057)))) ^ var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 |= var_7;
                arr_7 [i_0] = ((!(((~(arr_5 [i_0] [i_0] [i_0]))))));
                arr_8 [i_0] [i_0] [15] = (min(var_16, (((~((-14 ? (arr_4 [1]) : var_2)))))));
            }
        }
    }
    var_21 = (((((-25 / var_9) >= (-8 < 1))) && ((max(1, var_8)))));
    var_22 = (((((~((var_7 ? -1608190057 : 18446744073709551615))))) ? (((max(7689350999897310364, 27)) ^ var_12)) : 16518549196727237464));
    #pragma endscop
}
