/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((min(34, 2933218360788910476))) ? (max((max(11923704356872972966, 11923704356872972966)), (!18446744073709551615))) : ((max((62179 + var_5), var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = 31;
                var_18 += 57;
                var_19 = ((9505253235947551771 != (((-(arr_0 [i_0 - 1]))))));
                arr_7 [i_0 - 1] [i_0 + 2] = ((((arr_3 [i_1 + 1]) ? var_1 : (arr_1 [i_1 + 1]))));
            }
        }
    }
    var_20 = var_9;
    var_21 = (min(var_21, var_13));
    var_22 = (var_2 ^ var_11);
    #pragma endscop
}
