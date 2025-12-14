/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212687
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
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)30170)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61948)))))))) ? ((+(((unsigned long long int) 11851656677651763330ULL)))) : (((/* implicit */unsigned long long int) max((min((arr_5 [i_2] [i_2] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1] [i_2 + 1]))), (((/* implicit */int) arr_0 [(unsigned char)9] [i_1])))))));
                    arr_8 [i_2] = ((/* implicit */long long int) (unsigned short)0);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) ((var_16) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))), ((+(6354437805073347668LL)))));
}
