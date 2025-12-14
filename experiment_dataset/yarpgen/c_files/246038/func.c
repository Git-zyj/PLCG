/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246038
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) arr_0 [8ULL] [i_0 + 1]);
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            var_14 = ((/* implicit */signed char) ((arr_3 [i_1 + 2] [i_1 - 3]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))));
            var_15 ^= ((/* implicit */unsigned short) arr_2 [i_1 - 2]);
            arr_4 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)25))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_9 [i_0 + 3] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [5]))))));
            var_16 = ((/* implicit */unsigned int) arr_0 [i_2] [i_0]);
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    arr_19 [i_0] [i_3] [i_4] [(signed char)3] |= ((/* implicit */unsigned short) var_5);
                    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_0 + 1]))));
                }
                arr_20 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_10 [i_0] [i_3] [i_4]);
            }
            for (short i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                arr_23 [i_0] [i_3] [5] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0 + 2] [(unsigned short)7] [i_6 - 1]))));
                arr_24 [4LL] [i_3] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_22 [i_0])))) - (((((/* implicit */_Bool) arr_22 [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [i_3]))))));
                arr_25 [i_0] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-82)))) != (((/* implicit */int) arr_16 [0U] [0U] [i_3] [i_3] [i_0 - 1] [0U]))));
                var_18 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_3] [i_6]);
            }
            var_19 = (+(((/* implicit */int) arr_6 [i_0 + 3] [i_0 - 1])));
        }
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            arr_28 [i_7] [6LL] = ((/* implicit */unsigned short) (~(((((((/* implicit */int) (signed char)-75)) + (2147483647))) << (((((/* implicit */int) (unsigned char)192)) - (192)))))));
            var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)65512)) - (((/* implicit */int) arr_5 [i_0 + 3]))))));
            var_21 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) - (arr_0 [i_0] [i_7])))));
            var_22 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0 - 2] [i_0]))));
        }
    }
    var_23 = ((/* implicit */unsigned short) var_11);
}
