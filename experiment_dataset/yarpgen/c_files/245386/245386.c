/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = (((var_5 ? 8475781626528686068 : var_11)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_20 ^= -791186380533752723;

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                var_21 &= (arr_0 [6]);
                var_22 = -3118751605827638803;
            }
            var_23 += (arr_1 [i_1 + 1] [0]);
            var_24 |= (((((((min((arr_8 [6]), (arr_0 [2])))) ? (arr_2 [2]) : (min(1163094648, 1586470370238838313))))) ? ((15742 ? 1266338510 : 1)) : (((((arr_2 [6]) ? (arr_0 [4]) : 255))))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_25 = (max((arr_9 [i_0]), 4327743489600190124));
            var_26 = ((!(arr_3 [i_0] [i_0])));
        }
        var_27 = min((min((arr_10 [i_0] [i_0]), -553076113)), ((min(-16565, 11842))));
        var_28 = ((((max((min((arr_6 [i_0]), (arr_1 [i_0] [i_0]))), (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0])))))) ? -21 : (((max((arr_8 [i_0]), 160))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_29 = (arr_14 [i_4]);
        var_30 = (max(((-8307658658316403947 ? (arr_13 [i_4] [i_4]) : (arr_13 [i_4] [i_4]))), ((max(1, 0)))));
    }
    #pragma endscop
}
