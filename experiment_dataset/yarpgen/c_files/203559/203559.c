/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 6884405411269954306));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 2] [i_2 + 1] = ((-(min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
                    var_17 = (i_0 % 2 == zero) ? ((max((((arr_1 [i_2 - 1] [i_1 - 2]) << (((3021306962 ^ 1273660329) - 4294967291)))), (((((((((arr_4 [i_0] [i_0]) + 2147483647)) >> (var_1 - 1967149127220310275)))) || ((max(11092041878565954146, (arr_3 [i_1] [i_0])))))))))) : ((max((((arr_1 [i_2 - 1] [i_1 - 2]) << (((3021306962 ^ 1273660329) - 4294967291)))), (((((((((((arr_4 [i_0] [i_0]) - 2147483647)) + 2147483647)) >> (var_1 - 1967149127220310275)))) || ((max(11092041878565954146, (arr_3 [i_1] [i_0]))))))))));
                    arr_10 [i_0] [i_0] [i_2] = var_5;
                }
            }
        }
        arr_11 [i_0] = ((var_14 ? ((((var_4 ? (arr_3 [i_0] [i_0]) : var_1)) - var_3)) : ((((var_0 ? 1146569540 : (arr_4 [16] [i_0])))))));
        var_18 = ((~((1745179494109864587 + (((var_14 ? 1073740800 : var_14)))))));
    }
    var_19 = var_6;
    #pragma endscop
}
