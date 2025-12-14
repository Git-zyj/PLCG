/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 792641137;
    var_15 = var_2;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_16 = ((-((9 - (arr_0 [i_0 - 4])))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_17 = (arr_7 [i_1] [i_2] [i_3]);
                        var_18 &= ((((1 ? -10254 : (arr_0 [i_0 + 1]))) - var_12));
                        arr_9 [i_3] [i_3] [i_1] [i_1] [i_0] = ((((((arr_4 [i_2 + 1] [i_1 - 2] [i_2]) << (-545824669 + 545824671)))) ? 1808190738542386595 : (arr_4 [i_1 + 1] [i_1 + 1] [1])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_18 [i_6] = -6449448906332891294;
                        arr_19 [i_0] [i_4] [2] [i_6] [16] |= (((((~(((arr_12 [i_5 + 1] [i_5] [i_5]) ? 14724411768845961939 : var_7))))) ? var_0 : ((((8589410304 ? (arr_7 [13] [13] [i_6]) : -8589410313))))));
                        arr_20 [i_6] [i_4] [i_5] [i_6] = ((!((min((arr_14 [i_0 - 4] [i_0 - 2] [i_4 + 1] [i_5 - 2]), var_7)))));
                    }
                }
            }
        }
    }
    var_19 = -4658030102978881331;
    #pragma endscop
}
