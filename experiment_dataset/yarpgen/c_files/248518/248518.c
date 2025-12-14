/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 18446744073709551615;
    var_21 = (max(var_21, var_0));
    var_22 = (min(-51, var_14));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = -3291013241846545801;
        var_23 = (max(var_23, ((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : ((min(var_15, 0))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [3] [i_1] [i_1] = (arr_2 [i_0] [i_1]);
            var_24 = (((arr_2 [18] [i_1]) ? 10627727277936361533 : -1252183788504013940));
            arr_7 [12] = (arr_2 [9] [17]);
            arr_8 [i_1] = (((arr_1 [i_0]) - (arr_1 [i_1])));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_25 = var_16;
            var_26 = (arr_9 [i_2 + 2] [i_2 + 2]);
        }
        arr_12 [i_0] [i_0] = ((var_15 / (arr_4 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_16 [i_3] = ((((1252183788504013916 ? 13357 : 0))) ? (((1252183788504013916 ? (-32752 > 7712328882528846166) : (((arr_14 [i_3] [i_3]) + 103))))) : (0 - 1252183788504013920));
        var_27 = (~-2186854649549838246);
        arr_17 [i_3] = ((~(arr_1 [i_3])));
        var_28 = (min(var_28, ((((max(2129442049, (max(13617681474874611363, 149707029)))) + ((((!((((arr_10 [i_3]) >> (32752 - 32728)))))))))))));

        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_29 = (max(12651194303754511129, 101680661));
            var_30 = (max(var_30, (((!(arr_15 [i_4]))))));
            arr_20 [i_3] = (((1252183788504013916 != -873351963) - (min(38, -1252183788504013897))));
            var_31 = (arr_10 [i_4]);
            arr_21 [i_4] [i_4] |= (((arr_1 [i_3]) && (((arr_4 [i_4] [i_4 + 1]) || (arr_4 [i_4 - 1] [i_4 - 1])))));
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_32 = -32487;
        var_33 = (min(var_33, (arr_10 [i_5])));
    }
    #pragma endscop
}
