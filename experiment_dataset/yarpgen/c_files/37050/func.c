/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37050
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13)))) : ((~(var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_6)) ^ (var_9))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_20 *= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_11))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_12))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) != (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))));
                        }
                    } 
                } 
                arr_10 [(signed char)16] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) var_3)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (var_12)))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned int) var_11);
}
