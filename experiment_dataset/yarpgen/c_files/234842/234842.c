/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 1] [i_0] [i_0] = (((arr_4 [i_0] [i_0]) ? ((var_11 ? (var_5 + var_5) : ((9223372036854775807 / (arr_9 [13] [i_1] [i_2] [13]))))) : (((arr_1 [i_0]) ? -2085028682878467232 : (arr_9 [i_0] [i_0 - 2] [i_2] [i_2 + 1])))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((var_3 + ((70368744144896 + (arr_3 [i_2 + 1] [i_2 + 1])))));
                        arr_13 [i_1] [i_0] = (((((((max(61265, var_4)))) / (var_3 + 54055))) < var_10));
                    }
                }
            }
        }
        var_13 = (arr_6 [i_0] [i_0 + 1] [i_0 - 2]);
        var_14 = (((((((min(54055, var_10))) + (1490766689 - var_8)))) ? ((((var_2 < (arr_10 [i_0]))) ? (max(805306368, var_8)) : (((-12 ? (arr_9 [i_0] [i_0 + 1] [9] [9]) : (arr_2 [i_0])))))) : ((((var_3 / var_2) ? (!13835058055282163712) : ((~(arr_5 [i_0] [i_0]))))))));
        var_15 = (((min((min(310046035582678146, (arr_9 [i_0] [i_0 - 1] [i_0] [i_0]))), (var_3 ^ var_5))) + 98));
    }
    var_16 = (min(var_16, ((((((max(-977589062816966704, var_8)) ? (~2085028682878467232) : 54055)))))));
    var_17 ^= (var_2 / var_5);
    #pragma endscop
}
