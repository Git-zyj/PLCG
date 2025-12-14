/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (min(1, 18446744073709551615));
                    var_20 |= (min(-1, 2251799813652480));
                    var_21 -= ((!((((arr_2 [i_0 + 2] [i_0 - 1]) ? (arr_2 [i_0 - 2] [i_0 - 1]) : (arr_2 [i_0 + 2] [i_0 - 1]))))));
                }
            }
        }
    }
    var_22 |= max((((!((max(var_0, var_16)))))), (max((((1639567172 ? 14832 : 14832))), (min(2251799813652480, 1)))));
    #pragma endscop
}
