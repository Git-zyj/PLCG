/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((!13105132531116970217), var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, var_0));
                    arr_8 [i_0] [i_0] [i_0] = (11 <= 1185174852);
                    arr_9 [i_2] [8] [i_0] = ((((((min(var_9, 13564259863306131653))) || var_4)) ? ((18446744073709551605 ? var_2 : (-2147483647 - 1))) : (((min(var_13, (min(var_10, 227))))))));
                    arr_10 [i_1] [2] [i_2] [1] = (max((((!(arr_2 [i_0])))), (min(-1185174852, (-32767 - 1)))));
                    var_17 = (min((arr_2 [i_0]), (max((~1), ((max(var_5, (arr_3 [i_1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
