/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = -3889741030803006193;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                            {
                                var_18 = (-9223372036854775796 && 171);
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 0;
                                arr_12 [i_0] [i_0] [i_0] = 84;
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                var_19 = (~(((((-32767 - 1) ? 94 : 11862047910930224879)) | (((148 >> (84 - 65)))))));
                                arr_16 [i_0] [i_0] = 171;
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((3170468057822576100 | 134), (!1770064525)));
                                var_20 = (min(var_20, -1));
                            }
                            arr_18 [i_0] = (85 && 6584696162779326742);
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] &= (((((~((10358 ? 179 : -9152))))) ? ((1 ? 171 : 80)) : ((((1802 ? 1807 : 3338685976))))));
                            var_21 = 17684576252404596242;
                        }
                    }
                }
                arr_20 [i_0] [i_0] = ((80 ? ((104 & ((246 ? 123 : 3173)))) : 15));
                var_22 = (((((63734 ? 9102775881215563977 : 1803))) ? 11839 : 1));
            }
        }
    }
    var_23 = (((((0 ? -1437327556 : 15)) / var_1)));
    var_24 = ((1 ? var_12 : var_12));
    #pragma endscop
}
