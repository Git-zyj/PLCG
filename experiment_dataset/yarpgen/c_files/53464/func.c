/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53464
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
    var_15 = ((/* implicit */signed char) 4294967295U);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 19U)) % (8ULL))), (12ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? ((-9223372036854775807LL - 1LL)) : (arr_2 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(signed char)16] [i_2 - 1])) ? (((((/* implicit */_Bool) 6608188053399156942ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (19U))) : (((((/* implicit */_Bool) arr_0 [(signed char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) : (4294967276U)))))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned short) var_6)), (arr_10 [i_0] [i_1] [i_2 - 2] [i_3]))));
                        arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) | (arr_2 [i_3 + 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_2 - 1] [i_2 - 2]), (arr_1 [i_2 - 3] [i_2 - 1]))))) : (min((4294967295U), (((/* implicit */unsigned int) (unsigned char)86))))));
                        arr_12 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 9223372036854775807LL);
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [0] [i_0] = ((/* implicit */short) (unsigned char)86);
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-102)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((arr_14 [i_2 - 1] [i_2 - 1]) >> (((min((arr_9 [(signed char)7] [i_4] [(_Bool)1] [(signed char)7] [(signed char)7] [i_4 + 1]), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 19U))))))) - (5889610915940416730ULL)))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                        arr_23 [(signed char)4] [(short)9] [i_2] [i_1] = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) > (12ULL)));
                        var_19 = ((/* implicit */long long int) arr_9 [(signed char)1] [i_1] [i_2 + 1] [i_2] [i_5] [i_1]);
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)28822))));
}
