/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33567
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
    var_11 = ((/* implicit */unsigned char) var_4);
    var_12 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_0]))))) >> (((((/* implicit */int) var_5)) - (55147))))))));
        var_14 ^= ((/* implicit */long long int) ((_Bool) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) arr_1 [i_0 - 1])))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (arr_4 [i_1 + 1])))) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))), (((((/* implicit */_Bool) var_0)) ? (2008966856) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1]), (min((arr_5 [i_1 - 2] [i_1]), (((/* implicit */short) var_9)))))))));
        var_16 = ((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_1]));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_17 |= (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) ^ (arr_10 [i_2] [(short)0])))) || (((/* implicit */_Bool) arr_4 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) var_6)), (var_4)));
    }
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max(((-(((/* implicit */int) arr_5 [i_3 + 2] [i_3 - 1])))), (((/* implicit */int) arr_4 [i_3])))))));
        arr_14 [i_3] = ((/* implicit */unsigned int) (+(((int) arr_13 [i_3 - 1]))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_5 [i_3] [i_3]))))))))));
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((var_9) ? (((((unsigned int) arr_4 [i_4])) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_16 [i_4] [i_4])), (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [18LL])) && (((/* implicit */_Bool) arr_15 [i_4] [13]))))) : (((/* implicit */int) ((unsigned short) arr_17 [i_4]))))))));
        arr_18 [i_4] |= ((/* implicit */short) (+(((arr_15 [(unsigned char)1] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4])))))));
    }
}
