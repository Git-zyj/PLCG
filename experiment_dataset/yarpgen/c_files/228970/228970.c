/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -797852117;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((arr_5 [i_0] [i_1] [7]) ? ((~(min(10484827415879391642, 10484827415879391617)))) : (-465344797 < 7961916657830159981))))));
                    var_12 = (arr_4 [0] [i_0]);
                    arr_7 [i_2] [i_1] [10] = ((+((1761799661 ? (2147483647 | 238502315) : 2147483647))));
                    var_13 -= -var_8;
                }
            }
        }
    }
    var_14 = 4056464957;
    #pragma endscop
}
