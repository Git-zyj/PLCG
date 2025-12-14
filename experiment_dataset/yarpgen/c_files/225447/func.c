/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225447
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
    var_10 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [7LL] [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)5])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)62974))))) : ((~(arr_0 [i_0] [i_0])))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11502)) & (-1183912536)));
    }
    for (int i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)46)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 4; i_2 < 23; i_2 += 3) 
        {
            var_14 += ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2] [i_1 - 1]))));
            var_15 = ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 - 4])) ? (arr_2 [i_1 + 1]) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1])));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2 - 3] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_2] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1] [i_2 - 1]))));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [(unsigned char)16] [i_2])) : (arr_2 [i_2 + 2]))))));
        }
    }
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        var_18 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-57)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)6069)) - (6059)))));
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) arr_2 [i_3])), (arr_8 [i_4]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 - 1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_6 [i_3 + 1] [i_3 + 1])), (arr_10 [i_4] [i_4])))))));
            arr_11 [i_4] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 + 1])) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3 + 3] [i_3 + 2]))))), (((((/* implicit */_Bool) -1183912534)) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~(((((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (arr_8 [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 2] [(signed char)11]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [4ULL] [4ULL])) ? (((/* implicit */int) arr_3 [i_3 + 2])) : (arr_2 [i_4 - 1])))))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) arr_7 [i_3 + 1]);
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((max((arr_0 [i_3 + 3] [i_3 + 3]), (4294967295U))) < (((/* implicit */unsigned int) arr_9 [6] [6]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5])))))));
            var_23 = ((/* implicit */long long int) arr_1 [i_3]);
        }
        arr_15 [i_3] = ((/* implicit */unsigned char) var_7);
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_6] [i_6]), (((/* implicit */short) arr_1 [i_6])))))) <= ((-(arr_0 [i_6] [i_6])))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_16 [i_6]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 4; i_7 < 12; i_7 += 3) 
    {
        arr_23 [i_7 - 2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (((unsigned int) (unsigned char)196))));
        arr_24 [(unsigned short)11] = ((/* implicit */long long int) var_4);
    }
    var_25 = var_4;
    var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_4)) & (((/* implicit */int) var_4))))))));
}
