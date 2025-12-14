/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = ((((12 >= (!195))) && ((max(((min(244, 6))), (var_4 ^ var_12))))));
    var_21 = (min((((!((max(0, 27)))))), ((var_7 ? 39 : ((min(var_0, var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = (min((((!var_6) ^ ((min(6645, var_1))))), (!-var_3)));
                arr_5 [i_0] = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
