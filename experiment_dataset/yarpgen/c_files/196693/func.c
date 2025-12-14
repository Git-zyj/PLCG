/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196693
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)253)))))))) : (var_8)));
    var_11 = ((/* implicit */short) ((((((/* implicit */unsigned int) 4194296)) != (((unsigned int) var_6)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_0);
        arr_4 [i_0 - 4] [i_0] = ((/* implicit */long long int) ((unsigned short) (signed char)-46));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_12 -= ((/* implicit */unsigned short) min((((unsigned long long int) arr_5 [i_1])), (((/* implicit */unsigned long long int) ((arr_5 [i_1]) && (arr_5 [i_1]))))));
        arr_9 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_7 [i_1])))) ? (min((arr_8 [i_1]), (((/* implicit */int) ((_Bool) var_1))))) : (arr_8 [i_1])));
        arr_10 [14U] = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((15ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [4ULL])))))) ? (min((var_7), ((~(((/* implicit */int) arr_5 [i_1])))))) : ((+(((/* implicit */int) arr_6 [i_1] [i_1]))))));
        var_14 = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1] [i_1])), (max((var_8), (((/* implicit */long long int) arr_6 [i_1] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_8));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (unsigned short)2029)) : ((-(((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_12 [i_2]))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_12 [i_2])))))))));
    }
}
