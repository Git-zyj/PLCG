/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = (-1 * 3684639811552277203);
                        arr_12 [i_2] [i_1] [i_2] [i_2] = (0 * -2265684794245236077);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_18 = (max(var_18, 1));
                        var_19 -= 126;
                        arr_15 [i_0] [1] [i_2] [i_0] = -143974450587500544;
                    }
                    var_20 = (0 <= 17);
                    var_21 &= 7234244355053047204;
                    var_22 = (10 == 7234244355053047204);
                    var_23 |= ((10 - -7234244355053047199) % 18446744073709551595);
                }
            }
        }
        arr_16 [7] = (~49);
    }
    var_24 = var_6;
    var_25 += ((min(((min(255, -7234244355053047199))), (1 / 6917529027641081856))) >= var_3);
    #pragma endscop
}
