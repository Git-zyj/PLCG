/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_13 = (~var_3);
                    var_14 = ((((arr_5 [i_0] [i_1] [i_0] [6]) >= (arr_5 [i_0] [i_1] [i_0] [3]))) ? (((arr_2 [i_1]) / var_4)) : (119 % 26685));
                    var_15 = -26686;
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_16 = (((((var_4 ? (min(2147483647, 1)) : ((max(-10705, var_7)))))) ? ((((((arr_3 [i_3] [i_1] [i_0]) ? 26686 : var_6))) ? (min(var_5, var_6)) : (((max((arr_1 [i_3] [i_0]), var_1)))))) : (arr_5 [i_0] [i_0] [i_0] [i_3 - 1])));
                    arr_8 [i_0] [i_0] = (max((((((var_8 ? (arr_7 [6] [i_1] [i_3 + 1] [i_3 + 1]) : (arr_6 [i_0] [1] [i_0] [i_3])))) ? (!-25438) : var_7)), (((min(-26686, 26685))))));
                    arr_9 [i_0] [8] = ((arr_4 [i_3 + 3] [i_3 + 3]) ? var_1 : (min(((239 ? 8 : 136)), var_11)));
                    arr_10 [0] [i_1] [i_0] = (~var_7);
                }
                var_17 = (max(var_17, (((((((var_0 == ((min(var_5, var_7))))))) != -var_4)))));
            }
        }
    }
    #pragma endscop
}
