/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209258
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 1073741823U)))));
            arr_6 [i_0] [i_0] [2LL] |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_4 [6LL]))));
        }
        var_14 = ((/* implicit */unsigned int) arr_4 [i_0]);
        arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3181957584340840365LL)) ? (((/* implicit */int) (unsigned short)65518)) : (arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned char)48))))) : (((/* implicit */int) arr_2 [i_0]))));
        arr_8 [2U] |= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_2 [(short)7])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_4 [(signed char)0]))));
        arr_9 [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(-2147483634)))), (max((((/* implicit */unsigned int) arr_12 [i_2 - 1])), (3268556798U)))));
            arr_18 [i_3] = ((/* implicit */unsigned char) (short)-1);
        }
        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(unsigned short)12] [(short)2] [(short)7] [15])) || (((/* implicit */_Bool) arr_20 [(short)14] [(signed char)4]))))))))));
                arr_24 [i_4] [i_4] = ((/* implicit */signed char) (-(min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_0))))))));
            }
            arr_25 [(unsigned short)4] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)134)) || (((/* implicit */_Bool) -1811697195))));
            var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_21 [(short)6])))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_19 [(unsigned short)14] [i_4 + 2] [i_4 + 2]))))) ? (min((((/* implicit */long long int) (unsigned char)12)), (arr_15 [i_2 - 2] [i_4 - 1]))) : (((/* implicit */long long int) ((arr_19 [i_4 + 2] [i_4 - 1] [i_2 - 2]) ? (((((/* implicit */_Bool) -1811697218)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(short)6]))) : (arr_23 [(short)14] [i_2] [9ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [(short)2] [(short)2] [(short)2]) || (var_5))))))))));
            arr_26 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)69)) || (((/* implicit */_Bool) ((int) 992))))) || (((/* implicit */_Bool) (unsigned char)180))));
        }
        var_17 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (unsigned char)41)), (arr_22 [(unsigned char)10] [i_2] [i_2] [i_2 - 3])))));
    }
    var_18 = ((/* implicit */short) var_1);
}
