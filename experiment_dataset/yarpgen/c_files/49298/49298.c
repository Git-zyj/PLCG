/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 13305975175355114901;
    var_20 = ((-(max(((4793825066867175806 ? 7 : 1060447015385279236)), var_9))));
    var_21 ^= 2719055021;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((4123 << ((min((arr_0 [i_0 + 2]), 0))))));
        arr_4 [21] = ((((137 ? (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : 0)) : ((max(139, -28829))))) > (((!(((113 ? 48852 : 1))))))));
        var_22 -= (((((((min(117, (arr_0 [i_0])))) ? 139 : (arr_1 [i_0 + 2] [i_0])))) ? (max(17386297058324272380, -831899730)) : (arr_1 [i_0 - 2] [14])));
        arr_5 [i_0] [i_0 + 3] = (min(((((min(1060447015385279236, 532676608))) ? ((16684 ? 32767 : (arr_2 [i_0]))) : (arr_0 [i_0 - 2]))), 32767));
        var_23 = (min(var_23, ((((((arr_1 [i_0 - 2] [i_0 - 2]) ? (arr_1 [9] [i_0 - 2]) : (arr_0 [i_0]))) == (arr_1 [i_0] [i_0 - 2]))))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_10 [i_1] = (min(1060447015385279236, ((((arr_9 [i_1 + 1]) ? 5224 : (arr_9 [i_1 - 1]))))));
        var_24 = (((((~(min(-2468207570575411493, var_11))))) ? (96 / 128) : (arr_7 [7])));
        arr_11 [i_1] = (arr_9 [i_1 - 1]);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = (((arr_8 [13] [19]) != (((((arr_9 [i_2]) - 3231392547))))));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_25 = ((min(207, (arr_6 [i_2]))));
            arr_17 [i_2] [i_2] [i_2] = min(511, (((252 ? var_3 : (arr_7 [i_3])))));
        }
    }
    var_26 = (min(var_26, ((max(var_7, var_0)))));
    #pragma endscop
}
