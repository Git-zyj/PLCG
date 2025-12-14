/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (!var_7);
        var_19 -= max(var_5, (min((max(var_7, var_14)), var_14)));
        var_20 += min((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 0)), (((!(arr_0 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                var_21 = (max((~var_6), (arr_2 [i_1])));
                var_22 = 2781018371;
            }
        }
    }
    var_23 |= min(18446744073709551615, 2440671699589035162);
    #pragma endscop
}
