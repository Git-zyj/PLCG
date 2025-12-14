/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204836
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_11))));
        var_14 = max((((((/* implicit */_Bool) ((var_12) >> (((((/* implicit */int) (unsigned char)127)) - (115)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min((var_2), (((/* implicit */short) (unsigned char)127))))))), (min((((/* implicit */int) min((var_2), (((/* implicit */short) arr_0 [i_0]))))), ((~(((/* implicit */int) var_0)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (274877898752ULL) : (((/* implicit */unsigned long long int) -4302857539002171089LL))))) && (((/* implicit */_Bool) -475534051))))), (((unsigned long long int) (~(var_1))))));
        arr_6 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [(_Bool)1]), (var_6))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))))));
        arr_7 [i_1] = ((/* implicit */int) var_1);
    }
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (-(min((((/* implicit */long long int) min(((short)235), (((/* implicit */short) var_7))))), (4302857539002171088LL))))))));
}
