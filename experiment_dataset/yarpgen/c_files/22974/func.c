/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22974
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
    var_19 = ((/* implicit */int) max((18446744073709551603ULL), (max((min((((/* implicit */unsigned long long int) (unsigned short)1844)), (18446744073709551603ULL))), (max((((/* implicit */unsigned long long int) 2110606390)), (7ULL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) 2747996453U);
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) 2571718312455026308LL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) ^ (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) -1609320353135137111LL)) : (18446744073709551604ULL)))));
                    var_21 *= ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (18446744073709551603ULL))) % (((/* implicit */unsigned long long int) 1546970852U)))));
                    var_22 = ((/* implicit */unsigned short) max((((((18446744073709551603ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) & (((/* implicit */int) (unsigned char)23))))) : (1546970843U))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) 1378377915)) / (1546970838U)))))));
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    arr_12 [i_3] [i_3 + 1] [0ULL] [i_3] = ((/* implicit */unsigned short) ((unsigned char) 1546970837U));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0 + 2] [i_3] [i_0 - 4] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42769))) <= (1908038101U)));
                                arr_19 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) 18446744073709551606ULL));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1546970872U)) ? (0ULL) : (((/* implicit */unsigned long long int) 2747996436U))));
                }
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 1546970857U))));
                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (short)15104))) / (5628086289349448625LL))), (((/* implicit */long long int) min((1546970843U), (1546970842U))))))) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2073021865U))))));
            }
        } 
    } 
    var_26 = var_13;
}
