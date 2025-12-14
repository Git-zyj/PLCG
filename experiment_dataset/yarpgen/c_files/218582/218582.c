/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((((min((((arr_0 [i_1 + 1]) / (arr_1 [i_1 - 2]))), (!-1)))) ? 51011 : (((arr_2 [i_1]) - ((-(arr_2 [i_0])))))));
                arr_7 [1] [i_0] [6] = (((((((-2038024145 ? var_8 : (arr_1 [9])))) ? (arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]) : -var_8))) ? 62825 : (max(((223 ? (arr_0 [i_0]) : var_7)), var_5)));
            }
        }
    }
    var_12 = ((((min(14547, var_7))) > var_8));
    var_13 = (((((~(max(1, 606014530))))) - ((~(max(-243459864, var_0))))));
    var_14 = var_4;
    #pragma endscop
}
