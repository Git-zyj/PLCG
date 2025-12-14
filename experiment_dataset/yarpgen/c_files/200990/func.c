/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200990
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */_Bool) (unsigned short)43222)) ? (-152570633) : (152570633)))), (((/* implicit */unsigned int) ((((int) 803028197U)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0))))))))));
                    arr_11 [i_2] [i_0] [i_0] = ((/* implicit */short) var_0);
                    var_16 = ((/* implicit */int) max((min((((/* implicit */long long int) var_1)), (max((((/* implicit */long long int) (unsigned short)57909)), (var_2))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_9))))) * (((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_7);
}
