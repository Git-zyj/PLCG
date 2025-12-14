/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237668
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
    var_16 = max((((((/* implicit */unsigned int) ((/* implicit */int) ((short) 0LL)))) & (max((((/* implicit */unsigned int) var_9)), (var_14))))), (((/* implicit */unsigned int) ((_Bool) 67108863U))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) * (((unsigned int) 549698777U)));
        arr_4 [i_0] = (+(arr_0 [i_0]));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (short)5955)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))) : ((-(4294967288U)))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */short) arr_6 [i_1]);
        arr_9 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? ((+(arr_1 [i_1]))) : (arr_1 [i_1]))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_6 [4LL]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2928119131U)) ? (4189583900U) : (8U)))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) arr_7 [3ULL])) : (var_2))) : (arr_1 [i_1])))) : (((max((var_10), (((/* implicit */unsigned long long int) var_9)))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) + (455001390U))))))));
    }
}
