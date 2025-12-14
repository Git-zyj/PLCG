/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_4 ? var_11 : (var_5 - var_4)))) ? (~var_5) : (var_10 << var_3)));
    var_13 = ((var_4 ? ((((!var_3) && (-884661490416244385 || 3877530853)))) : (((!(!var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((~((var_8 ? var_10 : var_10))))) & ((1 ? ((var_2 ? 0 : 3877530853)) : 3877530848)));

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_14 ^= (((((var_4 && (var_8 <= var_8)))) * (((((var_5 ? var_11 : var_7)) < ((var_2 ? var_6 : var_11)))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((((var_11 ? ((var_6 ? var_9 : var_7)) : (!var_2))) / (var_9 * var_8)));
                    arr_11 [i_0] [i_1] [i_1] [i_0 + 1] = ((~(((!2146435072) ? (!var_11) : (var_2 ^ var_0)))));
                    var_15 = -3877530853;
                    var_16 += (((!-var_0) <= ((-((var_9 ? var_4 : var_6))))));
                }
            }
        }
    }
    var_17 += (2146435057 & -119);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_18 *= (((((~var_4) >= ((var_5 ? var_6 : var_3)))) ? (((var_2 ? var_8 : var_5))) : (((var_3 % var_8) ? var_10 : var_9))));
                    arr_19 [i_5] [i_4] [i_3] = ((((~((var_2 ? var_0 : var_5))))) | ((-4517518519252307272 - (((var_1 ? var_8 : var_10))))));
                    arr_20 [i_5] = ((((((var_2 ? var_7 : var_5)))) <= ((var_4 ? (1675567292283300679 & -1482006115) : (~var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
