/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_6 / ((1 ? 1536 : -var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [8] [i_1] [i_1] [8] = ((((((~var_3) ? (var_9 & 1) : (!1)))) >= (arr_2 [i_0] [i_0])));
                    arr_8 [i_0] = (max((((arr_6 [i_0] [i_0] [i_2 - 1] [i_2 - 2]) / 6629020227176334840)), ((((1 ? var_12 : (arr_3 [i_0] [i_2 + 1]))) | -207))));
                    arr_9 [i_0] [i_0] [5] [i_2] = ((((210 ? (arr_5 [i_0] [i_0] [i_0] [i_2 - 1]) : (arr_5 [i_2] [i_2] [i_2] [i_2 + 2]))) & (((arr_5 [i_1] [i_1] [8] [i_2 + 2]) ? 2 : (arr_5 [i_2] [i_2] [i_2] [i_2 + 1])))));
                }
            }
        }
    }
    var_20 = 0;
    var_21 = (~var_15);
    #pragma endscop
}
