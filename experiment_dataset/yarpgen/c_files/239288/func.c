/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239288
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
    var_10 = ((/* implicit */long long int) 13215713432188185098ULL);
    var_11 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (arr_1 [i_0])))) % (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)7798)), (arr_1 [i_0])))), (max((((/* implicit */unsigned long long int) 2433234900U)), (var_6)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_0);
        var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = 2292426155U;
        arr_8 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) var_5)) ^ (max((arr_1 [(unsigned char)12]), (arr_0 [i_1] [i_1]))))), (((/* implicit */long long int) ((unsigned int) var_0)))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_1] [i_1]) >= (arr_5 [i_1] [i_1]))))) : (((((/* implicit */unsigned long long int) arr_5 [i_1] [6LL])) % (var_6))))))));
    }
    for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) 15848801189664744432ULL))), (arr_10 [i_2 - 1]))))));
        var_16 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
    }
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) var_8))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_8)), ((short)32767))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_6))));
}
