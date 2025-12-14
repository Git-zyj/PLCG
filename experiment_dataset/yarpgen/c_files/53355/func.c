/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53355
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                            arr_10 [i_2] [i_3] [2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14587473101954808322ULL))))))));
                            arr_11 [i_0] [(short)7] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((arr_5 [i_3] [i_0]), (10794616261384529810ULL))) >= (((/* implicit */unsigned long long int) 2133813617))))) >= ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10117))) < (0U))))))));
                            var_16 = ((/* implicit */_Bool) ((max((arr_5 [i_0] [i_2]), (((/* implicit */unsigned long long int) -148557971)))) | (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)1631)))) + (2147483647))) << ((((+(2867229580876695396ULL))) - (2867229580876695396ULL))))))));
                            arr_12 [i_0] [(signed char)10] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) (short)-30174)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26855))) : (3455336520U))) >> (((((/* implicit */int) max(((short)32767), (((/* implicit */short) (unsigned char)44))))) - (32751))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (-(14587473101954808322ULL)))) ? (max((3455336520U), (((/* implicit */unsigned int) (unsigned char)234)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)20] [i_0] [i_0])))))))));
                var_18 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)11334));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_3);
}
