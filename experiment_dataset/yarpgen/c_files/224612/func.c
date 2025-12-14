/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224612
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 472728309)) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_8)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (((2797290864460812944LL) / (2797290864460812944LL)))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min(((+(-2797290864460812936LL))), (((/* implicit */long long int) min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) (unsigned char)119))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (var_3)))), (max((arr_1 [i_0]), (((/* implicit */long long int) var_2))))));
        var_20 = ((/* implicit */unsigned short) (+(((int) (unsigned short)53927))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((short) ((arr_3 [i_1]) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_1] [1LL])) && (((/* implicit */_Bool) var_11)))), (var_6))))));
        arr_10 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) 6285744965976561762LL))), (max((-2797290864460812942LL), (((/* implicit */long long int) (short)30877))))));
        var_21 = ((/* implicit */short) (-(arr_7 [(_Bool)1] [i_1])));
    }
    var_22 &= ((/* implicit */short) var_15);
}
