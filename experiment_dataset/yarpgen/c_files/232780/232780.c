/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (3345041968 % 36033);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = (((!1) ? ((max(((max(1, var_0))), (max(121492417, 52670))))) : ((((((arr_9 [i_0] [i_1] [7] [i_2] [i_2] [i_3 - 1]) ? var_1 : var_2))) ? (~18446744073709551614) : (((var_1 ? 35342 : (arr_8 [i_3]))))))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3 - 2] = ((!(arr_8 [i_3])));
                        var_14 = (max(((~(arr_5 [i_2 - 2] [i_2] [i_2 - 2]))), (((arr_3 [i_2 - 2] [i_2] [i_2 - 2]) ? (arr_5 [i_2 + 2] [i_2] [i_2 + 2]) : (arr_7 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1])))));
                    }
                }
            }
        }
        var_15 = (max(((~(!188311392))), ((~(!53672)))));
    }
    var_16 = var_0;
    var_17 = (min(var_7, ((var_4 ? 2311078904638014484 : var_3))));
    #pragma endscop
}
