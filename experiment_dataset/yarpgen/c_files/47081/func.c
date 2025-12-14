/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47081
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
    var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) (unsigned char)17))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */unsigned long long int) var_16))))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)13293)))) : (min((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_22 += ((arr_3 [i_0] [i_0]) >> (((arr_3 [i_0] [i_1]) - (5874503815357539617ULL))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) var_15);
            arr_5 [i_0] &= ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= ((-(((/* implicit */int) var_13))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_2] [(short)10] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_12)) ? (arr_2 [i_2 + 2] [i_2 - 2]) : (arr_2 [i_2 + 1] [i_2 - 1]))) + (2147483647))) << (((((max((arr_2 [i_2 + 2] [i_2 + 2]), (arr_2 [i_2 + 1] [i_2 + 2]))) + (681935441))) - (22)))));
            var_23 = ((/* implicit */short) arr_1 [6]);
            var_24 = ((/* implicit */unsigned short) var_3);
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 4; i_3 < 12; i_3 += 3) 
            {
                var_25 *= ((/* implicit */short) 659472598309369107ULL);
                arr_12 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 33101870U)) ? (((/* implicit */int) arr_10 [7LL] [i_2 - 2] [i_3] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_2 + 2] [i_2 + 2] [i_3]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    arr_15 [8LL] [2LL] [i_4] |= ((/* implicit */unsigned char) (-(arr_6 [i_0] [6ULL] [i_3])));
                    arr_16 [(signed char)10] [i_2] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2 - 1] [i_3] [i_3 - 2]))));
                }
                arr_17 [i_2] [i_3] = ((/* implicit */short) arr_6 [i_0] [i_2] [i_3]);
            }
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-13293))) > (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (var_16))))))));
                var_27 -= ((/* implicit */unsigned long long int) ((unsigned char) 106366373));
                var_28 |= ((/* implicit */unsigned int) ((signed char) arr_14 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]));
            }
        }
    }
}
