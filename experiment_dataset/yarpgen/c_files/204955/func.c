/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204955
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) var_4);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2 + 1] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_0)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [10ULL] [i_3] [i_4] [i_3])) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (signed char)10)) ? (arr_12 [(_Bool)0] [i_1 - 1]) : (arr_12 [i_0] [i_0])))))));
                                var_12 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)109)))) <= (((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_1 - 1])))));
                                var_13 = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)317)) : (((/* implicit */int) (unsigned char)127)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) == (((/* implicit */int) var_5)))) ? (1397961296205535882LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-94))) + (-1397961296205535867LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((1941836676U) - (1941836652U))))))))));
    var_15 = var_6;
    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 12335301305517183925ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (1397961296205535867LL))), (((/* implicit */long long int) var_0))));
}
