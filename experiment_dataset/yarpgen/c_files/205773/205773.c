/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 ^= ((((max((arr_3 [i_0] [i_2]), ((((arr_7 [i_0] [i_0] [i_2] [i_0]) == (arr_5 [i_2] [i_1]))))))) && 8257));
                    var_18 = (((((arr_3 [i_2] [i_1]) + 2147483647)) >> (((max(127, (arr_3 [i_0] [i_2]))) - 110))));
                    var_19 *= ((((max((1 * 3638227624), (((arr_6 [i_0] [13] [i_2]) + -8001634235726073197))))) ? (arr_1 [6]) : 704860116));
                }
            }
        }
    }
    var_20 = (((~((var_9 >> (var_15 + 27237))))));
    #pragma endscop
}
