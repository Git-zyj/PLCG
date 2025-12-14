/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((max(18403, 47132))), (((((1 ? 47119 : 18428))) ? 47119 : ((max(47150, 1)))))));
        var_15 = (max(1760871102, 18397));
    }
    var_16 = ((var_11 && (((var_3 ? ((3422592270 ? var_10 : -1)) : (max(1, var_4)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                arr_9 [i_1] [0] = (((arr_8 [i_1] [i_1] [i_2]) ? (((!(-32767 - 1)))) : var_3));
                var_17 = ((~((((((arr_4 [i_1] [i_2]) ? var_13 : var_12))) ? (min(1, var_10)) : (((arr_5 [i_1] [i_2]) >> (2032 - 2022)))))));
            }
        }
    }
    #pragma endscop
}
