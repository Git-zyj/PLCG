/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46757
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
    var_14 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (var_8))) > (((/* implicit */int) ((_Bool) var_0))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_11);
        var_15 = ((/* implicit */long long int) var_4);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (arr_1 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2])))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_16 *= ((((/* implicit */int) arr_5 [i_1 - 2])) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) | (((long long int) arr_4 [i_1 - 2])))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (((-(519244749))) / ((~(((/* implicit */int) arr_0 [i_1 - 1]))))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_0 [i_1 - 2])), (arr_1 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_1 - 1]), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1 - 2])) < (((/* implicit */int) var_9))))))))) : ((-(((long long int) arr_1 [(_Bool)1]))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1 - 1]);
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-(-519244750))) >> (((((/* implicit */int) var_10)) + (37)))))) < (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2]))))) | (((arr_1 [(_Bool)1]) ^ (((/* implicit */unsigned long long int) 3262508430U))))))));
        var_18 ^= ((/* implicit */signed char) 1129477564);
    }
}
