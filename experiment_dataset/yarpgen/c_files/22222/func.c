/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22222
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_11)))) > (((((/* implicit */_Bool) (unsigned short)43914)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)32763)))))))) : (var_15)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [10ULL] = var_4;
                    var_21 = ((/* implicit */unsigned long long int) 4971360965626363922LL);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (unsigned short)43911)), (max((((/* implicit */unsigned long long int) (unsigned short)43914)), (arr_3 [i_0] [19] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21620)) || (((/* implicit */_Bool) arr_5 [i_0])))))));
    }
}
