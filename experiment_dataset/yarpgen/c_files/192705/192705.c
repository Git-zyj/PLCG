/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (!1);
        var_12 = (((12 && -21041) ? 2000828940 : -21041));
        var_13 = (min(var_13, (((-21041 % (-959657314 | 21041))))));
        arr_2 [i_0] = ((!(51 || 31)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((4227609541 ? -21042 : 8));
        var_14 = (max(((max((min(8191, 708739855)), (((3671413307232047734 ? 8963 : 244)))))), (max((144115188075855744 / 1), -8191))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_15 = (max(var_15, 1));
            arr_12 [i_2] [i_2] = (--1);
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_24 [i_5] [i_2] [17] = -0;
                            arr_25 [i_2] [i_2] [i_5 + 3] [i_2] [i_2] [i_2] [5] = (!1);
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_16 = (--30433);
                            var_17 = (!-7598);
                            arr_29 [i_2] = (!(((32640 ? 1 : 32640))));
                            var_18 = (((((7253239520275471431 ? 4096 : 163))) ? (!8191) : (!1)));
                        }
                        var_19 = (!1);
                    }
                }
            }
        }
    }
    var_20 = 8150812345687421396;
    var_21 = (min(var_21, 19));
    var_22 = ((-((min(1, 1629283663)))));
    #pragma endscop
}
