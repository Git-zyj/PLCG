/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(((18446744073709551615 ? var_3 : var_12)), var_11));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_17 = (((+(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 58)))));
        var_18 = (max(var_18, (((3843905365 ? 10783984005176469430 : 1)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_19 = (arr_1 [i_0 + 2] [i_2]);
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(((max((arr_1 [i_0] [i_0]), 3843905365)) << (198 - 183)))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((var_14 ? 0 : 1));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((((((((var_0 ? 1 : var_13))) ? (min(2840847984, 1)) : ((-25 ? 105 : (arr_15 [i_4] [i_4] [i_4])))))) ? ((((!(arr_16 [i_5 - 1] [i_5 - 3]))))) : (max((arr_15 [i_4] [i_4] [i_4]), (3810757586 || var_4)))));
                arr_18 [i_4] &= 23559;
            }
        }
    }
    #pragma endscop
}
