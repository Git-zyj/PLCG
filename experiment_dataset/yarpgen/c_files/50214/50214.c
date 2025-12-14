/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (max((min(-121, 19)), (35784 != var_14)));
                            arr_9 [i_0] |= ((1999008562 || (((124 * (238 - 10))))));
                            arr_10 [i_2] = (min(1931, 10));
                            var_19 = (((max(9223372032559808512, var_16)) - var_1));
                        }
                    }
                }
                var_20 *= (min((max(var_12, 14108456837079244576)), ((max(-13110, 25990)))));
                var_21 = (min((max(3, 624959999)), var_6));
                arr_11 [i_0] [i_0] = 9223372041149743104;
                var_22 = (min(((var_9 - (((min(var_1, -25960)))))), (9223372032559808512 & 4294967295)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_23 &= (max((min(9223372041149743086, (-32767 - 1))), var_11));
                    var_24 -= (min(-32744, (36028796750528512 / 9223372036854775797)));
                }
            }
        }
    }
    var_25 &= 1999008544;
    #pragma endscop
}
