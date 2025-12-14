/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_9;
    var_15 = ((~(max((((var_13 ? var_9 : 14420))), ((var_5 ? var_2 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (max(32911, (((arr_1 [i_1 + 1]) ? var_5 : (arr_1 [i_1 + 3])))));
                arr_6 [i_0 - 1] [i_1 + 2] [i_1] = (+-37316);
            }
        }
    }
    var_17 = (min(((((((var_3 ? var_12 : var_13))) >= var_1))), var_5));
    var_18 = ((((((~var_7) ? (~var_11) : var_2))) || ((-var_12 > ((14419 >> (var_8 - 36905)))))));
    #pragma endscop
}
