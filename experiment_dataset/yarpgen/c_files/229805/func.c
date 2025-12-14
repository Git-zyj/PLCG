/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229805
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
    var_19 = ((/* implicit */int) var_5);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_1) : ((~(max((((/* implicit */unsigned long long int) var_3)), (var_8)))))));
    var_21 = (((((+((-(((/* implicit */int) var_10)))))) + (2147483647))) >> ((((+(((/* implicit */int) (signed char)-86)))) + (88))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) var_1);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))));
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0 - 3]))) == (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(arr_7 [i_1])))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_6 [(signed char)9] [i_1] [i_2 - 1]) : (arr_6 [i_2] [i_1] [i_2 - 1]))) : (arr_6 [(unsigned char)1] [i_1] [i_2 + 1])));
            var_24 += ((/* implicit */unsigned short) arr_6 [i_2 + 1] [12LL] [i_2 - 1]);
            arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)32744))))) / (min((arr_6 [i_2 - 1] [i_1] [i_2 - 1]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_18)) - (29505))))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_3]))) ? ((~(arr_5 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))));
            arr_14 [i_1] [i_3] [(unsigned short)0] &= ((/* implicit */unsigned char) (~(max((arr_5 [i_1]), (((/* implicit */long long int) var_18))))));
        }
        arr_15 [(unsigned char)4] &= ((/* implicit */short) arr_12 [i_1] [i_1]);
    }
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (unsigned short)43677))));
}
