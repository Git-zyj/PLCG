/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/416
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
    var_20 = ((/* implicit */unsigned int) var_7);
    var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(var_12)))) ? (var_13) : (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_3)) != (((/* implicit */int) var_3)))) || (((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((var_17) + (((/* implicit */long long int) var_15))))) ? ((+(var_11))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        var_22 = ((/* implicit */short) var_10);
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) ((var_8) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_9)))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (((((+(var_12))) ^ (((/* implicit */unsigned int) (-(var_15)))))) + (var_19)));
            arr_7 [11] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_13))))) : (((/* implicit */unsigned long long int) (+(2006090286U))))));
            var_24 |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (var_19) : (var_19)))));
        }
        arr_13 [i_0] [i_0] |= ((/* implicit */unsigned char) (~(((var_8) ? (var_11) : (var_11)))));
    }
    var_26 |= ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_12)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_5))))) : (((var_19) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
}
