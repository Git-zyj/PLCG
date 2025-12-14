/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 || ((max((min(var_7, var_4)), 3072)))));
    var_13 = (((-86 ? (59 + var_2) : (-32767 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [0] [0] &= ((67108736 ? (min((((arr_4 [i_0 - 1] [i_1] [i_1]) + var_9)), var_3)) : -var_9));

                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    arr_11 [4] = 32751;
                    arr_12 [i_0] [i_1] [i_2 + 1] [i_2 + 1] = (-9223372036854775807 - 1);
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_15 [8] [8] [i_0] = ((((min((var_6 + 44234), var_0))) ? 132 : (max((arr_9 [0] [i_0 - 2] [0]), 9223372036854775807))));
                    arr_16 [i_0] = (min((var_4 > -9223372036854775807), (4194304 > 48530)));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] = ((((min(((min(1, 1))), 67108732))) != (min((0 | var_8), (-32767 - 1)))));
                    arr_21 [i_0] [i_0 - 1] [10] = ((max(((max(61311, 1))), (var_5 / 17592186044408))));
                }
            }
        }
    }
    var_14 = (~var_8);
    var_15 = (min((~var_0), (((min(-1347745617909605216, var_9)) / var_10))));
    #pragma endscop
}
