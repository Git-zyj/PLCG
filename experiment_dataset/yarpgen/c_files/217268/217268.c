/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 -= -48582;
                arr_7 [i_1] [i_0] [i_1] = (min((arr_3 [i_0]), 4294967295));
                arr_8 [i_1] = ((~(((((4294967295 ? 4294967295 : 4294967287))) ? (arr_4 [i_0 + 1] [i_0] [3]) : (((80536840 ? (arr_5 [i_0] [i_0]) : 14)))))));
                var_12 -= ((((max(var_10, 4294967287))) ? (((-7201856984480008083 == 0) ? (arr_1 [i_0 + 2]) : 195)) : ((-((0 ? 4294967295 : 4294967295))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = (min((((4294967286 ? 255 : 243))), 4294967278));
                arr_14 [i_2] [i_2] = (((((((max(65535, 238))) & 152))) ? ((-(min(48957, (arr_4 [i_2 + 2] [i_2] [i_2]))))) : (((((474039097131471557 ? var_10 : (arr_4 [i_2 - 1] [i_2] [i_3])))) ? (min((arr_6 [i_2 - 1]), 1048576)) : ((var_6 ? -474039097131471566 : 58338))))));
            }
        }
    }
    var_13 = var_6;
    var_14 = (-((var_0 ? ((1660081264 ? var_1 : 24)) : ((var_10 ? 3933098068 : 255)))));
    var_15 = (-1660081251 && var_6);
    #pragma endscop
}
