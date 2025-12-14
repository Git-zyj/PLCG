/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19404
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_3);
                arr_8 [i_0] = ((/* implicit */unsigned short) ((var_5) < (((/* implicit */long long int) (-(((((/* implicit */int) arr_4 [i_0])) + (2147483642))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                arr_13 [i_2] [(unsigned char)14] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32)) ? (((unsigned int) (~(((/* implicit */int) arr_12 [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (short)10215)))) : (((/* implicit */int) (short)(-32767 - 1))))))));
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) var_10);
                                var_14 *= ((/* implicit */short) (+(((unsigned int) (+(((/* implicit */int) (unsigned short)32)))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_8))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)19988))) < (((/* implicit */int) ((short) 3673375414U)))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (var_8)))));
}
