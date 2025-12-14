/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [1] [i_0] [i_1] [i_2] = (max((max(-var_13, (arr_2 [i_1 + 1] [i_1 + 1]))), ((max(22, 120)))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0 + 1] [i_0 - 1] [i_1] [i_1 - 1] [i_2] [i_0 + 1] = ((~(~136)));
                        var_17 = (((((~((7 ? 4 : 120))))) ? var_15 : ((-18446744073709551595 ? (((var_11 ? 125 : 41339))) : (arr_5 [i_1] [i_1 + 1] [3])))));
                        var_18 = (arr_7 [i_3] [i_2] [i_1] [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_1] [1] [i_1] [i_1 - 1] [i_1] [i_1 + 2] = (~5760897810167442953);
                        var_19 = (var_16 * (((min((!1554440749), (arr_6 [i_1 + 2]))))));
                        arr_17 [i_1] [i_1] [i_4] = (~var_5);

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_20 = (arr_7 [i_1 + 1] [i_1 + 1] [i_4] [i_5 - 1]);
                            var_21 = ((64 ? 225 : 206));
                            var_22 -= (arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_4] [i_5 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = (((max((max((arr_2 [i_4] [i_0]), 4409307744765315465)), var_2)) | (~16383)));
                            var_24 = var_16;
                            var_25 = ((((arr_0 [i_1 + 2]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))) | 92);
                        }
                    }
                    var_26 = (arr_23 [i_0 - 1]);
                }
            }
        }
    }
    var_27 = var_9;
    var_28 = var_13;
    #pragma endscop
}
