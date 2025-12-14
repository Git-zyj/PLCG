/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, var_4));
                    var_11 = ((((min((arr_1 [i_0]), ((max(9442, (arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_2]))))))) ? (((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_5 [i_0] [i_1 + 1] [i_0]) : 1104957322)) : ((((arr_3 [i_1 - 1] [i_2 + 2]) && ((min(var_9, -9442))))))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        arr_11 [7] [7] = ((-(((var_9 == (arr_3 [i_3] [i_3 - 2]))))));
        var_12 = (((arr_5 [i_3] [i_3 + 2] [0]) ? -9458 : 9442));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_13 = ((!(arr_12 [i_4])));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_14 &= ((9426 == (arr_15 [i_4] [i_4] [i_5])));
            var_15 = -4482536097569492340;
        }
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            var_16 += ((~(arr_16 [i_6 - 1] [4])));
            arr_18 [i_4] [i_6] = (arr_16 [i_6 + 1] [i_6]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_22 [i_7] = (arr_12 [i_4]);
            var_17 = (((arr_16 [i_4] [i_7]) ? (~16275) : 16286));
        }
    }
    #pragma endscop
}
