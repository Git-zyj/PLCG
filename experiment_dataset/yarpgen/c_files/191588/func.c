/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191588
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
    var_13 *= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) != ((~(((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) (((+(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) << (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_1)))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (var_4))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 1]))))) ? ((~(var_4))) : ((+(var_4))))) | (((/* implicit */unsigned long long int) (+(((arr_0 [i_0] [i_0 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
        var_16 = ((/* implicit */long long int) min((((((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_12)))) + (2147483647))) << (((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) + (var_1))) - (10240121476031975905ULL))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (var_1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 + 1])), (var_12))))))));
        var_17 *= ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_9)) : (var_1))))))), (arr_1 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) (!((((!(((/* implicit */_Bool) arr_1 [i_1])))) && ((!(((/* implicit */_Bool) var_1))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_1]) >> (((var_6) - (2521856713195678691ULL)))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))))))) ? (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) max((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))))));
    }
    var_19 = ((/* implicit */unsigned char) (+((+(var_1)))));
}
