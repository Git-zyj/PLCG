/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229082
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 &= ((/* implicit */int) 0U);
                var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-30114)) : (((/* implicit */int) (unsigned short)16835))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3826744938990013557LL) != (((/* implicit */long long int) 3955644979U)))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9149)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_11 [10] [i_2] [i_3] [i_3 - 3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_3 - 4])) : (((/* implicit */int) arr_1 [i_3 - 3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 - 3])) && (((/* implicit */_Bool) (signed char)38))))) : (((/* implicit */int) arr_1 [i_3 - 3]))));
                                arr_12 [i_4] [(short)8] [i_2] [i_4] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]))) & (((((/* implicit */_Bool) (unsigned char)75)) ? (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6858))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23658))) != (4294967295U)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 *= ((/* implicit */short) 4294967295U);
}
