/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = 0;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [7] = (!408384788);
                        var_12 = var_6;
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((((min((arr_9 [3] [i_1] [i_0] [3]), var_1))) ? 0 : ((min((arr_4 [i_0] [i_1]), (-17885 != 2))))));
                        arr_12 [i_3] [i_0] [i_1] [i_0] [i_0] = arr_4 [i_0] [i_2];
                        var_13 = -1165252278;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_4] = ((((((4 ? 10272543071987431438 : (arr_14 [i_0]))))) ? var_3 : 14305896122050191347));
                        arr_17 [i_0] [i_2] [i_0] [i_0] &= 9223372036854775807;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_14 = (((arr_2 [i_2]) ? ((((!var_5) <= 4))) : (arr_3 [i_1] [i_0])));
                        arr_22 [i_0] [3] = 3;
                        var_15 -= 4;
                        var_16 *= 26732;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] = (arr_0 [i_0] [16]);
                            arr_28 [i_0] [i_6] = ((((min(-110, (arr_5 [i_0] [i_2])))) / (min(6466, 4268126671162094031))));
                            arr_29 [i_0] [i_1] = var_0;
                            var_17 = -4633003440820226863;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_18 = (((((~(arr_19 [i_0] [2] [i_2] [i_0] [i_7] [i_0])))) || ((((arr_14 [i_5]) ? 125 : ((9501858914420835903 ? (arr_1 [i_5] [i_7]) : 57413)))))));
                            var_19 = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
