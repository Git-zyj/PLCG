/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228575
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
    var_20 += ((/* implicit */signed char) ((unsigned char) ((unsigned int) ((long long int) var_15))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) var_5);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_4 [i_0])))) || (var_3)));
                    var_23 = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_3 [i_1] [i_1 + 3]))))), (((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_10)) - (167)))))))) ? (((unsigned int) ((long long int) var_1))) : ((-(arr_1 [i_0] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [(unsigned short)12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
                                arr_13 [i_0] [i_4] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_14) & (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (var_7)))) : (var_12)))));
                                var_24 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
