/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((min(var_5, var_11))) && (var_3 < var_8))) ? ((((var_12 ? var_11 : var_11)) + (50 && -1096765824140284640))) : (max(((15 ? 1638086081 : 1)), var_1))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(var_11, var_12));
        arr_4 [i_0] = var_11;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_14 = (((((((4294967287 ? 28468 : 2857880089)) | -var_4))) ? (((((var_8 ? var_2 : var_11))) ? var_12 : ((65532 ? 20816 : 3243295574)))) : var_3));
                arr_10 [i_2] = (min((min((max((arr_7 [i_2]), 1022104832)), ((((-9223372036854775807 - 1) > var_4))))), 1668));
                arr_11 [i_1] [12] [i_2] = var_10;
                var_15 = ((28672 ? -1016340108086176391 : 24944));
                var_16 = (((((((max(var_4, 57179))) ? var_9 : ((var_3 ? (arr_2 [i_1]) : var_8))))) ? ((var_8 ? (var_2 ^ var_9) : (-626744606576885636 & 1254388702))) : ((((var_3 + 2147483647) >> (9191 - 9188))))));
            }
        }
    }
    #pragma endscop
}
