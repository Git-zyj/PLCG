/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!(~var_3))));
    var_20 = var_5;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_21 |= arr_5 [1] [i_1] [1];
                var_22 = (((-16 ? (51887 & -25) : (53 && -1073741824))));
            }
            arr_8 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) ^ ((((((arr_2 [i_0] [i_0]) ? var_18 : var_14))) ? (15 / -16) : ((~(arr_5 [i_0] [i_0] [i_0])))))));
        }
        var_23 = (255522049 / -203381485207601223);
        arr_9 [i_0] [i_0] = (min(-6, -11));
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = 255522049;
        var_24 += ((max((arr_0 [i_3 + 1]), (arr_0 [i_3 + 3]))));
    }
    #pragma endscop
}
