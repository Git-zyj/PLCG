/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((((max(17, var_11)) / (~var_2))))));
    var_14 = ((((var_9 && (((var_6 ? var_5 : var_12))))) || var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_2] = var_6;
                    arr_9 [i_0] [i_2] [i_0] = (min((((arr_0 [i_0] [i_0]) ? (((var_4 / (arr_7 [i_2])))) : 10)), ((((arr_2 [i_2] [i_2 + 1] [i_1 - 1]) ^ (arr_6 [i_2] [9] [i_2 - 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_1 - 1] [i_2] [i_2] = (arr_2 [i_2] [i_2 + 2] [i_2 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
