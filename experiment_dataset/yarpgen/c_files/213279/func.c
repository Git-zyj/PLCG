/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213279
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = var_10;
        arr_4 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-21759)) <= (((/* implicit */int) (unsigned short)5870)))))) : (((((/* implicit */_Bool) 1660625704U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5894)))));
    }
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) var_6);
        arr_9 [i_1] = ((arr_1 [i_1 - 1] [11LL]) >> (((((/* implicit */int) arr_7 [i_1])) - (20138))));
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((922016950U), (((/* implicit */unsigned int) (signed char)117))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (arr_2 [i_1 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) (unsigned short)5870)) ? (var_8) : (((/* implicit */unsigned int) var_3)))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) var_5);
        var_13 *= ((/* implicit */unsigned int) arr_0 [i_2 + 4]);
        var_14 = ((/* implicit */signed char) (-(var_9)));
        arr_13 [i_2] [(unsigned short)7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_2]))))) < (arr_10 [i_2])))), (arr_1 [i_2] [i_2 - 3])));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)-6561)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)41372)))))) : ((((((~(((/* implicit */int) var_7)))) + (2147483647))) << (((((var_1) >> (((var_9) - (5599640455920721908ULL))))) - (393860778220ULL)))))));
}
