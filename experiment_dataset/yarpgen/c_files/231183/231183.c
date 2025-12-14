/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((0 ? var_6 : (min(((var_0 ? (-9223372036854775807 - 1) : var_11)), 151))));
    var_13 = ((var_3 ? -9209341336808635707 : (((max((!var_1), (!var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (arr_1 [i_1])));
                arr_5 [6] [i_1] = 9209341336808635727;
                arr_6 [i_0] [i_1] [i_1] = var_4;
                arr_7 [i_0] [i_0] [3] = (arr_2 [i_0]);
                var_15 -= var_11;
            }
        }
    }
    var_16 = (min(((min(18446744073709551603, (-32767 - 1)))), 32767));
    #pragma endscop
}
