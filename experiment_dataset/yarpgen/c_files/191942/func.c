/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191942
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */int) var_17)) & (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_15)))))))));
        var_19 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) var_1)))), (((((/* implicit */int) (unsigned char)0)) << (((((((/* implicit */_Bool) (short)-28157)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)20097)))) + (4730)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((var_0), (var_15)))))) : (min((var_8), (((/* implicit */long long int) var_4))))));
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_2] [i_4] [i_4] [(unsigned short)6] [i_1] = ((/* implicit */short) min((6520435245118669036ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) & (11926308828590882563ULL)))) ? (((var_12) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((var_2) - (1003347573))))))));
                                arr_17 [i_4] [i_4] = max((((/* implicit */unsigned long long int) ((short) -6844853895322410613LL))), (10697376265097053388ULL));
                                arr_18 [i_1] [(unsigned char)4] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)148)), (-6844853895322410589LL)));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) min((var_22), (var_9)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_23 = ((/* implicit */long long int) (((-((-(var_2))))) % (((/* implicit */int) ((short) (unsigned char)115)))));
        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) (unsigned char)107))))))) ? (((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) 6844853895322410622LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27383))) : (-6844853895322410625LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) % (-6844853895322410622LL))))));
    }
}
