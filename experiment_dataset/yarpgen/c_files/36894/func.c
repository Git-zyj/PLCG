/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36894
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
    var_15 = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (var_4))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-13))))) | (((((/* implicit */long long int) ((/* implicit */int) (short)-20373))) & (var_12)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) >= (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_3] [i_4] [i_2] [i_2])))))))) : (((((/* implicit */int) ((_Bool) var_6))) << ((((+(var_3))) + (2059411678)))))));
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)-16)) == (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_2] [i_2] [i_5 - 4] [i_6] = ((/* implicit */unsigned long long int) var_3);
                                var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(var_14))))))));
                                arr_19 [i_1] [i_2] = ((/* implicit */signed char) var_8);
                                arr_20 [i_6] [i_2] [i_2] [i_0] [i_2] [i_2] [i_0] = var_4;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) + (((arr_5 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)14] [i_1] [i_2] [i_2]))))))) >= (((/* implicit */unsigned long long int) ((long long int) 3632786785U)))));
                }
            } 
        } 
    } 
}
