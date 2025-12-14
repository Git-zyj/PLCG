/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207778
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2093105244)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4)))))));
                        var_15 = ((/* implicit */int) ((unsigned char) (+((+(((/* implicit */int) (short)31498)))))));
                        var_16 = ((/* implicit */short) var_6);
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (short)-29471))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((((-(((/* implicit */int) var_9)))) * (((/* implicit */int) (unsigned short)42117)))) : (((/* implicit */int) ((unsigned short) arr_4 [i_0])))));
                            var_18 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((unsigned short) arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [i_4 + 3]))))));
                            var_19 = ((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_4] [i_3] [i_2] [i_0]));
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_0 [i_0 - 1])) : (5U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519)))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_16 [i_0 - 1] [i_5] [(_Bool)1] [i_5] [i_5] [i_0 - 1] |= ((/* implicit */signed char) (unsigned short)9358);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) : (var_10)));
                    }
                }
            } 
        } 
    } 
    var_22 = var_4;
}
