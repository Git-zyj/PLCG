/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204532
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned short)10] [(unsigned short)10] [i_2] [i_2] = ((/* implicit */unsigned short) -6729754691235463580LL);
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)49919))));
                    arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_5)), (arr_2 [(short)3] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -459052560)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned short)15624)))))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15616))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (arr_6 [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (4294967295U)));
}
