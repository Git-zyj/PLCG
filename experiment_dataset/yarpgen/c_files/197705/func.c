/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197705
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [(signed char)2]))) : (((/* implicit */long long int) max((((/* implicit */int) var_8)), (-1886392703))))))) ? (((/* implicit */int) ((unsigned short) max((var_9), (var_15))))) : ((((((~(var_14))) + (2147483647))) << (((max((((/* implicit */long long int) var_13)), (9179629557760969049LL))) - (9179629557760969049LL)))))));
        arr_3 [i_0 + 3] = ((/* implicit */long long int) ((unsigned long long int) max((((6025295397200413014LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((9179629557760969049LL) >= (-9179629557760969049LL))))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) var_14))) == (min((((/* implicit */int) arr_7 [i_1] [i_1])), (var_0)))))) : (((/* implicit */int) var_4))));
        arr_9 [i_1 + 1] = ((/* implicit */_Bool) (+(min(((~(var_1))), (((var_15) + (((/* implicit */long long int) arr_4 [i_1]))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
    {
        arr_12 [(short)13] = var_12;
        arr_13 [i_2] = ((/* implicit */int) min(((((!(((/* implicit */_Bool) -259278350373330646LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (var_1))), (((/* implicit */long long int) ((short) max((var_16), (9179629557760969049LL)))))));
        arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) & (var_5)))) ? (((/* implicit */long long int) ((int) var_2))) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) : (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_7)) : (-9179629557760969063LL))) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_11 [i_2 - 3]))))) ? (((/* implicit */unsigned long long int) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))))) : (((unsigned long long int) var_0))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */short) arr_11 [i_2])), (arr_10 [i_2 - 1])))), (min((986930439U), (((/* implicit */unsigned int) var_10))))))) : (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_14)) : (var_16))), (min((9179629557760969047LL), (((/* implicit */long long int) (signed char)91))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) 9179629557760969062LL);
}
