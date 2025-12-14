/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (4144043811046203551 != 4144043811046203545);
    var_12 = (((min((max(4144043811046203551, 1)), (~12063798327876334749))) & 14302700262663348072));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3] = (arr_4 [i_3] [i_3]);
                        arr_13 [i_0] [i_3] [i_0] [i_3] [i_3] [i_3] = (0 * -24598);
                        arr_14 [i_3] = (((arr_7 [i_0]) << (((arr_8 [i_1] [i_3]) + 642170656))));
                        var_13 = (((((1 ? (arr_5 [i_3] [i_3]) : var_4))) ? (((arr_10 [i_0] [i_0] [i_0] [i_0]) & (arr_2 [i_0] [i_0] [i_0]))) : var_0));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_3] = (((arr_5 [i_0] [i_4]) ? (((8575748716703247015 ? 3749987555 : 19054))) : ((var_5 ? var_1 : var_10))));
                            arr_18 [i_0] [i_3] = (((arr_11 [i_0] [i_3] [i_0]) | (arr_11 [i_3] [i_3] [i_0])));
                            arr_19 [i_3] [i_3] [i_3] = (var_6 % (arr_7 [i_1]));
                            var_14 = 4294967295;
                            var_15 = (max(var_15, (((28798925 ? var_10 : (((arr_7 [i_2]) / -8575748716703247015)))))));
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = (((arr_6 [i_0] [i_0]) | (arr_6 [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_16 = ((~(!0)));
        var_17 = ((-(((((-(arr_23 [i_5])))) ? 2954339501010163933 : (((var_1 ? -2125730152 : (arr_22 [i_5]))))))));
    }
    #pragma endscop
}
