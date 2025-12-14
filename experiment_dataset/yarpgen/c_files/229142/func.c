/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229142
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
    var_12 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517)))))) ? (((/* implicit */int) max(((short)6), (((/* implicit */short) var_8))))) : (((((/* implicit */int) var_4)) & (((/* implicit */int) (short)16337)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) arr_8 [i_0]))))) - ((+(2404984839189515361LL)))))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((((/* implicit */_Bool) arr_4 [i_4])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))))) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_3])))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (-2147483647 - 1)))) | (((/* implicit */int) arr_5 [i_4] [i_2])))))));
                                var_14 = (short)-28378;
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)0))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_2)))) : (((/* implicit */int) var_10))));
}
