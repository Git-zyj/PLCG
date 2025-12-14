/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (~var_0)));
    var_13 = (max((min(((min(0, var_9))), -1822442495910560410)), (((-(min(2147483647, var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] = (min((((!((max((arr_0 [i_0] [i_1]), (arr_5 [i_0] [i_0] [i_0]))))))), (min((max(18378565447871376740, -5641725662389189102)), (!1822442495910560410)))));
                    var_14 = ((-(max((max(12, var_11)), (max(var_11, (arr_0 [i_0] [i_2])))))));
                }
            }
        }
    }
    var_15 = ((!(((-(min(var_8, var_10)))))));
    #pragma endscop
}
