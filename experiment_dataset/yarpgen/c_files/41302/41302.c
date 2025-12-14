/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (7382668005096541252 ^ var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = ((((-7576 || var_2) ? (2229647136357614231 - 166) : -19914)));
                arr_6 [i_1] = ((~((64936 ? (var_3 <= -675887915) : (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
