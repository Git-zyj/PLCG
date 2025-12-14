/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = ((-((-(arr_4 [i_0] [13] [i_1] [i_2])))));
                    var_17 = ((((((arr_1 [i_0]) % 2089399572))) ? (max((arr_1 [i_0]), (arr_4 [i_0] [21] [i_2] [i_2]))) : (((((arr_1 [i_0]) == 0))))));
                }
            }
        }
    }
    var_18 -= (max((min(var_11, var_0)), ((!((max(var_7, var_12)))))));
    var_19 = (max(((((max(var_9, -2089399573)) < ((var_4 ? var_4 : 2089399568))))), var_9));
    var_20 = (max((var_12 & 8570933600157507877), ((-((var_2 ? 2089399564 : 6099))))));
    #pragma endscop
}
