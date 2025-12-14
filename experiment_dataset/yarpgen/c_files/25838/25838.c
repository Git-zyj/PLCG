/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 = (((~-8791633658727837040) ? 19359 : (min((arr_1 [i_0]), (arr_2 [i_0 + 1])))));
        var_17 = ((((max(((~(arr_2 [9]))), 501863466))) >= (((min((arr_3 [i_0] [i_0]), (arr_1 [i_0]))) * 229))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_18 = (max(var_18, (((1 ? 508 : 39)))));

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_13 [i_3] [i_2] [i_3] = (((((~-508) ? (arr_12 [i_1] [i_2] [i_2] [i_3]) : (min((arr_10 [i_3] [i_2] [i_2] [i_3]), 4294836224)))) + (((-1086489230 / (!0))))));
                    var_19 += ((-73 > (((arr_9 [9] [8] [i_3]) | ((62 ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : (arr_11 [i_2])))))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_20 = (min(var_20, (arr_10 [i_2] [i_2] [i_2] [i_4])));
                    var_21 = -8791633658727837054;
                }
            }
        }
    }
    var_22 += (((10766 % 7532444899555652931) && var_3));
    #pragma endscop
}
