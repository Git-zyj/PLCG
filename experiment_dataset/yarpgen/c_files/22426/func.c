/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22426
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
    var_20 = ((/* implicit */long long int) ((unsigned long long int) ((var_12) << (((((((/* implicit */int) var_4)) + (((/* implicit */int) var_16)))) + (21061))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) (+(((var_13) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))))));
    var_22 &= ((/* implicit */short) ((signed char) var_8));
    var_23 = ((/* implicit */unsigned char) ((((var_12) / (((var_0) - (var_8))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-4), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_24 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))) ? (arr_1 [i_0]) : (max((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))), ((~(arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_1 - 1] [i_1]) ^ (((/* implicit */int) ((unsigned char) arr_4 [i_1 - 2] [i_1])))))) ? ((((((+(arr_3 [i_1] [i_1]))) + (2147483647))) >> (((((/* implicit */int) var_11)) - (32510))))) : (((/* implicit */int) var_4))));
        arr_6 [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (+(arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))))) : (((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 1])) ? (arr_3 [i_1 + 2] [i_1 - 1]) : (arr_3 [i_1 + 2] [i_1 - 1])))));
        var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) arr_3 [i_1 - 1] [i_1])) : ((-(var_5))))), (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) max((((-2168282848263750990LL) | (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))) : (var_8)))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) arr_9 [i_2]))))))))));
        arr_11 [14ULL] [14ULL] = ((/* implicit */long long int) var_16);
    }
}
