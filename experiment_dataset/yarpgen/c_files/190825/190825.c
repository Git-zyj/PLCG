/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (max(2147483646, -250));
                    var_11 = ((((774406970 > (4 / 790882676))) ? ((~(arr_1 [i_0]))) : (((1762821873692075654 != (-9223372036854775807 - 1))))));
                }
            }
        }
    }
    var_12 = max((max(13, 1)), 2);
    var_13 = ((var_1 ? var_4 : ((var_9 ? ((15 ? -2399149212615779648 : var_7)) : (((16383840508736740186 ? var_2 : 224)))))));
    var_14 = (min(var_14, (((65535 ? var_8 : var_5)))));
    #pragma endscop
}
