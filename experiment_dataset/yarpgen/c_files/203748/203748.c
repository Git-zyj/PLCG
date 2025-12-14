/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((arr_4 [i_1]) && ((((arr_4 [i_0 + 2]) ? var_10 : (arr_3 [i_2])))))) ? (((-((30720 ? (arr_3 [i_0]) : 0))))) : ((var_13 ? 785394083 : (var_0 ^ var_10)))));
                    var_16 &= (((max((min(var_3, -4932180141717281915)), (var_4 < var_7))) < (arr_4 [i_0])));
                }
            }
        }
    }
    var_17 = (~((-var_14 ? var_14 : ((116651614105366019 ? 11589242150693245838 : 827283547604846002)))));
    var_18 = -9;
    #pragma endscop
}
