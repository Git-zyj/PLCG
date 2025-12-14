/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19280
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                var_17 = ((((/* implicit */_Bool) (short)24532)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1352)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) (short)-10378)) : (((/* implicit */int) (unsigned short)8192)))) : (((((/* implicit */_Bool) (short)-32747)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)34))))))) : (((((/* implicit */_Bool) -5914292484226342069LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24506))) : (-1LL))));
                var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) / (var_0))) << (((4194303U) - (4194269U))))) <= (((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((((/* implicit */_Bool) (short)480)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 3])) : (((/* implicit */int) arr_3 [i_0] [9LL] [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_15);
    var_20 -= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) var_16)))))) + (2147483647))) >> (((((/* implicit */int) var_15)) + (87)))));
}
