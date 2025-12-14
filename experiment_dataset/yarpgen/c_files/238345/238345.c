/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18446744073709551593;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((-7773144579471776529 ? 127696339 : (arr_3 [i_0] [i_1])));
                arr_6 [i_0] [i_0] [i_1] = var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_19 = ((((8809920186010274044 / (min(1926163094972854862, 127696339)))) < (((var_0 ? 0 : var_5)))));
                arr_12 [i_2] [i_2] [i_3] = -1422826330057061537;
            }
        }
    }
    var_20 = ((~(((!(((-1422826330057061551 ? var_5 : 5370684767584470063))))))));
    var_21 = -var_11;
    #pragma endscop
}
