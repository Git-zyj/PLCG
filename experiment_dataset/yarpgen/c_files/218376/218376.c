/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, -2492570213124898533));
                    var_14 = ((+((((max((arr_4 [i_0] [i_1 - 1]), (arr_2 [i_0]))) >= (arr_6 [i_0]))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_15 = ((+(((arr_5 [i_0] [i_3] [7] [i_3 + 1]) ? (arr_5 [i_3] [i_3] [i_4] [i_3 - 3]) : (-2147483647 - 1)))));
                        var_16 -= (144115188075855871 / 2618640547);
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] = (!127);
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [i_6] = var_12;
        var_17 = (((((-1536560919 ? (arr_17 [i_6]) : 110056940))) >= (max((((arr_18 [i_6] [i_6]) ? var_10 : (arr_20 [i_6]))), (min((arr_20 [i_6]), (arr_20 [1])))))));
    }
    #pragma endscop
}
