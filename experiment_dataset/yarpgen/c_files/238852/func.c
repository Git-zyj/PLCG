/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238852
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) -771933652)) || (((/* implicit */_Bool) 9020715067056139349ULL)))))));
        var_11 = arr_1 [i_0] [i_0];
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_3);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_1 - 1])) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12006976931642578489ULL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1]))) : (var_6)))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (min((5876687875177402315ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned char) (signed char)-84)))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [12U]))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | ((~(var_4))))))));
        var_15 = ((/* implicit */unsigned int) (unsigned short)59321);
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_7 [i_2] [i_2]))));
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) arr_0 [i_3 + 1]);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (arr_10 [i_3 - 1])));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 10ULL))) ? ((-(((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1])))) : ((~(((/* implicit */int) max(((unsigned short)29286), (((/* implicit */unsigned short) var_2)))))))));
        arr_14 [i_3] |= ((/* implicit */signed char) arr_0 [i_3]);
    }
    var_18 = ((/* implicit */unsigned short) (~(var_6)));
    var_19 &= ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((unsigned int) ((int) var_7)))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (unsigned char)109)))) - (((int) ((unsigned short) var_3))))))));
    var_21 &= ((/* implicit */short) (+(var_6)));
}
