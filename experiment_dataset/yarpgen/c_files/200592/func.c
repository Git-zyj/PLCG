/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200592
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17688)))))) ? (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (arr_1 [i_0])))) ^ ((((-(var_9))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(signed char)3])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) / (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((signed char) var_15))))) >= (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_2 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((var_11) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) & (var_14)));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))), (((arr_0 [i_1] [i_1]) + (((/* implicit */unsigned long long int) arr_5 [i_1])))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_15) ^ (((/* implicit */unsigned int) arr_1 [i_1]))))) > (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_6))))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55479)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((max((((/* implicit */unsigned long long int) (unsigned short)1)), (var_9))), (((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_1] [(unsigned short)0])))))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) (~(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65516))) / (var_1))), (((/* implicit */long long int) arr_10 [i_2]))))));
        var_22 = ((/* implicit */long long int) arr_10 [(short)10]);
    }
    var_23 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) == (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65513))))))))));
    var_24 = var_1;
    var_25 = ((/* implicit */unsigned short) (-((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_15)))))));
}
