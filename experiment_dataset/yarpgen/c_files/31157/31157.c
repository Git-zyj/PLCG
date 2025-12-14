/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max((3 == 7), (arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 1])));
                arr_7 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                var_18 = (max(47412, (((arr_0 [i_1 + 2]) ? -3 : (arr_5 [i_1] [i_1 + 2] [i_1 + 3])))));
                var_19 = (min(var_19, ((max((!var_7), (!var_17))))));
            }
        }
    }
    var_20 = -9;
    var_21 = var_13;
    #pragma endscop
}
