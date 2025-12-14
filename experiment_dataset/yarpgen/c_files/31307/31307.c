/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = var_10;

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = ((((-(arr_5 [i_2 - 1] [i_2 - 1] [i_2])))) != ((4294967293 ? 1087631400 : 2948318286)));
                    var_15 |= (arr_5 [i_0] [i_0] [1]);
                    arr_8 [i_0] = (((((((min(2948318267, var_9))) ? 65535 : 0))) ? (arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]) : 1));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_16 = (min(var_16, (!238)));
                    arr_11 [i_0] [i_0] [i_0] = (~1346649006);
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_14 [i_4] [i_4] [1] [i_0] = (arr_6 [i_0] [i_0]);
                    var_17 = ((1346648992 ? -671953653 : (min((((28672 < (arr_5 [i_0] [i_1] [i_4])))), var_8))));
                }
                arr_15 [i_0] [i_0] [i_0] = (-2948318279 << var_4);

                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    arr_18 [i_1] [i_1] [i_1] [i_0] &= var_4;
                    arr_19 [8] [i_5] [18] = ((~(~1)));
                }
            }
        }
    }
    var_18 = ((~(var_8 || var_5)));
    #pragma endscop
}
