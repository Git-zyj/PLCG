/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_20 |= ((((44005 ? 2147483647 : 729)) + ((max((-2147483647 - 1), 1)))));
                    arr_7 [i_2] [i_1] [i_2 - 1] [i_2] = ((~(~-1)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((max(-9223372036854775802, 729)))));
                                var_22 = ((max((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]), (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_23 *= 32767;
                                var_24 = (-((66 ? var_1 : (3504799901154258936 < 173))));
                                var_25 |= ((((((arr_1 [i_6]) ? var_13 : (arr_1 [i_0])))) ? ((~(arr_16 [i_1] [i_6] [i_0] [i_0] [i_5] [i_1] [i_1]))) : (!86)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            {
                                arr_23 [i_0] [6] [i_0] [i_0] [i_0] = var_12;
                                var_26 = (9222809086901354496 > -141892816);
                            }
                        }
                    }
                }
                arr_24 [i_0] [i_0] [i_0] = arr_6 [i_1];
                arr_25 [i_1] [3] [i_0] = arr_20 [i_0] [i_0] [1] [4] [i_1] [i_0];
                var_27 = (((-1 / 8190) / ((50 ? 115 : -9))));
            }
        }
    }
    var_28 = 3294385041;
    #pragma endscop
}
