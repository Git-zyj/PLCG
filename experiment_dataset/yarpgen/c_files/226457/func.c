/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226457
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
    var_18 = var_2;
    var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) (unsigned short)45873)) ? (((unsigned int) (unsigned char)48)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (var_10)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_8)))) : (((var_11) ? (((/* implicit */int) (unsigned short)45873)) : (((/* implicit */int) (unsigned short)19659)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) 1400602501257849088LL);
                    arr_8 [i_0] [i_1] = ((unsigned short) (!(((/* implicit */_Bool) (signed char)-1))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 423496478U)) ? (((/* implicit */int) arr_5 [0LL] [i_0])) : (((/* implicit */int) (unsigned char)48))))));
    }
    for (long long int i_3 = 2; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9))))), (62))) : (((/* implicit */int) (!((_Bool)1)))));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)63439), ((unsigned short)51556)))), ((-((-(arr_7 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))))));
    }
}
