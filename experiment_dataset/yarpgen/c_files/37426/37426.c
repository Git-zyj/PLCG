/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((-18 ? var_7 : ((min(var_8, var_4)))));
    var_18 &= (max(((var_6 ? (var_0 | 26368) : (min(var_3, var_10)))), (min((((3725 > (-2147483647 - 1)))), 4610560118520545280))));
    var_19 = (((((((max(var_5, var_2))) ? 4081453033 : ((var_3 ? 340982282 : var_11))))) ? (max(var_11, var_15)) : var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] |= (min((((1 == (((arr_0 [i_0]) - -24))))), (arr_8 [18] [i_1 + 1] [i_0] [i_0])));
                    var_20 = (min(var_20, ((((((1 + (min(17113853242923525503, (arr_8 [i_0] [i_1] [i_1 - 1] [i_2])))))) ? (((((29 != 65521) || (arr_5 [i_0] [i_2]))))) : (min(((64 ? (arr_8 [i_0] [i_0] [i_1 - 1] [i_2 + 1]) : 6709409624783262034)), ((min((arr_1 [i_2]), (-2147483647 - 1)))))))))));
                    arr_11 [i_0] [i_0] [i_2] |= (((arr_3 [i_0]) ? ((((arr_9 [i_0] [i_0] [i_0]) ? (((max(-24, 1)))) : (arr_9 [i_0] [i_0] [i_0])))) : (max((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_2 - 3]) : (arr_6 [i_0] [i_1]))), (1 && -298672288)))));
                }
            }
        }
    }
    #pragma endscop
}
