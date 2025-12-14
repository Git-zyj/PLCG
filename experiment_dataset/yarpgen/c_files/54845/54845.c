/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((1063242364 & (((((147311140 >> (var_1 + 1691252684)))) ? 451821713 : (~-85)))));
    var_21 |= (var_3 != var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_3 [i_0]);
                arr_7 [13] [i_1] = ((((((((-(arr_3 [i_1])))) ? 32761 : (arr_4 [i_0] [i_0])))) || var_6));
                arr_8 [i_1] [i_1] = (-3612 ? (((((min(0, (arr_5 [7] [i_1])))) && (arr_5 [5] [7])))) : (arr_5 [i_1] [i_1]));
            }
        }
    }
    var_22 &= 4503599625273344;
    #pragma endscop
}
