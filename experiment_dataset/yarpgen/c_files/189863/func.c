/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189863
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
    var_11 = ((/* implicit */signed char) (short)-8952);
    var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) min(((signed char)73), ((signed char)52))))), (var_7)));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((((/* implicit */int) (short)22131)) % (((/* implicit */int) (signed char)-103)))))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [(unsigned short)19] [i_0] = (+(((/* implicit */int) max(((signed char)12), (((/* implicit */signed char) (_Bool)1))))));
                    var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-22127)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((/* implicit */unsigned int) arr_2 [i_2] [i_0]))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_2]))))) | ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [21U])) : (((/* implicit */int) var_4)))))))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1 + 2] [i_0] [i_0 - 1])) & ((-(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) min((((var_0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))), (((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0]))))))) : (max((((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_2] [i_1] [i_0] [4LL] [15U])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))))), (((/* implicit */unsigned long long int) (signed char)-1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((((((/* implicit */int) (short)22126)) >= (((/* implicit */int) (signed char)14)))) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)-103))))));
}
