/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33431
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((((/* implicit */int) (_Bool)0)) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_5))))))))));
    var_16 = ((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_13)))))) - (13401)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (arr_3 [i_4 - 3])))) ? (((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                                arr_13 [i_3] = arr_11 [i_2] [6ULL] [i_4 - 2] [i_4] [i_4 - 3];
                                var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)6))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((3889970187839990650ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_4 - 2]), (arr_3 [i_4 + 2]))))))))));
                                var_20 = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_12 [i_4 - 1] [(unsigned short)2] [i_4] [5] [i_4 - 3])) * (((/* implicit */int) arr_9 [3] [i_4] [i_4 - 2] [i_4] [3] [i_4] [i_4 - 1])))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) max((((unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])))))));
            }
        } 
    } 
}
