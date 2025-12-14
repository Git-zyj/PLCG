/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((!((!((!(arr_2 [i_0])))))));
                    arr_10 [i_1] [i_0] = (~1);
                }
            }
        }
    }
    var_16 |= ((-((~(!var_5)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_17 = ((~((-(~12652484513388692579)))));
                var_18 = ((!(!11)));
                arr_17 [i_3] = ((!(((~(~12652484513388692584))))));
            }
        }
    }
    var_19 ^= (~(~12652484513388692584));
    var_20 |= ((!(!var_6)));
    #pragma endscop
}
