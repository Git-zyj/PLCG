/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191664
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */unsigned char) ((long long int) min((arr_5 [i_1 - 1] [i_1] [i_1]), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-7705618528319834434LL))))));
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)16164))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (70976114U)))) - ((+(var_7)))))));
                            arr_13 [i_2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) var_15)), (-7405160923781651324LL))))));
                            var_17 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)16163)) ? (min((arr_3 [i_3]), (((/* implicit */long long int) 4223991175U)))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) >> (((((/* implicit */_Bool) ((unsigned int) -7405160923781651324LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)14606))))) : ((-(((/* implicit */int) (unsigned char)255))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + ((+(867504638U)))));
                        }
                    } 
                } 
                arr_14 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 8509671956208054591LL)) ? (2993942349786446847LL) : (((/* implicit */long long int) var_11)))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_20 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) ((unsigned char) var_11))))), ((+(((/* implicit */int) var_0))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_4))) & (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)10920)) ? (-961171842769385275LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */int) var_16))));
}
