/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((min(var_9, var_7))) << (var_0 - 6722)))) ? var_0 : ((~(!var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 3] [i_0] = ((((!(((-1130279693762290648 ? (arr_1 [i_0]) : 50))))) ? ((8935339024822273561 ? 18446744073709551614 : (~var_8))) : (((max(1, var_5))))));
                    var_15 = (((((18446744073709551614 ? var_5 : (arr_4 [i_0 + 2])))) ? 8935339024822273575 : (((min((arr_4 [i_0 + 2]), (arr_4 [i_0 + 2])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_16 = 2;
                var_17 = ((2221895847 % (((arr_9 [i_3]) ? var_4 : ((21 ? 8935339024822273561 : (arr_4 [i_4])))))));
            }
        }
    }
    #pragma endscop
}
