/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (((min(var_8, (arr_4 [i_0 + 3] [i_0 + 1]))) < (((~((max(4, 249))))))));
                var_11 = (min(var_11, 124));
                var_12 = (min(var_12, ((((((((min((arr_4 [i_1] [i_0]), 3730694239)) >= (((65535 ? 8115 : 39))))))) & ((((min(4, 8))) ? ((var_7 ? 124 : var_5)) : ((max(898995420, -27477))))))))));
            }
        }
    }
    var_13 = ((var_6 ? -35175 : (-1016 >= -8644956954964079470)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            {
                arr_9 [i_3] = ((((((arr_7 [i_2 - 2] [i_2 + 1]) ? (~53813) : var_6))) ? ((~((1664778440339633330 ? (arr_8 [i_3] [i_3]) : var_1)))) : 10932));
                var_14 = (min(((min((arr_8 [i_2 - 2] [i_3]), (arr_5 [i_3 - 1] [i_2 - 1])))), (((arr_8 [i_2 - 1] [i_3]) ? (arr_8 [i_2 + 1] [i_3]) : (arr_5 [i_3 - 2] [i_2 - 1])))));
                arr_10 [i_3] [15] [i_3] = (arr_8 [i_3] [i_3]);
            }
        }
    }
    var_15 = ((((min(var_7, var_5))) ? ((min(var_4, (!var_6)))) : (-17217496807827314354 > -95)));
    #pragma endscop
}
