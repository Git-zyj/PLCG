/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((9223372036854775791 < (((60 ? var_16 : var_16)))))))));
    var_18 -= (~65535);
    var_19 = var_13;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (-16017 / -105);
        arr_3 [i_0] = (((((arr_0 [i_0 - 1]) ? var_13 : 189)) & (arr_0 [i_0 - 1])));
        var_20 = 124;
        var_21 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = -124;
                    var_23 = 8782473119465538846;
                    var_24 += ((-1174308636 ? 1813601966 : ((var_11 << (49518 - 49518)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    {
                        var_25 -= 13886;
                        var_26 = (((49522 ? -2056838064 : var_7)));
                    }
                }
            }
        }
        var_27 = -var_15;
        var_28 = ((~(min(49519, (arr_1 [i_3])))));
    }
    #pragma endscop
}
