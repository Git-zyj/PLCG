/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197587
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
    var_13 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 |= ((/* implicit */unsigned long long int) min((min((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)20])) ? (((/* implicit */int) (unsigned short)25707)) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)8]))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_1 [(unsigned char)4]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39829)))))))))));
        arr_2 [i_0] [10U] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [20ULL])) ? (((/* implicit */int) arr_0 [i_0] [(signed char)20])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)6]))))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [18U]))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2] [i_1]))));
            var_16 -= ((/* implicit */unsigned short) (+(arr_5 [i_2] [i_1])));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned int i_4 = 4; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_13 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_9 [i_2] [i_4 - 3]) : (arr_9 [i_1] [i_3])));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(2426905999U)))) ? (((/* implicit */int) arr_0 [i_4 - 3] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50261))))))))));
                            arr_17 [i_1] [8ULL] [i_3] [i_2] [(signed char)10] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1638)) ? (arr_9 [i_2] [(unsigned short)10]) : (((/* implicit */int) arr_6 [6] [i_2]))))) ? (arr_10 [i_4] [i_4 - 3] [i_4] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2])))));
                            var_18 ^= ((/* implicit */signed char) (~((~(arr_9 [i_2] [i_2])))));
                        }
                    }
                } 
            } 
            arr_18 [i_2] [i_1] = ((/* implicit */unsigned char) arr_10 [i_1] [i_1] [i_1] [i_2]);
        }
        var_19 -= max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [(signed char)13] [i_1])), (arr_12 [i_1])))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)25707))))), (min((((/* implicit */long long int) ((unsigned short) arr_5 [i_1] [i_1]))), ((-(arr_7 [i_1] [14] [i_1]))))));
    }
    var_20 |= ((/* implicit */unsigned long long int) var_11);
}
