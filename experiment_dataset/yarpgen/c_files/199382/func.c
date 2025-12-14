/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199382
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
    var_20 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (unsigned short)3))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned char) ((var_1) % (((/* implicit */long long int) ((/* implicit */int) var_14))))))) : (((((/* implicit */int) var_17)) - (((((/* implicit */_Bool) 3764388515U)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)65512))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_3 [i_1]))) ? (((((/* implicit */_Bool) -49203397)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (unsigned short)3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) (short)-11689)))))))) && (((arr_3 [i_1]) >= (arr_3 [i_1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_2] [i_2 - 2] [i_0] [i_2 + 1]);
                            var_23 = ((/* implicit */unsigned short) (+((-(((((-1498720624) + (2147483647))) << (((((/* implicit */int) (unsigned short)64171)) - (64171)))))))));
                            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) | ((~(((((/* implicit */unsigned long long int) var_4)) & (arr_8 [i_0] [i_1] [i_1] [i_1] [i_0] [(short)9])))))));
                arr_11 [i_1] [i_0] [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) >= (arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_4)) : (var_15)))))) : (((unsigned long long int) max((((/* implicit */signed char) arr_6 [i_0] [i_1])), ((signed char)-74)))));
                var_26 = ((/* implicit */signed char) (-(((var_18) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
}
