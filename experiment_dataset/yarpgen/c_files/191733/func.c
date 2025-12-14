/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191733
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_0 [5] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)212))))))) - (((long long int) ((unsigned char) (_Bool)1)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) max((((long long int) var_3)), (((/* implicit */long long int) var_2))));
                        var_14 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 15923833358510618994ULL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)5))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_2 [i_3 - 2] [i_3 - 2] [i_0 + 1])))) ? (max((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned char)41)))) : (((/* implicit */unsigned long long int) var_8)))))));
                    }
                } 
            } 
        } 
        var_16 |= ((/* implicit */long long int) ((unsigned char) var_9));
    }
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 &= ((/* implicit */long long int) ((short) ((long long int) var_3)));
    var_19 = ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)231)))))) == (((/* implicit */int) ((_Bool) ((long long int) var_2)))));
    var_20 = var_0;
}
