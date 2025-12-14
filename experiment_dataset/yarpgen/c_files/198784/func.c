/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198784
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_10 = var_2;
                    var_11 ^= ((/* implicit */unsigned char) (-(2927982099U)));
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (9606392478459406550ULL)))) ? (((/* implicit */int) (unsigned short)65515)) : ((-(((/* implicit */int) arr_3 [i_0] [6LL] [i_0])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                }
            } 
        } 
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : ((-(var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) -872826457))))) ? (((((/* implicit */int) (signed char)-30)) % (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_1 [i_0]))))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (56)))))), (((((/* implicit */_Bool) 11522327370642643068ULL)) ? (-1LL) : (((/* implicit */long long int) var_7))))))));
        arr_7 [i_0] [i_0] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) 3774514470U)))))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_0] [i_0] [0U])))))));
    }
    var_13 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1339536686)) ? (var_2) : (((/* implicit */unsigned long long int) max((1339536686), (((/* implicit */int) var_0))))))))));
}
