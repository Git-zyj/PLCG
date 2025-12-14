/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((((!(arr_3 [i_1] [i_0] [i_0])))), (((arr_3 [i_0 - 2] [i_1] [i_0 - 2]) ? 4864041775982204112 : (arr_3 [i_0 + 3] [i_1] [i_1])))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_19 = (max(var_19, ((((((((((var_4 ? 1546845951 : var_6))) <= (((arr_0 [i_0]) - 127)))))) & var_12)))));
                    var_20 *= ((~(arr_6 [i_2] [i_2 + 2] [i_0 - 1] [i_0 + 4])));
                    var_21 = ((((max(59, 9546))) - var_2));
                }
                arr_7 [i_0] [i_1] = ((((((min(-103, 66))) + 2147483647)) >> (((((arr_1 [i_0] [i_1]) ? ((((arr_6 [i_0] [i_0] [i_1] [i_1]) ? -78 : 118))) : (min((arr_3 [1] [i_0] [i_0]), 566184013)))) - 4294967193))));
                var_22 ^= (11169 - -2349802351927999230);
            }
        }
    }
    var_23 = var_6;
    var_24 = 1120182674;
    var_25 = (((((-((var_8 << (2401363927 - 2401363917)))))) ? (max(var_15, (~-3442871119519922610))) : var_0));
    #pragma endscop
}
