/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22596
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((var_4), (var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62219))) - (var_8))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62219))))))))));
    var_18 = ((/* implicit */long long int) ((((max((((/* implicit */int) var_7)), (32505856))) << (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)255)))))) < (((((-1384298154) + (2147483647))) << (((((288230376151707648LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62221))))) - (61440LL)))))));
    var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (-1797473637862515479LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_11), (var_9))))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-83)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) (unsigned short)62219)) ? (((/* implicit */int) (unsigned short)1991)) : (((/* implicit */int) arr_2 [i_0] [(short)8])));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (((-(3766378499U))) >> (((((/* implicit */int) (unsigned char)248)) - (227)))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] &= ((/* implicit */unsigned short) ((signed char) ((arr_4 [i_1]) % (arr_4 [i_1]))));
        arr_8 [i_1] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4852203863458951748LL)) ? (arr_4 [i_1]) : (arr_4 [i_1])))) ? (arr_4 [i_1]) : (((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3299)))))));
    }
}
