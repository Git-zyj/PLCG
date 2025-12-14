/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36097
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    var_19 = ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_4 [i_1] [i_1 - 1]))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_2 + 2])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(min((arr_10 [i_0] [i_1 + 2] [i_2 - 1] [i_3]), (1982313848U)))));
                                var_21 = ((/* implicit */signed char) 9223372036854775804ULL);
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_1] [i_1] [i_1] [(unsigned short)2] [(unsigned short)2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((576251577U), (576251558U)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) : (((2325479402804547364ULL) * (((/* implicit */unsigned long long int) 1982313848U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31046))) != (288225978105200640ULL)))))));
            }
        } 
    } 
    var_23 &= ((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_5))) ^ (((/* implicit */unsigned long long int) var_11)));
    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_11), (var_2))), (((/* implicit */unsigned int) ((short) var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) - (288225978105200640ULL)))) ? ((+(15U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_10))))))));
}
