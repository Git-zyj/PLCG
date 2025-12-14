/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37447
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
    var_19 = ((/* implicit */short) ((var_6) / (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) (unsigned char)91);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-17200)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [0LL]))))))));
                            arr_10 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)210)) : (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)116)) : (arr_4 [i_0])))))));
                            arr_11 [i_0] [i_1] [i_1] [8] [(short)14] |= ((/* implicit */unsigned char) arr_2 [(unsigned char)4]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)138))))))) : (var_8)));
}
