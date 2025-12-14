/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (min(((((var_1 ? var_12 : -7923280691322103189)))), var_10));
    var_18 = (-0 - -1075303777);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max((((arr_0 [i_1 - 1]) + (arr_0 [i_1 - 1]))), (max(((~(arr_6 [i_1 - 1] [1]))), (arr_2 [i_1 - 1])))));
                var_20 -= ((!((((((arr_4 [12]) ? var_9 : (arr_0 [i_1])))) && ((-7923280691322103170 || (arr_1 [i_0] [i_1])))))));
            }
        }
    }
    var_21 = (min(var_21, (min(var_13, ((-(min(var_4, var_3))))))));
    #pragma endscop
}
