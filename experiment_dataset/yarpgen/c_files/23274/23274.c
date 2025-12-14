/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (~3335302788712991449);
        var_17 = 2860836217743071435;
        var_18 = (min(var_18, (((!(((var_13 | ((max(var_1, (arr_2 [8]))))))))))));
        var_19 = (~3335302788712991449);
        var_20 *= ((var_11 & (((!(((arr_0 [i_0]) && 2860836217743071444)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1] = ((-(arr_5 [i_1] [i_1] [15])));
            arr_9 [i_1] |= ((max((arr_6 [i_2]), 2860836217743071435)));
            arr_10 [i_1] = 2860836217743071427;
        }
        arr_11 [i_1] [i_1] = ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((!(15585907855966480180 || -4634975608847212676)))) : ((var_12 ? (arr_4 [i_1]) : 2860836217743071437))));
    }
    var_21 = var_4;
    var_22 = min(var_5, ((((max(2147483647, 255))) | (min(var_9, 2860836217743071465)))));
    var_23 |= (-20 ? var_14 : (-76 || 3423808433));
    #pragma endscop
}
