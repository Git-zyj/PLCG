/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((106 ? var_7 : 558446353793941504));
                var_18 = (((((101 ? (arr_2 [i_0] [i_1]) : (((arr_4 [i_0] [i_0] [i_1]) ? -32749 : 49738))))) ? 49736 : (((((169 ? (arr_2 [i_0] [9]) : 61))) ? (arr_4 [i_0] [i_0] [i_1]) : ((49738 ? 11024506646174521770 : (arr_3 [i_0])))))));
                var_19 = ((((arr_1 [i_1] [i_1]) - -8542612772656828802)));
            }
        }
    }
    var_20 = (((246 ? (-12175 >= 5730159729020511140) : (min(-1479552386, var_0)))));
    #pragma endscop
}
