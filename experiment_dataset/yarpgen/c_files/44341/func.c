/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44341
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)1)) && (((/* implicit */_Bool) var_10))))) * (max((((((/* implicit */_Bool) 268435328U)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (signed char)33)))), ((-(((/* implicit */int) var_2))))))));
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 3338695600U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (672061740U)));
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((4026531980U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63488))))) * (((/* implicit */unsigned int) ((arr_9 [i_0] [i_1] [i_0]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)52879)))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) 4026531980U)) ? (4026531968U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2032)))))) * (max((((/* implicit */long long int) -2029385432)), ((-9223372036854775807LL - 1LL))))))));
                }
            } 
        } 
    } 
}
