/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215251
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2073274539U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (2633707677U)))) ? (max((arr_5 [17LL] [17LL] [i_2] [i_2 + 3]), (var_0))) : (((((/* implicit */_Bool) 3159731273U)) ? (var_2) : (var_4)))))) ? (min((((((/* implicit */_Bool) 4294967274U)) ? (2073274559U) : (2221692757U))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) arr_6 [i_0] [(unsigned short)7] [(unsigned short)7] [(_Bool)0]))))))) : (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_4])) ? (((22U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_11 [i_4] [(unsigned short)18])) : (((/* implicit */int) var_15)))))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((7651740289853589984LL) | (((/* implicit */long long int) 21U)))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3] [i_4])) > (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1])))))))) && (((/* implicit */_Bool) min((min((arr_0 [i_3]), (((/* implicit */long long int) arr_11 [i_0] [i_1])))), (((((arr_8 [8LL] [i_1] [8LL]) + (9223372036854775807LL))) >> (((2563419372U) - (2563419341U))))))))));
                            }
                        } 
                    } 
                } 
                var_18 -= ((/* implicit */unsigned short) ((((min((5640409826141260236LL), (((/* implicit */long long int) 0U)))) | (((/* implicit */long long int) var_4)))) <= (((-6675558341416034170LL) / (((/* implicit */long long int) 2563419372U))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_10)))) ? (((/* implicit */long long int) ((var_0) & (((/* implicit */unsigned int) var_8))))) : (max((((/* implicit */long long int) var_14)), (-3745402928196355994LL))))), (min((((/* implicit */long long int) 0U)), (9223372036854775807LL)))));
}
