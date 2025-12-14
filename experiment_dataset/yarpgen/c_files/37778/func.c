/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37778
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)65535));
                                arr_14 [i_1] [i_1] [i_4] [i_3 + 1] [i_0] [(short)18] = ((/* implicit */short) (-(var_2)));
                                var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [9] [i_1] [i_2 - 1] [i_0]))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned int) (_Bool)1)))));
                    arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2]))));
                    var_17 = ((/* implicit */unsigned short) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)103)) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_3))) : (((/* implicit */unsigned long long int) ((var_10) / (var_10))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        var_18 ^= var_11;
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 860849668)) : (var_7))))))));
    }
    var_20 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((short) var_9))) ? (((var_8) / (var_7))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (var_6)))))));
    var_21 *= ((/* implicit */signed char) var_0);
    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)250));
}
