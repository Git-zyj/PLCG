/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223145
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
    var_20 = var_2;
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))), (4294967283U)));
    var_22 ^= ((/* implicit */signed char) ((short) 7037803498887795150ULL));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                var_23 -= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) ^ (2165487553U))), (((/* implicit */unsigned int) (unsigned short)65051))));
                arr_7 [i_0] [i_0] = (i_0 % 2 == 0) ? ((~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)43))))) ? (((arr_1 [i_0]) << (((arr_4 [i_0]) - (3248894542U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 134152192U)) ? (arr_5 [i_0]) : (((/* implicit */int) (short)-9443))))))))) : ((~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)43))))) ? (((((arr_1 [i_0]) + (9223372036854775807LL))) << (((arr_4 [i_0]) - (3248894542U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 134152192U)) ? (arr_5 [i_0]) : (((/* implicit */int) (short)-9443)))))))));
            }
        } 
    } 
}
