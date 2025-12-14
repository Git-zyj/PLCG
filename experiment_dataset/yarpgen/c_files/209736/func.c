/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209736
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */signed char) var_13);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) ((int) arr_1 [i_0]));
        var_20 = ((/* implicit */unsigned short) ((arr_0 [i_0]) % (((/* implicit */int) (unsigned short)6910))));
        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (7585511803996293296ULL) : (((/* implicit */unsigned long long int) -1917899104))));
        var_22 |= ((/* implicit */short) arr_0 [i_0]);
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((arr_5 [i_1]) || ((!(((/* implicit */_Bool) arr_3 [i_1])))))) && (((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_5 [i_2 - 2]) ? (((/* implicit */int) (unsigned short)6910)) : (((/* implicit */int) arr_5 [i_2 - 2])))))));
                    var_25 = ((/* implicit */unsigned int) arr_9 [i_1]);
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */int) arr_4 [i_1] [(signed char)16]);
        var_26 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((1165023975U), (1165023975U)))) ? (((/* implicit */unsigned long long int) arr_4 [(short)0] [i_1])) : (((0ULL) + (arr_7 [(unsigned short)16] [i_1])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [16ULL] &= min((arr_13 [(signed char)2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))));
        var_27 &= ((/* implicit */unsigned int) min(((~(arr_14 [i_4] [i_4]))), (((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_12 [i_4])) : (arr_14 [i_4] [i_4])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) arr_7 [i_5] [i_5]);
        arr_19 [i_5] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [(short)13] [i_5])) && (((/* implicit */_Bool) ((long long int) ((unsigned int) var_7))))));
    }
    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30280))) == (var_2))))));
    var_30 = ((/* implicit */short) ((unsigned char) (-(((((/* implicit */int) var_4)) * (((/* implicit */int) var_3)))))));
}
