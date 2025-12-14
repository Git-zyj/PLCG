/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199486
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
    var_13 = ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) 0U)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)0)))))))) ? ((+(((unsigned long long int) 13307523669163129471ULL)))) : (((/* implicit */unsigned long long int) (((((-2147483647 - 1)) / (((/* implicit */int) var_5)))) / (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((arr_5 [i_1 + 2] [i_1 + 2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 1]))))) / (min((((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_1 - 1])), (arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((max((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) (_Bool)0)))) << (((((/* implicit */int) max((arr_6 [i_0] [i_1 + 2] [2ULL] [i_1 + 3]), (arr_6 [i_0] [i_0] [(unsigned short)3] [i_1 + 2])))) + (12833))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_16 *= ((/* implicit */unsigned long long int) ((3458764513820540928LL) << (0ULL)));
                    arr_11 [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) min((2958261462016442970ULL), (((/* implicit */unsigned long long int) (_Bool)0)))));
                }
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_5 [i_1 + 3] [i_1] [i_1 - 1])) >= (-3458764513820540929LL))) ? (max((((/* implicit */long long int) (signed char)-62)), (3458764513820540929LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6354617937945144425ULL)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 + 1] [i_0]))))))));
            }
        } 
    } 
}
