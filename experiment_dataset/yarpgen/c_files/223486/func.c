/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223486
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
    var_16 = ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) + ((-(((((/* implicit */long long int) var_12)) + (var_1)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_4] [(short)9] = ((/* implicit */short) ((((/* implicit */int) (((+(var_1))) > (((/* implicit */long long int) ((var_6) << (((((/* implicit */int) var_7)) - (831))))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                                var_18 = ((/* implicit */unsigned long long int) arr_8 [(unsigned short)7] [i_4] [i_4 + 1]);
                                arr_12 [i_0] [i_4] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2U)) > (var_8))))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0] [9LL] [9LL] [12U] [1ULL] [1ULL])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) ((short) 22U));
                                arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2] = ((arr_18 [4U] [i_5] [i_2] [i_2] [1LL] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_0] [i_1] [i_2] [i_5 - 2] [i_6])))));
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5 + 2] [i_5 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_5 - 2] [i_5 + 2])))))));
                                var_20 = ((((/* implicit */_Bool) 1748986820U)) && (((/* implicit */_Bool) (+(min((var_11), (var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
