/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_1] = ((~(min((arr_1 [4]), ((var_14 ? (arr_1 [i_0 - 4]) : 86472862518945348))))));
                        var_17 = -140737488355327;
                        var_18 = 2097151;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_19 = (min(var_19, ((((((arr_3 [i_0 + 2]) ? (arr_4 [i_1 - 3] [i_1] [i_0 + 3]) : ((-1 ? 794569967 : (arr_1 [i_1]))))) & 62340)))));
                        var_20 &= 3177;
                    }
                    var_21 = (min(var_21, ((((((1323485571 ? (arr_9 [i_0 + 1] [i_1 - 1] [i_1 + 2] [i_1 - 3]) : (min(1114023704950319548, 3))))) ? ((3195 ? (arr_7 [i_0 - 2]) : (arr_7 [i_0 + 2]))) : 11677)))));
                    var_22 = (~62347);
                }
            }
        }
    }
    #pragma endscop
}
