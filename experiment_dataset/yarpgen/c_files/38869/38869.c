/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((min(19, var_15)))));
                            var_19 = (max(var_19, 153));
                            arr_10 [i_3] [4] [11] [i_1] [i_0] [i_0] = 32746;
                            var_20 = var_15;
                            var_21 ^= (min((!142), (((-46 ^ 19) == (1430181554061780810 != -2832815614372202750)))));
                        }
                    }
                }
                arr_11 [i_0] [12] = (max(3452387132499354506, 61850));
                var_22 = ((~(max(1729382256910270464, 4294967275))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_10, (!var_0)));
                            arr_21 [i_4] [i_4] [i_4] [i_7] [i_4] = ((3452387132499354510 > ((max(19, 31808)))));
                        }
                    }
                }
                var_24 = -862058975;
                var_25 = 145;
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_27 [i_4] [i_8] [5] [i_8 + 3] [5] [i_9 + 4] = min((max(-2026546703, var_11)), ((min(456017204, var_1))));
                            var_26 ^= var_9;
                            var_27 += ((-(!var_3)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
