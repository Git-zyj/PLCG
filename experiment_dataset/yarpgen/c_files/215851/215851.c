/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_0 + 1] = (min((arr_1 [i_0 + 3]), (((max(var_6, 1)) - ((min(2919989119, 1)))))));
                    var_13 = ((var_7 != (max((arr_2 [i_1] [i_0 + 1]), (arr_1 [i_1])))));
                    arr_10 [i_2] [i_2] [i_1] = (((((arr_4 [i_1]) ? (max(var_11, var_6)) : (((var_4 ? 2919989136 : 2147483647))))) - (((11 ? 2919989136 : (arr_0 [8] [i_2 - 1]))))));
                    var_14 = ((~((((arr_7 [4] [i_1] [i_0 + 2]) < var_8)))));
                    var_15 -= ((var_8 ? var_9 : (((~79) ? (((arr_1 [i_1]) ? 79 : var_3)) : (var_6 || 255)))));
                }
            }
        }
    }
    var_16 &= var_3;
    var_17 = min((min((min(var_8, var_6)), var_10)), ((((((1 ? var_9 : 36582))) ? var_1 : 255))));
    var_18 = (min((max((var_3 * 1125223425), ((min(107, var_11))))), var_5));
    #pragma endscop
}
