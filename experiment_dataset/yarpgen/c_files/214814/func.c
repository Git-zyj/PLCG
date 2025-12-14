/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214814
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2]))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_15))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) | (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [12ULL])) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)23])) : (((/* implicit */int) (short)30714))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_14)) : (var_1)))))));
                            arr_13 [i_0] [i_0] [i_0] [20] = ((/* implicit */short) ((unsigned short) ((((((/* implicit */int) arr_4 [i_2] [i_3])) / (((/* implicit */int) arr_3 [i_1])))) == (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 2] [i_0])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-30730)) ? (-2109478257) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (-(var_5)));
    var_23 = ((/* implicit */signed char) max((var_3), (((/* implicit */short) var_12))));
    var_24 = ((/* implicit */signed char) (-(((unsigned long long int) (+(((/* implicit */int) var_12)))))));
}
