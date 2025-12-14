/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_5) % (-2147483647 - 1)));
    var_13 = (((((var_9 ? (!var_9) : var_0))) && (((var_8 || var_5) || (var_10 || var_7)))));
    var_14 = (var_6 & 788233486308453596);
    var_15 = ((((max(-1, var_6))) ? (((var_3 ? 0 : -14))) : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [6] [i_1] [i_1] [8] = (max((((arr_4 [i_1] [i_2]) % (arr_2 [i_2 - 3]))), (((((((arr_2 [i_0]) ? 1 : (arr_1 [i_1] [i_2])))) ? ((((arr_5 [1] [i_1] [i_2 + 1]) < -499892639))) : ((232 ? 68 : (arr_6 [i_0] [7] [i_0]))))))));
                    arr_8 [i_2] [i_2] [i_2] [0] = ((~(((((var_8 && (arr_5 [i_0] [i_1] [1]))) && 19292)))));
                }
            }
        }
    }
    #pragma endscop
}
