/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243265
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
    var_11 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_2))))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_9)))))) & (((/* implicit */int) var_6))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))), (min((var_10), (((/* implicit */long long int) var_2))))))));
    var_13 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_2))))) + (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_4)))))))), (var_10)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 &= ((/* implicit */signed char) ((((arr_0 [i_0]) * (arr_0 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_7 [i_0] [i_2]) != (arr_7 [5U] [i_2])))) <= (((/* implicit */int) arr_4 [i_0] [i_0]))));
                    var_15 &= ((/* implicit */long long int) arr_4 [i_0] [i_1]);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) <= (arr_0 [i_0])))) + (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) != (arr_6 [i_2] [i_1] [i_0] [i_0]))))));
                    arr_11 [i_0] [i_1] [i_2] = arr_7 [i_1] [i_1];
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 4; i_4 < 11; i_4 += 4) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_14 [i_3] [i_4 - 2]) >= (((/* implicit */int) min((((/* implicit */short) arr_5 [i_3] [i_3] [i_3])), (arr_16 [i_4]))))))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [i_4])) > (((/* implicit */int) arr_3 [i_4 - 1])))))) <= (((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_4])) ? (arr_0 [(short)3]) : (arr_13 [i_3]))))))));
            arr_18 [i_3] [i_3] [(unsigned char)4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (((/* implicit */int) arr_5 [i_3] [(unsigned short)11] [(unsigned short)4])) : (((/* implicit */int) arr_15 [(short)4] [i_3])))) != (((/* implicit */int) max((arr_16 [i_3]), (((/* implicit */short) arr_1 [i_3] [i_3])))))))), (max((max((((/* implicit */unsigned int) arr_15 [(signed char)6] [i_4 - 2])), (arr_13 [i_3]))), (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3] [i_4])) : (arr_0 [i_3])))))));
        }
        arr_19 [i_3] = ((/* implicit */int) arr_13 [i_3]);
        arr_20 [i_3] = ((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned short)22)))) >= (((((((/* implicit */_Bool) arr_13 [i_3])) || (arr_4 [(signed char)23] [(signed char)6]))) ? (((((/* implicit */_Bool) arr_16 [i_3])) ? (arr_12 [i_3] [i_3]) : (((/* implicit */int) arr_4 [i_3] [i_3])))) : (((arr_4 [i_3] [i_3]) ? (((/* implicit */int) arr_4 [i_3] [(unsigned short)21])) : (((/* implicit */int) arr_4 [i_3] [i_3])))))));
    }
}
