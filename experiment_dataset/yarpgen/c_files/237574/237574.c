/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((0 ? 2 : -422255351)), (var_4 < 422255350)))) ? (max(var_18, (var_16 + var_18))) : 65533));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_21 = (min(var_21, (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    var_22 = (max(((-(arr_1 [i_0] [12]))), var_15));
                    var_23 = (((arr_7 [i_0] [i_1] [i_2 + 1]) * 7));
                    var_24 = var_2;
                    arr_9 [i_2 - 1] [22] [i_0] [i_0] = ((~(max((~37848), (arr_8 [4] [4])))));
                }
                var_25 = (~var_2);
                var_26 = (+(min((arr_7 [i_1] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_1]))));
                var_27 = (min(var_27, 246));
            }
        }
    }
    #pragma endscop
}
