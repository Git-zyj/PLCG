/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217585
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
    var_11 = ((/* implicit */long long int) ((min((((/* implicit */int) var_1)), (((var_9) ? (((/* implicit */int) var_0)) : (var_5))))) & (((((/* implicit */int) var_6)) % (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        var_12 |= ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [4] [i_0 + 3])) != (((/* implicit */int) arr_0 [(_Bool)1] [i_0 + 4])))) ? (((arr_1 [(unsigned short)8]) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [(signed char)8] [(signed char)8]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)4] [i_0 + 3]))) - ((+(arr_1 [8])))))));
        arr_2 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_8)))))) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 4; i_1 < 8; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_2 - 1] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) * (arr_8 [i_1 - 4] [i_1 + 4])))) ? (max((((((/* implicit */long long int) ((/* implicit */int) arr_6 [3LL] [(signed char)7] [i_1 - 2]))) ^ (arr_3 [i_1]))), (arr_3 [i_2 + 3]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                    arr_11 [i_2 - 1] [i_2] [i_2 + 3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_1] [i_1]))) ? (((int) ((((/* implicit */_Bool) arr_7 [i_1] [i_3])) ? (((/* implicit */long long int) arr_5 [i_1])) : (arr_3 [i_3])))) : ((~(var_5)))));
                    var_13 += ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))), (arr_3 [i_1]))) | (((arr_8 [i_2] [i_3]) % (((/* implicit */long long int) (+(arr_5 [i_1]))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (((arr_4 [i_1 - 2] [i_1 - 2]) >> (((((/* implicit */int) arr_7 [i_1 - 3] [(unsigned char)11])) - (20901)))))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_6))));
}
