/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 32767;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((((max(0, 121)))) ^ ((2147483639 % (arr_5 [i_1 - 1] [i_1]))));
                arr_8 [i_0] [i_0] [i_1] = (((((-118 ? -21 : -6834537833377881477)) & (arr_3 [i_1 - 1]))));
            }
        }
    }
    var_20 = ((((((15 % 65521) ? (var_13 * -21) : 0))) ? var_14 : var_10));
    var_21 = -22;
    var_22 = ((((max(var_5, (-8 % -63)))) || ((((936721732 ? 936721732 : -18))))));
    #pragma endscop
}
