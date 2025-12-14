/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_3;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = 18;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = ((423088581 || ((max(((1758087185 ? -7643156428374927271 : -16857)), 2536880099)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_14 = ((~(((arr_5 [i_3] [i_2] [i_0]) ? (min(var_2, var_1)) : ((max(2536880079, 2536880087)))))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [3] = 3871878715;
                        }
                    }
                }
            }
            var_15 = ((max(var_9, 1103742764)));
            arr_15 [i_1] [2] [i_0] = 17022205690391455619;
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            arr_20 [i_0] [i_5] = (--255);
            var_16 = ((-(max(var_7, var_3))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_24 [4] = ((+(max((~1758087178), (max(var_6, var_9))))));
            arr_25 [i_0] [i_6] = (((max((arr_4 [i_0] [i_6]), var_8)) >= 1758087201));
            arr_26 [i_0] = var_7;
        }
        arr_27 [i_0] = max((((16863 >> (var_1 - 18416665159717114752)))), (((arr_1 [i_0]) ? (arr_2 [i_0]) : 1)));
    }
    #pragma endscop
}
