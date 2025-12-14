/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226075
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
    var_14 = ((/* implicit */unsigned char) 8U);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) arr_2 [(short)15] [i_1] [i_1]);
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4294967289U) : (4252903341U)))))) ? (((/* implicit */int) ((unsigned short) (short)8191))) : (((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_17 *= ((((/* implicit */int) (unsigned char)114)) != (((/* implicit */int) var_12)));
    var_18 *= ((/* implicit */short) (((((+(((/* implicit */int) var_13)))) == (((/* implicit */int) ((unsigned char) var_6))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)27123)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)8191)))) == (((/* implicit */int) var_4))))) : (((/* implicit */int) var_11))));
}
