/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223904
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
    var_20 ^= 1064441637;
    var_21 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) 2147483647)) ? (var_2) : (((/* implicit */unsigned int) var_12)))))), (((/* implicit */unsigned int) var_10))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) arr_2 [i_0 + 1])), (arr_1 [i_0 - 1] [i_0]))));
        arr_4 [i_0 + 1] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((int) var_8)) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) == (arr_1 [4] [i_0 - 3])))) : (min((((/* implicit */int) var_3)), (-2147483632)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = (~(var_19));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)132))) : (((((/* implicit */unsigned long long int) ((1125891316908032LL) | (((/* implicit */long long int) 0))))) ^ (((unsigned long long int) arr_5 [i_1]))))));
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_18))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_12))));
        var_24 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) -1945459858)), (18446744073709551615ULL)))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 4; i_3 < 15; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    {
                        arr_19 [i_3 + 1] [i_3 + 1] [i_5] = ((/* implicit */unsigned long long int) var_8);
                        var_25 = (~((~(arr_1 [i_2] [i_3]))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((int) ((int) var_0))) : ((~(var_10)))));
}
