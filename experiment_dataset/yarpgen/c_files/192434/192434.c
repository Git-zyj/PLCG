/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = 2106176374;
                    var_18 = (min(var_18, ((max((((((min(23496, 23501))) || var_8))), (arr_7 [7] [i_2 + 1] [i_2 + 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((-23506 ? (arr_14 [i_1] [i_4]) : 32969));
                                arr_17 [19] [19] [i_2] [i_2] [i_2] [i_2] [i_0] = -23506;
                                var_19 *= ((~((33554431 ? ((-1807705406 ? 1 : 1544262925)) : 1579941048))));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, ((max(((((min(-1807705386, (arr_14 [i_0] [i_0])))) ? ((var_13 ? 2147483648 : -465549363)) : 23496)), (((-((388519764 ? -1579941041 : -1))))))))));

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] = min((((((40171 ? 5772 : 62871))) ? ((-101 ? 0 : 62871)) : ((59764 ? var_8 : 15)))), (min(((255 ? 82 : 1)), 388519749)));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        arr_24 [12] [i_6] [i_6] [12] [i_6 - 1] [4] |= -1807705405;
                        arr_25 [i_0] [i_0] [i_0] [19] [i_5] = (((((905546314 ? 0 : 4294967295))) ? ((4294967289 ? 93114249 : 1)) : (arr_22 [i_1])));
                    }
                }
                arr_26 [i_0] [i_0] [i_0] = var_0;
            }
        }
    }
    var_21 &= var_15;
    #pragma endscop
}
