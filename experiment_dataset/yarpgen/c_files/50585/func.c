/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50585
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0 - 3] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) <= (1869270912U)));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_2 - 2] [i_3])), (min((arr_8 [i_0] [i_1] [(_Bool)1] [i_0 - 1]), (((/* implicit */short) arr_3 [i_3] [16ULL] [i_0]))))))) ? (arr_4 [(short)6]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_1 - 3] [i_2] [i_0 - 1])))))));
                        arr_15 [i_0] [i_1] [i_2 + 3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_4 [i_0 - 2]))))));
                        arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1]), (arr_7 [i_0] [i_0] [i_0] [i_2]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_6 [i_1 - 1]))))) & (((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1] [i_2] [i_3] [4ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 1] [i_3]))) : (arr_4 [i_3])))))));
                        arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((arr_13 [i_3] [i_1 - 2] [i_2] [i_1 - 2] [i_0]), (arr_7 [(short)15] [i_0] [i_0] [i_3]))) ? (((((/* implicit */int) (signed char)-2)) % (((/* implicit */int) (short)-25603)))) : (((((/* implicit */int) arr_3 [i_0] [i_2] [i_0])) + (((/* implicit */int) arr_0 [(_Bool)1]))))))) ? (((((/* implicit */_Bool) ((arr_4 [i_0 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)12] [i_2] [(unsigned char)12])))))) ? (((/* implicit */int) max((arr_9 [i_3] [i_1] [i_2 + 3] [i_3]), (((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1] [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_2 - 1] [i_1] [14LL])) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_4 [i_2 + 2])))) ? (((arr_3 [i_1] [(signed char)2] [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 3])) : (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_7 [i_3] [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                    }
                    arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 2] [i_1 + 1] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_1 [11])))) : (((/* implicit */int) arr_9 [i_0 - 4] [i_1 - 1] [i_2] [i_2 + 2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2 - 2])) < ((+(((/* implicit */int) arr_13 [i_2] [i_1] [i_1] [i_1] [i_1]))))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) var_8);
}
