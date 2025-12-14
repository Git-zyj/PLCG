/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [1] [13] [i_0] [i_0] [1] = (arr_1 [1]);
                        var_18 = ((var_6 ? (min(176, ((var_12 << (var_7 - 191568146))))) : (((18446744073709551590 ? 10159 : 246)))));
                        var_19 = (((((var_12 ? var_11 : (!var_2)))) / ((~((var_10 ? var_13 : -31289))))));
                        var_20 = var_9;
                    }
                }
            }
        }
        var_21 = (((((-((min(188, 0)))))) ? ((22577 ? 24 : ((min(118, -122))))) : (((~-1508372302009245357) ? -2147483636 : -231))));
        var_22 = ((~(min((min(var_6, (arr_7 [i_0] [1] [i_0] [14]))), (((22577 ? (arr_0 [1]) : (arr_6 [1] [i_0] [i_0]))))))));
    }
    #pragma endscop
}
