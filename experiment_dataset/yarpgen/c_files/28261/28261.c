/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_11 -= (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])));
        var_12 -= ((-(max(1, ((((arr_0 [i_0]) ? var_1 : var_4)))))));
        arr_3 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_0 [i_0]) : (((!(((-(arr_2 [i_0] [i_0]))))))));
        var_13 = 8313;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = max(((var_9 - (arr_2 [i_1] [i_1]))), (max(((max(var_8, (arr_0 [i_1])))), (min((arr_2 [i_1] [i_1]), 1119608921)))));
        var_14 = (max((((((max(8144958536286530127, 57473))) || ((min(var_7, -1119608943)))))), (((arr_0 [i_1]) ? (((max(5307, 28225)))) : ((-(arr_2 [i_1] [i_1])))))));
        var_15 = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_16 -= (((arr_7 [i_2]) ? ((-(-30788 <= -96))) : 5302));
        arr_10 [i_2] = (arr_1 [i_2]);

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_17 -= 1;
            arr_13 [i_3] = 244;
            var_18 = (max(var_18, 1119608969));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_19 -= (((1 ? 26112206 : -774249560)));
            var_20 -= (((max(5335, -4039353449623378841))) ? (arr_9 [i_2]) : (max((arr_11 [i_2] [i_2] [i_4]), ((max((arr_4 [i_4]), (arr_11 [i_2] [i_4] [i_4])))))));
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_21 &= ((((((var_2 ? var_4 : -27264)))) ? (((((1 ? 14322167425516452284 : 1193672544))) ? (arr_15 [i_2] [i_5 + 1] [i_5 - 2]) : (((arr_7 [i_2]) ? 1 : 1)))) : ((-(((arr_15 [i_2] [i_5] [i_5]) ? (arr_12 [i_2]) : var_4))))));
            var_22 -= (~((max((max(2915, (arr_9 [i_2]))), -9))));
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_23 = (max(1193672570, 774249565));
        var_24 *= arr_1 [i_6];
        var_25 -= ((8 << (((arr_1 [i_6]) ? (arr_1 [i_6]) : (arr_1 [i_6])))));
    }
    var_26 = (((~var_1) ? (max(((var_10 ? 2915 : var_1)), ((min(15596, -9))))) : ((-1453373966 ? ((-46 ? 15615 : 62601)) : var_1))));
    var_27 = ((-(max(var_6, var_2))));
    var_28 = (max((((((max(127, var_4)))) <= (max(var_5, -5307)))), (var_3 && var_0)));
    #pragma endscop
}
