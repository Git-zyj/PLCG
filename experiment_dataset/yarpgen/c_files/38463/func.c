/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38463
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
    var_16 = ((/* implicit */unsigned int) (-(var_13)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 + 2] [i_2] [i_2 + 1] [i_3])) - (((/* implicit */int) arr_7 [i_1 + 2] [i_2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_3]))) : (arr_8 [i_1 + 1] [i_1] [i_3] [i_0])))));
                                var_19 *= ((/* implicit */signed char) (+(((unsigned long long int) (~(var_8))))));
                                arr_14 [i_3] [i_3] [i_2] [i_2] [i_1 + 1] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_2] [i_3])) ? (var_13) : (min((var_13), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_2 + 3] [i_3] [i_4] [i_2] [i_2]))))))));
                                arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1245284922)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : ((+(0ULL))))) == (((/* implicit */unsigned long long int) var_8))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1 + 1] [i_1] [i_0] [i_0] [i_0])) : (var_13)))))) ? (((((((/* implicit */_Bool) (short)21668)) ? (696208601427893078ULL) : (((/* implicit */unsigned long long int) 1881394717U)))) << (((((int) var_14)) + (129))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_1 + 2])))));
                }
            } 
        } 
    } 
}
