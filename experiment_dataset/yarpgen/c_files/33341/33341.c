/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-var_9, ((max(-9223372036854775793, var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 += 1;
                var_14 -= (((((min(-7843036096701621501, (arr_3 [i_0] [i_0]))))) == ((min(21, 0)))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = ((var_6 > ((((!(arr_6 [i_0] [i_0] [i_0])))))));
                    arr_8 [i_1] [i_2] = (((((((var_11 ? (arr_0 [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_2])))) > ((69 ? 10 : var_10)))) ? (min((((arr_4 [i_1 + 1] [i_1] [i_1]) >> (((arr_6 [i_0] [i_0] [1]) - 92)))), ((((arr_5 [i_1] [i_1]) || 1))))) : ((-(arr_6 [i_1] [i_1 + 1] [i_1 + 1])))));
                    var_16 = (min(var_16, (((((((arr_3 [i_1 + 1] [i_1 + 1]) && (arr_3 [i_1 + 1] [i_1 + 1]))))) / (arr_3 [i_1 + 1] [i_1 + 1])))));
                }
                arr_9 [i_1] = (i_1 % 2 == 0) ? ((((arr_0 [i_0] [i_0]) >> (((min((((147 - (arr_0 [i_0] [i_0])))), ((-(arr_7 [i_1] [1] [i_0]))))) + 4201923287266801843))))) : ((((arr_0 [i_0] [i_0]) >> (((((min((((147 - (arr_0 [i_0] [i_0])))), ((-(arr_7 [i_1] [1] [i_0]))))) + 4201923287266801843)) - 4201923287266801782)))));
            }
        }
    }
    var_17 = (min(var_17, ((max(((var_0 < (((-5096788264431232525 ? 1 : 1))))), var_8)))));
    var_18 = (((((var_2 & var_9) | (var_11 | var_0)))) || var_6);
    #pragma endscop
}
