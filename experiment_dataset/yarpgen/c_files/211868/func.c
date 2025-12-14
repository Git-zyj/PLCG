/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211868
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40))))) : (((/* implicit */int) arr_7 [i_0] [i_1]))))) ? ((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)6372)))))) : (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0])))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_8 [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0])))))))) : (18446744073709551615ULL)));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15702015358029263235ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [8LL] [8LL])) : (((/* implicit */int) (short)-29726))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (14998736966548790332ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1]))))))) : (((/* implicit */unsigned long long int) (-(arr_8 [i_1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_10);
    var_22 &= var_12;
}
