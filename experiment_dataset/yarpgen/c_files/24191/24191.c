/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((((((2047 ? 18446744073709551615 : 18013062180506659579))) ? 7052918169282076094 : (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_3] [i_1]) : var_3))))) ? (((((18446744073709551615 ? var_0 : var_10))) ? (max((arr_6 [i_0] [i_0] [i_2]), var_6)) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 15092279861551936559 : (arr_6 [i_0] [i_1] [i_0]))))) : (min(((11156139262439760138 ? 18013062180506659563 : 8746205981483210203)), (arr_9 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 - 2])))))));
                            arr_11 [i_0] [i_3] |= (var_0 ? ((18446744073709551615 ? ((7290604811269791472 ? (arr_2 [i_3]) : 18446744073709551596)) : (min((arr_2 [i_3]), var_6)))) : ((279223176896970752 << (((min(6007502855180290648, 433681893202892032)) - 433681893202892002)))));
                            var_15 = (min(var_15, (((!((!(arr_9 [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1]))))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_2] [i_0] = 11156139262439760122;
                        }
                    }
                }
                var_16 = (~18013062180506659579);
            }
        }
    }
    #pragma endscop
}
