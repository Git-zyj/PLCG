/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= min((6572678286423648629 - -16), (var_2 < -var_17));
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((-var_12 ? ((var_0 ? var_5 : var_6)) : (arr_0 [i_0])))) ? (((6572678286423648629 + 3403814536038835524) - -215501053)) : (arr_0 [i_0]));
                arr_5 [i_0] [i_1] = (arr_1 [i_1]);
            }
        }
    }
    #pragma endscop
}
