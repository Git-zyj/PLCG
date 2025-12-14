/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247935
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (short)32764))))) | (max((((/* implicit */unsigned int) (short)32758)), (var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((/* implicit */int) min((arr_4 [i_1] [i_1]), ((short)32767)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) 0LL))));
                                var_18 = ((/* implicit */int) ((arr_6 [i_3] [i_2]) / (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) & (arr_8 [i_0]))))))));
                                var_19 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)45059)) << (((-973635436) + (973635442)))))));
                                var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) max((-3099692470992378005LL), (6873325950695089517LL)))) ? (max((var_7), (((/* implicit */long long int) arr_5 [i_0] [i_0])))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
