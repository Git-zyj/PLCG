/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_2);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (max(17232, (!3887873867851506980)));
                    var_22 = ((((((((arr_2 [i_0]) % (arr_4 [i_0] [i_0])))) ? (arr_4 [i_0] [i_0 - 3]) : ((54970 ? 1010040398461659410 : (arr_0 [i_0]))))) >= ((((arr_3 [i_0 - 1] [i_1]) << (((arr_3 [i_0 - 2] [i_0 - 2]) - 235)))))));
                    arr_9 [1] [i_1] [i_1] [i_0] = ((((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_1]))))) % (max((arr_1 [i_0]), (arr_1 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
