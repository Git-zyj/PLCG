/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219491
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [(_Bool)1] [i_2] [i_1] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)967)) ? (-22LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) 2088960U)) : (18446744073709551615ULL)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */int) (unsigned short)38461)) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                    var_15 = ((/* implicit */unsigned char) var_11);
                    arr_10 [i_0] [i_1 + 1] [i_1] [i_2] = ((/* implicit */long long int) max((arr_3 [i_2]), (((/* implicit */unsigned long long int) ((((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)967))))))))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned char) ((var_4) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (-912300145)))), (0ULL))) : (1ULL)));
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28597)))))));
}
