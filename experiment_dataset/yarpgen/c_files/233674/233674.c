/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((((max((arr_3 [18]), ((17669 ? 192 : var_11))))) ? (((var_14 - var_13) ? (max(25957, var_12)) : (var_13 / 192))) : var_8));
                var_18 = ((((min(192, (arr_0 [i_0] [i_0])))) ? 14890 : -var_13));
                arr_6 [i_0] = (max(82, ((max((((arr_5 [i_0 - 1] [i_1] [i_1 - 1]) && (arr_0 [i_1] [i_1]))), (43 < var_10))))));
            }
        }
    }
    var_19 = (min(-32767, (min(var_0, var_11))));
    #pragma endscop
}
