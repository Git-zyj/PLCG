/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32702
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
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0 - 4])))))))));
        var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)201))))) / (((/* implicit */int) var_3)))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_1] [i_1]))), (var_2))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36805)) ? (((/* implicit */int) (unsigned short)56222)) : (-798224303))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)192)) < (((/* implicit */int) var_5))))), ((unsigned short)65519)))) | (((/* implicit */int) ((((unsigned long long int) var_9)) == (((/* implicit */unsigned long long int) max((var_10), (var_12)))))))));
        var_18 -= ((/* implicit */unsigned long long int) (short)19069);
        arr_5 [i_1] [i_1 - 3] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (0ULL)));
    }
    var_19 -= ((/* implicit */_Bool) var_10);
    var_20 -= ((/* implicit */short) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */unsigned long long int) var_12)) + (var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)16)))) + ((-(((/* implicit */int) var_8)))))))));
}
