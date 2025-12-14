/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234166
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
    var_14 += (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))), (max((((/* implicit */unsigned int) var_1)), (var_11))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(arr_1 [i_0]))))));
        arr_3 [i_0] [6ULL] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 4; i_2 < 12; i_2 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) arr_2 [i_1 - 1])), (var_10))))));
            var_17 ^= ((/* implicit */short) arr_5 [i_1 + 2]);
            var_18 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) arr_4 [i_2 + 4])), (arr_5 [i_1 + 2])))));
            arr_8 [i_1] [i_2 + 4] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 1] [i_1 + 2])) : (arr_1 [i_2 + 4]))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) != (arr_1 [i_2]))))) >= (((unsigned int) arr_5 [i_1])))))));
        }
        for (signed char i_3 = 4; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 + 4] [i_3 + 1] [(signed char)15]))))) ? (max((arr_9 [i_3]), (arr_9 [i_3]))) : (((((/* implicit */int) arr_7 [i_1 - 1] [i_3 - 1] [i_3])) | (arr_9 [i_3])))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (-((+(arr_5 [i_3]))))))));
            var_21 = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_10))), (((arr_9 [i_1]) - (min((((/* implicit */int) arr_0 [i_3])), (arr_10 [i_1])))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 4])) : (((/* implicit */int) arr_11 [i_1 + 3] [i_1 - 1])))) | (((arr_9 [i_3]) ^ (arr_9 [i_3]))))))));
        }
        var_23 = ((/* implicit */signed char) max((var_23), (arr_11 [i_1] [i_1])));
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1 + 4]))))) / (min((arr_6 [i_1 - 1] [i_1 + 1] [i_1]), (arr_6 [i_1 + 2] [i_1 + 3] [i_1])))));
    }
    var_25 = ((/* implicit */signed char) var_11);
}
