/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -32;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((((-32751 << (((arr_0 [i_0]) - 6841722755845482216))))) ? -var_8 : (arr_0 [i_0]));
        var_19 = (max(var_19, (((((min((arr_1 [i_0]), (arr_1 [i_0])))) || 0)))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_20 = (max(var_20, (arr_7 [i_1] [4])));
            var_21 = (max(var_21, (((-((min((arr_3 [1]), ((min(var_2, (arr_2 [i_1]))))))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_11 [18] |= arr_2 [i_1 + 1];
            arr_12 [i_1] [i_1] = (((arr_9 [i_1 - 1] [i_1 - 1] [i_1]) < (arr_10 [i_1] [i_3] [i_3])));
        }
        var_22 = (min(((((-296894653714615139 & var_5) ? 1 : (-2147483647 - 1)))), 0));
    }
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        var_23 = (arr_14 [i_4] [i_4]);
        var_24 = ((!((((arr_9 [i_4] [i_4 - 1] [i_4]) ? 1792224887 : (-2147483647 - 1))))));
    }
    var_25 |= var_16;
    #pragma endscop
}
