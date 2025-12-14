/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_17 ^= 430549669;
                var_18 = (((max(430549673, 6013336364447390079)) << ((((((~(~-2729072988562707471))) + 2729072988562707532)) - 61))));
                var_19 = ((62557 ? ((((((arr_1 [i_0] [i_0]) >> (arr_4 [1] [i_1]))) >= -125))) : ((((((var_2 ? (arr_1 [i_0] [i_0]) : -86))) <= var_1)))));
            }
        }
    }
    #pragma endscop
}
