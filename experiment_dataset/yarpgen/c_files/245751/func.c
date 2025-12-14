/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245751
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((_Bool) (unsigned short)0)) ? ((+(((/* implicit */int) (unsigned char)0)))) : ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_5 [11LL] = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)245))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)234))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_9 [(unsigned short)9] = ((unsigned char) (!((_Bool)1)));
        arr_10 [i_1] = ((/* implicit */unsigned short) arr_1 [i_1]);
        var_14 += ((/* implicit */unsigned short) max((((/* implicit */unsigned char) max((var_6), (arr_2 [i_1] [i_1])))), ((unsigned char)87)));
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((((/* implicit */int) var_6)) & (((/* implicit */int) (short)-31802)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_12))))))) | (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_1 [i_1])))))));
        arr_11 [i_1] = ((/* implicit */unsigned short) (~(9223372036854775807LL)));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((max((var_7), (var_0))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) var_3)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_13))))));
}
