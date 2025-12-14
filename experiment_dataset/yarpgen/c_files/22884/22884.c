/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] = ((177 ? var_3 : var_5));
                    arr_8 [i_0] [i_0] [i_0] = (arr_5 [i_2] [i_0] [i_0] [i_0]);
                    arr_9 [i_2] [i_0] [i_0] [i_0] = (((arr_4 [i_0] [i_1] [i_2] [i_0]) % (arr_5 [i_0] [i_0] [i_2] [i_2])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_3] [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                    arr_15 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? ((((((var_12 + 9223372036854775807) >> (((arr_3 [i_0] [i_1] [i_1]) - 44620))))) ? 4294967295 : ((((((var_7 ? var_2 : (arr_12 [i_0] [i_0] [i_0])))) ? (arr_1 [i_0]) : ((((arr_5 [i_3] [i_0] [i_0] [i_0]) > (arr_6 [i_0] [i_1] [i_3]))))))))) : ((((((var_12 + 9223372036854775807) >> (((((arr_3 [i_0] [i_1] [i_1]) - 44620)) + 5675))))) ? 4294967295 : ((((((var_7 ? var_2 : (arr_12 [i_0] [i_0] [i_0])))) ? (arr_1 [i_0]) : ((((arr_5 [i_3] [i_0] [i_0] [i_0]) > (arr_6 [i_0] [i_1] [i_3])))))))));
                }
                arr_16 [i_0] [i_0] = ((1 ? 4294967295 : -8330278271524620042));
            }
        }
    }
    var_14 = var_9;
    var_15 = (min(var_2, var_11));
    #pragma endscop
}
