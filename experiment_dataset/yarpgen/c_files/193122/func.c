/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193122
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 253952U)) ? (((/* implicit */int) (signed char)-17)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-7434)) : (((/* implicit */int) (short)7434))))))) - (((((/* implicit */_Bool) 5391770910312363106ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4080))) : (2166875569U)))));
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (((var_6) ? (3852629436U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)7434))) : (3341077543869617702LL)));
        arr_8 [9] = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)49277))));
    }
    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3961595629U)) ? (((/* implicit */int) (short)-5988)) : (((/* implicit */int) (signed char)-55))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 2147483392U))));
        var_19 = ((/* implicit */unsigned int) ((short) 16744448));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3625310296U)) == (7532004857903267898ULL)));
    }
    var_21 = ((/* implicit */unsigned short) var_12);
    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
    var_23 += ((/* implicit */unsigned int) (short)7422);
}
