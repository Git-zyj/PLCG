/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = (max(var_18, ((((((~((max(0, 0)))))) & (min((~4294967295), var_2)))))));
    var_19 &= var_11;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0 - 1] [i_0 - 1];
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [i_0 - 1])))) ? (((arr_1 [i_0 + 1] [i_0 - 1]) - 255)) : 0));
        arr_5 [i_0] [i_0] = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_0] = (((max(var_11, (arr_7 [i_0 + 2] [2])))));
                    var_20 = (min((arr_8 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2]), (min((arr_10 [i_0 + 2] [i_0 + 1] [i_0 - 1]), (arr_8 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2])))));
                    var_21 = (arr_2 [i_0]);
                    arr_13 [i_0] [i_0] = 17861384745406610102;

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_22 += var_12;
                        var_23 = (min(var_23, ((max(((max((arr_14 [i_0 - 1]), (arr_14 [i_0 + 2])))), (((arr_14 [i_0 + 2]) ? -29863 : (arr_14 [i_0 + 2]))))))));
                        var_24 = ((((((arr_14 [i_1]) << (arr_2 [i_0])))) ? ((max(65535, 29863))) : 4294967295));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_20 [i_4] = 0;
        var_25 = (max(((~(arr_17 [i_4]))), (arr_17 [i_4])));
    }
    for (int i_5 = 4; i_5 < 22;i_5 += 1)
    {
        var_26 += (((max(-1, ((-1918316294 ? 255 : 2863629352)))) >> (((max(((~(arr_21 [i_5] [i_5]))), (!0))) - 2177285326))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_35 [i_5] [i_5] [i_7 + 1] [i_8] = (!var_14);

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_27 = 1191959005;
                            var_28 -= (arr_23 [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
