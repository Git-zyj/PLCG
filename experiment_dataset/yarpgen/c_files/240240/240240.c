/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 &= min((arr_2 [i_0] [10]), var_1);
                var_17 = (max(var_17, ((min((47 + -64), (((((arr_2 [i_0] [6]) && var_4)) ? 1 : 12902)))))));
            }
        }
    }
    var_18 -= (((((4095 << (-1 + 13))) == -47)));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                var_19 += (max(((min((arr_5 [i_2 + 1] [6]), (arr_5 [i_2 - 2] [14])))), ((((min((arr_3 [1]), (arr_2 [i_3] [10])))) ? ((var_1 ? (arr_7 [1] [i_3]) : (arr_0 [4] [i_3 + 2]))) : (arr_5 [i_3 + 4] [0])))));
                var_20 -= (((((max((arr_6 [i_2]), (arr_1 [0])))) ? ((((arr_8 [i_3 - 2] [i_3 - 2] [2]) && 1))) : (((arr_8 [0] [i_3] [1]) ? -124 : 1)))));
            }
        }
    }
    var_21 = (min(var_21, (-570140605 * 1)));
    #pragma endscop
}
