/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239256
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = (~(max((((((/* implicit */_Bool) 1152921504606846976LL)) ? (3596293745689589588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))), (((((/* implicit */_Bool) 3596293745689589588ULL)) ? (14850450328019962034ULL) : (14850450328019962044ULL))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((min((-2633259568978231571LL), (((/* implicit */long long int) (unsigned char)124)))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) - (arr_2 [i_2]))))) : (((((/* implicit */_Bool) 14850450328019962035ULL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)62))))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551615ULL)))) ? (((3596293745689589590ULL) << (((((/* implicit */int) (unsigned char)71)) - (62))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)76)))))))));
    }
    var_20 = (-(max((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (14850450328019962035ULL))), (((((/* implicit */_Bool) 14850450328019962041ULL)) ? (14850450328019962041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) -4181556348443698999LL)) ? (var_14) : (3ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (3929895330689933440LL)))) || (((/* implicit */_Bool) ((var_9) / (3929895330689933427LL)))))))))))));
    var_22 = ((/* implicit */short) var_3);
}
