/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((!254) ? var_8 : (min(var_9, -5328560679666921062))))) && var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min((arr_5 [i_0 + 1]), (((arr_6 [i_0] [i_0] [i_2] [i_0 + 1]) - ((254 ? 1693603963203800706 : 178))))));
                    arr_9 [i_0] [0] = (((((arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) ^ (((var_15 >= (arr_5 [i_1]))))))) ? ((((((arr_5 [i_0]) ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : 11))) ? (min(63348, var_10)) : ((~(arr_1 [i_0]))))) : ((((arr_2 [i_0 - 1] [i_0 - 1]) == (!0)))));
                    arr_10 [11] [0] [5] [5] = 254;
                    arr_11 [10] [10] [3] = (arr_0 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
