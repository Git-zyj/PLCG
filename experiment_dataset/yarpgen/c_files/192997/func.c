/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192997
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
    var_12 = ((/* implicit */unsigned long long int) (unsigned char)133);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_13 += ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        arr_4 [(unsigned char)3] = ((/* implicit */signed char) (-(((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) * (arr_6 [i_1])))) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)102)))), (((/* implicit */int) (signed char)108))));
        var_15 = ((/* implicit */unsigned char) max((4294967285U), (((((/* implicit */_Bool) 4294967278U)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((11U) / ((~(var_10)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) + (arr_7 [i_1] [i_1])))))) : (max((arr_6 [i_1]), (((/* implicit */unsigned long long int) ((arr_5 [i_1]) & (((/* implicit */int) arr_0 [i_1])))))))));
    }
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (var_6)))), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
