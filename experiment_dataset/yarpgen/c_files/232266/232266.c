/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 += ((~(arr_5 [i_0])));
                arr_6 [i_0] [i_0] = (max(-0, (((32767 | (arr_3 [i_0]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_19 *= (var_15 != -32755);
        var_20 += ((((~(((arr_9 [i_2]) << (40340 - 40321))))) == -2908504606552123552));
        arr_10 [i_2] = (((max((max(16169129679462662935, (arr_1 [i_2]))), (((-2908504606552123552 ^ (arr_4 [i_2] [i_2] [0])))))) != -35));
        var_21 |= ((~((((((arr_9 [i_2]) ? 21516 : (arr_9 [i_2])))) ? (arr_7 [i_2]) : (arr_2 [i_2])))));
    }
    #pragma endscop
}
