/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((var_8 ? var_8 : ((max((arr_0 [i_1]), (arr_1 [i_0] [i_1]))))))) ? (arr_0 [i_1]) : (max(((4294967295 ? var_9 : (arr_2 [i_0] [i_1 - 2] [0]))), (((var_6 ? var_2 : 114)))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, ((((((((((arr_3 [i_2]) ? 0 : 6447056664150717713))) ? (((min(190, (arr_2 [i_0] [i_1] [i_2]))))) : var_1))) ? ((((((((arr_9 [10] [8] [i_1] [10]) ? (arr_3 [i_0]) : 134))) && (((6447056664150717713 ? -6447056664150717714 : var_10))))))) : (((min(var_9, 2265463156)) & (((164 ? 27868 : (arr_7 [i_3] [i_1 + 1] [i_2] [2])))))))))));
                            var_12 ^= (max((max(255, 2029504139)), ((((!255) << (156 - 125))))));
                        }
                    }
                }
                var_13 = (~-6242);
                var_14 = (arr_7 [i_0] [i_1] [i_1 + 1] [i_1 + 2]);
            }
        }
    }
    var_15 = (((((((15123 ? var_9 : 3990490825)) || var_0)))));
    var_16 = (max(var_16, (((var_7 ? var_10 : var_7)))));
    var_17 = ((((var_3 ? (max(var_4, 6949023578916012047)) : (((var_8 ? 156 : var_4))))) - (((var_3 ? var_10 : var_6)))));
    #pragma endscop
}
