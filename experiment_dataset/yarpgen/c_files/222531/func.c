/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222531
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) 18446744073709551602ULL)) ? (18446744073709551598ULL) : (14ULL))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)45151)) : (((/* implicit */int) (short)478)))))))));
                var_15 |= ((/* implicit */int) (+(0ULL)));
                var_16 *= ((/* implicit */short) (-(((/* implicit */int) var_10))));
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)41039)));
                var_18 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) 18446744073709551602ULL)))) ? (max((max((((/* implicit */unsigned long long int) 632823274)), (15ULL))), (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1] [i_0]) >= (((/* implicit */int) arr_2 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) && (((/* implicit */_Bool) ((signed char) (_Bool)1)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (signed char)1))));
    var_20 = ((long long int) var_1);
}
