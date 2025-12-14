/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_8) ? ((max(((var_6 ? var_2 : var_1)), var_4))) : (max(((var_6 ? -1465065435850931081 : var_4)), -var_6))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_11 &= (!4294967287);
                        arr_13 [3] [3] = ((((!((min(11, 1073741824))))) ? ((var_3 ? ((var_4 ? var_8 : (arr_3 [i_0]))) : ((min(var_4, (arr_11 [i_0] [i_0 - 2])))))) : (((29285083 ? 29285083 : 3221225471)))));
                        var_12 = ((35184367894528 ? 5485613240133355826 : 3221225455));
                    }
                }
            }
        }
        arr_14 [11] [i_0] = ((((4265682230 / (arr_10 [i_0 - 2] [i_0])))) ? (max((29285083 & 1073741829), (52 < 941202453))) : (((((var_8 ? -2096022458791752755 : 24))) ? ((54567 ? (-127 - 1) : 3221225472)) : ((var_9 ? (arr_10 [i_0] [9]) : var_2)))));
    }
    #pragma endscop
}
