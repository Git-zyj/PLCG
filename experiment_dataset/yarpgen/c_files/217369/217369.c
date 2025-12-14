/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_10 = (((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = var_7;
                    var_12 = -2020775079;
                }
            }
        }
        arr_7 [i_0] = (((((arr_4 [i_0] [i_0]) <= (arr_6 [i_0] [i_0] [i_0] [i_0]))) ? var_2 : (((~(arr_4 [5] [i_0]))))));
        var_13 = ((arr_0 [i_0 - 3]) * (arr_0 [i_0 + 1]));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_10 [15] = (max(1237011928, (((arr_2 [i_3] [i_3]) ? (((arr_5 [i_3]) ? var_3 : 4028414701307408986)) : (max((arr_3 [i_3] [i_3] [i_3]), 125))))));
        arr_11 [i_3] = ((((((min(-1, 126)) & (arr_4 [i_3] [i_3])))) || ((((max(var_7, -126)) | (arr_0 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_14 = (min(var_14, ((min((min(0, var_7)), (1 < -113))))));
        var_15 = (((((((var_6 >> (((arr_12 [i_4] [i_4]) + 4690026000346169171))))) && (max(var_9, var_9))))) << ((((max(var_2, var_1)) > var_2))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_24 [i_5] [i_4] = (min((max(573485245, ((max(126, 24404))))), (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5])));
                        var_16 = var_7;
                    }
                }
            }
        }
        arr_25 [i_4] = var_0;
    }
    var_17 = (min((((max(var_0, 4)) | var_1)), var_2));
    var_18 = var_3;
    #pragma endscop
}
