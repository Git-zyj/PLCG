/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-(((-1 != -12426) ? -122 : -3))));
    var_21 = var_6;
    var_22 &= (((-123 ? var_11 : var_9)) << (((!((min(var_6, var_8)))))));
    var_23 = (((((-(min(134217727, 7995))))) ? var_6 : ((-0 - (max(255, 5960167323108438473))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_24 |= (min(-var_3, (max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
                arr_6 [i_1] = ((-(((arr_5 [i_1] [i_1] [i_1]) ? var_7 : (arr_5 [i_1] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
