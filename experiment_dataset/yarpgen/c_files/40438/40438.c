/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_0] = (min((arr_2 [4]), 1));
                    arr_9 [i_0] [i_2] = (min(4231451284, ((((min(7615, (arr_4 [i_2] [i_1])))) ? (min(0, -9223372036854775805)) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                    var_10 = ((!((((arr_5 [i_2]) ? ((((arr_7 [i_2] [i_2] [i_2] [i_0]) ? var_1 : (arr_4 [i_2] [i_1])))) : (((arr_0 [i_0] [i_1]) + var_8)))))));
                }
            }
        }
    }
    var_11 = var_2;
    var_12 = ((-(min((((var_1 ? var_6 : var_4))), var_7))));
    #pragma endscop
}
