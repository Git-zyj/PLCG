/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231543
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((short) var_16))))) : (((((/* implicit */_Bool) ((int) var_18))) ? (((unsigned int) var_14)) : (var_18)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) (signed char)-92)) ? (444125245U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (min((var_14), (((/* implicit */long long int) var_1)))))))));
                            var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_18))))) && (((/* implicit */_Bool) var_9)))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16)))) >= (min((var_12), (((/* implicit */long long int) var_18))))))));
                        }
                    } 
                } 
                arr_10 [i_1] = ((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_5))))) / (((((/* implicit */_Bool) var_17)) ? (var_16) : (var_2))))) : (((/* implicit */long long int) ((int) var_3))));
                var_22 -= ((/* implicit */short) ((((_Bool) ((unsigned int) var_15))) ? (((/* implicit */int) ((((/* implicit */long long int) var_18)) >= (var_16)))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_9))))))));
                arr_11 [i_0 - 2] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13)))) ? (var_12) : (var_16))));
                var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((_Bool) var_14))))) & (max((((long long int) var_8)), (var_2)))));
            }
        } 
    } 
}
