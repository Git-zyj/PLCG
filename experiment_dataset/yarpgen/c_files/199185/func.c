/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199185
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = min((((598443818U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 3]))))), (((/* implicit */unsigned int) arr_2 [i_1 + 2])));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [(unsigned char)6] [i_3] [(unsigned char)6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_0] [0LL] [i_3] [0LL])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (6286106153135449006ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_3] [(short)0] [(short)0] [(unsigned char)2] [(unsigned short)1])))))) ? (((arr_6 [i_0] [i_1] [i_2] [i_1]) << (((-5405295189658401697LL) + (5405295189658401720LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_15)))))) : (12160637920574102603ULL)));
                                var_19 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1406969779207034623ULL)))) ? (min((12160637920574102610ULL), (((/* implicit */unsigned long long int) arr_0 [2ULL])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(unsigned char)11]))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [(_Bool)0] [i_0] [i_2] [i_2]), ((signed char)-113)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_0] [(unsigned short)7] [i_2]))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+((+(((/* implicit */int) ((((/* implicit */long long int) var_8)) != (-6276626840694817992LL)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) 6286106153135449006ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_10))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_4) != (((/* implicit */long long int) var_8)))) ? (((12160637920574102605ULL) | (6286106153135449006ULL))) : ((-(4544768074674279308ULL)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) (unsigned short)48724)))));
}
