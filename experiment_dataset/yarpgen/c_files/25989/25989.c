/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((~var_12), (((~var_3) ? (~-6733647896478435443) : ((-29458 ? 10609 : 8380416))))));
    var_19 &= 8018344595375884288;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((0 & 14535670496904029994) ^ (((17191847145037241292 ? -29458 : -10610)))));
                arr_5 [i_0] [3] [i_1] = (((arr_3 [i_1 - 1] [i_1 - 1] [i_0]) ? (((arr_3 [i_1 - 1] [i_1 - 1] [i_0]) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_0]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_0]))) : (min((arr_3 [i_1 - 1] [i_1 - 1] [i_0]), (arr_3 [i_1 - 1] [i_1 - 1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
