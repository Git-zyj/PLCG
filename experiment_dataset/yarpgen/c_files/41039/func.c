/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41039
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) != (arr_1 [i_0 - 1] [i_0 - 1])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            var_15 = ((/* implicit */int) var_6);
            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 4])) ? (arr_0 [(short)4]) : (arr_0 [i_0 + 1])));
            /* LoopSeq 1 */
            for (short i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 4] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_1))));
                arr_9 [8] &= ((/* implicit */unsigned short) ((var_10) >= (((/* implicit */unsigned int) arr_8 [i_2 - 1] [(short)0] [(short)0] [i_0 + 1]))));
            }
        }
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_7 [(signed char)14] [(signed char)14] [(signed char)14])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) || (((arr_0 [i_0]) <= (((/* implicit */int) var_5)))))))) : (((unsigned long long int) max((arr_8 [i_0] [14] [i_0] [i_0]), (arr_8 [i_0] [10LL] [(signed char)10] [i_0]))))));
    }
    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        arr_12 [3ULL] = ((((((/* implicit */int) var_4)) != (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) arr_5 [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_3 + 2])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) var_14))));
        arr_13 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_0 [i_3])), (arr_6 [(signed char)2] [0U]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3])))))))))));
        arr_14 [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) min(((short)-7511), (((/* implicit */short) (signed char)41))))), ((-(((/* implicit */int) var_4))))));
    }
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
}
