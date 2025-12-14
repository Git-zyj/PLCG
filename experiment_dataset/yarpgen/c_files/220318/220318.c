/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((max((arr_3 [i_0] [i_0]), var_0)) & var_7));
        var_11 = ((((var_10 - 15) << (((arr_1 [i_0]) + 84)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_12 = -1;
                    var_13 = var_7;
                    arr_15 [i_1] [i_1] [i_1] = -var_8;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_14 += (((((var_7 ? var_4 : var_5)) == 11)));
                        var_15 = ((var_8 ? ((511 << ((max(var_3, -1))))) : ((((arr_7 [i_6] [i_5 - 4]) ? (((-127 - 1) * var_5)) : (488 / -27584))))));
                        arr_23 [i_4] [i_1] [i_1] [i_1] = ((-((min(-17, (arr_21 [i_4]))))));
                    }
                }
            }
        }
    }
    var_16 = (min((127 ^ 63), ((1 - ((max(77, 65034)))))));
    var_17 ^= 63;
    #pragma endscop
}
