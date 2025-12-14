/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212443
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) max((var_5), (((/* implicit */short) var_2)))))))) ? (((/* implicit */unsigned long long int) var_7)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (var_4)))), (max((((/* implicit */unsigned long long int) var_7)), (var_3)))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)126), (((/* implicit */unsigned char) (signed char)0))))) ? (max((((/* implicit */long long int) var_11)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_2] [i_1] [(short)2] = ((/* implicit */long long int) var_0);
                        arr_19 [i_4] [i_1] [i_1] [i_1] [i_1] &= var_5;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */short) min((var_2), (var_2)))), (min((var_11), (((/* implicit */short) var_2))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_9)))) : (((((/* implicit */_Bool) var_11)) ? (var_0) : (var_12)))));
        arr_22 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (var_10)))), (max((var_3), (((/* implicit */unsigned long long int) var_4))))));
    }
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    var_20 -= ((/* implicit */short) var_3);
}
