/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248417
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
    var_14 |= ((/* implicit */_Bool) ((short) (+(((/* implicit */int) ((short) var_8))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32757))));
                var_16 += ((/* implicit */signed char) max((((arr_0 [i_1]) & (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */long long int) 1384294621)))) : (((/* implicit */long long int) ((arr_3 [i_1]) / (((/* implicit */int) (_Bool)1))))))))));
                var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : ((-2147483647 - 1)))) : (((/* implicit */int) ((signed char) (signed char)-120)))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17009191142473294660ULL)) ? (((/* implicit */int) var_12)) : ((~(var_9)))));
    var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1437552931236256955ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-1LL)))), (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21799))) : (11892593021630932016ULL)))))) ? (1437552931236256935ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (1437552931236256955ULL)))) ? (min((((/* implicit */long long int) var_11)), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (var_13))))))));
}
