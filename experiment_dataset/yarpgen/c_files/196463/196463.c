/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 += (max(((~(arr_0 [1] [i_2 - 1]))), ((-(arr_0 [i_2] [i_2 - 1])))));
                    var_21 = (max(var_21, (((((min((arr_7 [i_0] [i_0] [i_0]), (((-32751 ? var_10 : var_9)))))) != ((18446744073709551615 + (arr_3 [i_2 - 1] [i_2 - 1]))))))));
                    arr_8 [i_0] = (((((((min(5, 1293849592108115115))) ? (arr_3 [i_1] [i_2]) : 6535582407960880587))) ? (((arr_6 [i_0] [i_0]) ? 11911161665748671028 : (min(216172782113783808, var_0)))) : ((((min(var_13, var_9)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2 - 1] = (((max((arr_7 [i_2 - 1] [i_2 - 1] [i_2]), 23671)) | (((arr_7 [i_2 - 1] [i_2 - 1] [13]) ? 0 : (arr_7 [i_2 - 1] [i_2 - 1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
