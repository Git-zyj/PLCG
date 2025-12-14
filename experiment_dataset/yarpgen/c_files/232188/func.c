/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232188
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (min((var_11), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */short) var_7))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))), (((var_7) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))))), (max((-5195461579199604957LL), (((/* implicit */long long int) (short)5211)))))))));
                            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_1)) ? (5739846723157876712ULL) : (((/* implicit */unsigned long long int) -1LL))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_13)), (var_5))))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11)))))) : (((((/* implicit */_Bool) (unsigned short)37135)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744))) : (13761436569897471194ULL)))));
                        }
                    } 
                } 
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) min((var_13), (var_8)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_3)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (short)-32417))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)10914))))), (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
}
