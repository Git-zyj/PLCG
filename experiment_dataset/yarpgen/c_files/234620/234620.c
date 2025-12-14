/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(var_12, 1))) ? var_5 : (var_3 + var_9)))) ? var_0 : -var_12));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((((max(1, ((max((-32767 - 1), -32767)))))) ? ((((((((arr_3 [i_0] [i_1] [i_2]) ? var_2 : (arr_3 [i_0] [i_1] [i_1])))) == (arr_2 [14] [i_2 + 1] [i_2]))))) : ((~(var_6 + 114)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_18 = (((arr_4 [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : ((-27204 ? 454143474564211399 : (arr_8 [i_3] [i_0 + 1] [6] [i_2 - 2] [i_1 - 1])))));
                        var_19 = (max(var_19, (((((((4294967295 ? (arr_2 [i_0] [i_1] [i_2]) : (arr_8 [i_0] [i_0] [i_1] [i_2] [i_0]))))) ? (((arr_5 [i_1] [i_2] [i_3]) | (((var_9 < (arr_6 [i_1] [i_3] [i_3])))))) : var_15)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
