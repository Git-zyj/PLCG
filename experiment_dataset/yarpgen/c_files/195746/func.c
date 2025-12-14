/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195746
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
    var_17 += ((/* implicit */int) var_11);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) var_12);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) <= ((-(arr_0 [i_0]))))) ? (((int) var_6)) : ((-((-(((/* implicit */int) (signed char)-120)))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((min((arr_4 [i_1]), (((/* implicit */unsigned long long int) (+(254363730)))))) >= (((/* implicit */unsigned long long int) ((int) (unsigned char)28)))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
        var_21 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)30)), ((~(((((/* implicit */int) var_11)) & (((/* implicit */int) arr_2 [i_1]))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_22 = ((/* implicit */int) var_5);
        var_23 = ((/* implicit */int) (((+(((/* implicit */int) arr_7 [i_2 + 1] [i_2])))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_5))) >= (((unsigned long long int) 0ULL)))))));
    }
    var_24 &= (+(((/* implicit */int) (short)10)));
    var_25 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_16)))) - (((/* implicit */int) var_10))));
}
