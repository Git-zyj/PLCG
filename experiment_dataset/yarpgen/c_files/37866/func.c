/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37866
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
    var_13 &= ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (var_4)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163)))))));
                var_15 = ((/* implicit */unsigned char) (-(1815172691U)));
                var_16 += ((/* implicit */signed char) min((((((/* implicit */int) var_2)) << (((var_11) - (2257372284U))))), (((/* implicit */int) ((unsigned short) var_8)))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) max((((18446744073709551614ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)161)))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), ((+(min((9223372036854775807LL), (var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) 982506026061985099ULL)) && (((/* implicit */_Bool) var_9)))))))));
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) (unsigned char)75))))), ((-(var_4)))));
                var_20 = (!(((/* implicit */_Bool) (unsigned char)180)));
                var_21 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_0)), (var_4))), (((/* implicit */long long int) max(((unsigned char)86), (((/* implicit */unsigned char) (signed char)0)))))));
            }
        } 
    } 
}
