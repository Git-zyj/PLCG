/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28946
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)20357)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) ^ (17668632515158902344ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (min((((/* implicit */long long int) (unsigned short)21657)), (var_6)))))));
    var_18 |= ((/* implicit */signed char) ((max((((((/* implicit */long long int) var_10)) >= (var_6))), (((((/* implicit */_Bool) (unsigned short)61532)) && (((/* implicit */_Bool) var_3)))))) ? (((((min((var_6), (((/* implicit */long long int) (short)32765)))) + (9223372036854775807LL))) >> (((min((var_1), (((/* implicit */int) var_15)))) + (1460007517))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) : (((unsigned int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_16)) + (119))))))));
                    var_20 = ((/* implicit */long long int) var_12);
                }
            } 
        } 
        arr_7 [i_0] [i_0] = (short)32744;
    }
    var_21 = ((/* implicit */signed char) var_1);
    var_22 = ((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */unsigned int) var_1)) : (min((var_10), (((/* implicit */unsigned int) var_1)))))) - (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */signed char) var_13)))))))));
}
