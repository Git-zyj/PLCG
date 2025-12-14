/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50773
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
    var_19 = ((/* implicit */unsigned long long int) var_2);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) var_14)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_11))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((signed char) (unsigned short)18866))) : (((int) var_13)))), (((((/* implicit */_Bool) arr_1 [i_0] [8LL])) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_1 [i_0] [7])) ? (arr_1 [i_0] [(signed char)12]) : (((/* implicit */int) var_3))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) + (((var_4) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((int) -521866141))) ? ((~(arr_0 [i_0]))) : ((~(arr_0 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) (+(arr_0 [i_1])));
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), (arr_0 [i_1 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (arr_1 [i_1] [i_1])))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [6ULL] [i_1])) ? (((/* implicit */int) var_5)) : (arr_1 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_4 [(_Bool)1] [(unsigned short)8]))))));
        /* LoopSeq 4 */
        for (short i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_1]));
            var_23 -= ((/* implicit */signed char) arr_4 [i_2] [1LL]);
        }
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            arr_13 [i_3] [i_3] = ((/* implicit */int) ((unsigned short) (+(arr_5 [i_1 + 1] [i_3 + 3]))));
            arr_14 [i_3] = ((/* implicit */unsigned long long int) var_3);
            var_24 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_0 [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((arr_1 [i_1 + 1] [i_1 - 1]) < (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (arr_1 [i_1] [i_3]) : (((/* implicit */int) arr_8 [5LL] [i_3] [i_3])))))))));
        }
        /* vectorizable */
        for (signed char i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            var_25 = ((unsigned char) var_1);
            var_26 = ((/* implicit */unsigned short) ((arr_9 [i_1] [i_4] [i_4 - 2]) | (((unsigned int) var_1))));
        }
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_27 *= ((/* implicit */unsigned long long int) arr_0 [i_5]);
            var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((-(((/* implicit */int) (unsigned char)74)))) : (((/* implicit */int) ((signed char) ((((/* implicit */long long int) arr_1 [2ULL] [i_1])) | (arr_4 [i_1] [(unsigned char)10])))))));
        }
        var_29 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_18)))) ? (max((arr_12 [i_1] [i_1]), (arr_1 [i_1] [i_1]))) : (((/* implicit */int) ((((/* implicit */int) var_14)) < (arr_12 [i_1] [i_1]))))))) ? (((/* implicit */int) var_3)) : ((-((~(((/* implicit */int) arr_16 [i_1])))))));
    }
}
