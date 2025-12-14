/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217816
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_8))))) ? (max((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7715578048193125709LL))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)255)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_11 += ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_12 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)9500)) <= (((/* implicit */int) (unsigned short)65310))));
        var_14 = var_6;
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_1]))))) - (((13626383947594793581ULL) >> (((((/* implicit */int) (unsigned char)213)) - (199)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) max(((((+(var_5))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_0))));
        arr_6 [10ULL] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)240)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_0))))) / (arr_2 [i_1]))), (max((arr_2 [i_1]), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_9)))))));
        var_16 = ((/* implicit */short) var_8);
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) arr_3 [i_1] [i_1]))))));
    }
}
