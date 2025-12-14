/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233389
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10196)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42231))) : (5496949683357255261LL)))) ? (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)23302)))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)42243)) : (((/* implicit */int) (signed char)0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned short)23303))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))) : (0LL)))) : (((((/* implicit */_Bool) (signed char)-3)) ? (11534099215731170004ULL) : (((/* implicit */unsigned long long int) 2835144543U))))));
                                var_18 += ((((/* implicit */_Bool) 13450604840361530293ULL)) ? (2575718617U) : (4294967295U));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28672)) ? (((((/* implicit */_Bool) 1073739776U)) ? (((/* implicit */unsigned long long int) 4557956012381583895LL)) : (11534099215731170004ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15453)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)42245)))))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)30029)) ? (4ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3926)) ? (((/* implicit */int) (unsigned short)36856)) : (((/* implicit */int) (signed char)91)))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 706278950))));
                        var_21 ^= ((/* implicit */int) (signed char)-6);
                    }
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned short) var_14);
}
