/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_10 = 1;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_11 = ((-((123 ? var_2 : 1))));
                        var_12 = (((((10 + ((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? -var_6 : (var_4 - 1)));
                        arr_9 [i_0] [i_0] [0] [i_0] = ((((max(255, 31))) + -var_8));
                        var_13 = (max(var_13, (arr_8 [i_0] [i_2] [i_2 - 4] [2] [i_3])));
                        var_14 ^= ((((!57915) ? (max(4201144041433316503, 1)) : (((min((arr_5 [i_0] [i_2] [i_2]), 57915)))))));
                    }
                }
            }
        }
        var_15 = (((((var_3 + ((max(103, var_8)))))) && ((((arr_3 [i_0] [i_0]) - (arr_2 [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_16 ^= var_9;
        arr_12 [i_4] [i_4] = (((((((((arr_1 [i_4]) - (arr_6 [i_4] [i_4])))) % (((arr_2 [i_4]) ? var_7 : var_1))))) || ((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) + (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
        arr_13 [i_4] = ((var_7 ? 0 : ((max(3188, 3264164293061613478)))));
    }
    var_17 = (((-4123157176634358805 && 0) * var_6));
    var_18 = var_3;
    #pragma endscop
}
