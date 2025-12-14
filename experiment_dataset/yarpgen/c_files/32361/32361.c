/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(11842042693152115313, var_12))) <= -var_13));
    var_19 = (((((-var_2 ? (~var_8) : (!var_11)))) ? (((151 ^ -2654989960601804573) & ((18384035298123555527 ? 15 : var_6)))) : var_16));
    var_20 |= (min((((!((max(-15389, 16555151409964820927)))))), 14834092327311618229));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = ((+(min((arr_2 [i_0]), (arr_2 [7])))));
        var_22 |= ((4204137072273300997 ? 0 : -42));
        arr_3 [i_0] [i_0] = (~-1912385397);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 = (max(var_23, ((((~0) ? ((4 ? 0 : 22467)) : 2151178535)))));
            var_24 &= (((~32753) ? -1976076920 : (((-9223372036854775807 - 1) ? (arr_0 [i_0]) : (arr_5 [i_0] [i_0])))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_25 = ((~(max(((12760 ? -78 : 2654989960601804572)), 249))));
            var_26 -= ((~(max((!-2654989960601804587), (arr_11 [i_0] [i_2] [3])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_27 = (max(var_27, (37284633 < -1912385398)));
                        var_28 = -78;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_29 = ((!((((arr_19 [i_5]) | 120)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_30 = (max((arr_11 [12] [i_6] [19]), (((((0 % (arr_12 [i_5] [i_8] [i_7 + 3])))) ? (max((arr_28 [i_5] [i_8]), 5)) : -2061736096))));
                        var_31 = (max(var_31, (((-(max((min(5, 2654989960601804572)), -2654989960601804587)))))));
                    }
                }
            }
        }
    }
    var_32 = (min(2061736096, 892570780));
    #pragma endscop
}
