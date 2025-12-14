/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (var_11 + -var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 = var_16;
        var_19 = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = 9667536132024537614;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = 1;
        arr_8 [i_1] = (var_10 || var_16);

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_11 [i_1] [i_2] [i_2] = 16600703043211661409;
            var_20 = (min(var_20, ((((!(((var_0 ? 4605 : 21849)))))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_1] [i_1] = 9143269895871859874;
                    var_21 = (min(var_21, (((((var_2 ? (4603 / 4605) : -3319814080514468911)) ^ 2147418112)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 *= ((-(min((-127 - 1), ((max(var_1, 0)))))));
                                arr_23 [i_5] [i_3] [i_4] [i_1] [i_5] = ((((((3835242741740622105 << (78 - 78))) != 258048))) & (17755 == var_8));
                                arr_24 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3] |= var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
