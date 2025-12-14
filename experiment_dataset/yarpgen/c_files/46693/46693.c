/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (-35 % 65535);
    var_12 = (min(((-var_6 ? var_7 : (-31 > 2251))), (((((min(64831, -35))) < ((2260 ? 101 : 1)))))));
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= (arr_2 [i_0] [i_1]);
                var_14 = (min(var_14, (min((arr_2 [i_0] [i_0]), ((1336843319 ? (((-2147483647 - 1) & 1336843303)) : -1336843325))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_11 [i_2] = (((arr_6 [i_2]) && ((((((0 % (arr_0 [i_2])))) ? (arr_7 [i_3]) : (((arr_10 [i_2] [i_3]) ? (-2147483647 - 1) : var_8)))))));
                arr_12 [i_2] = (18 * 0);
            }
        }
    }
    #pragma endscop
}
