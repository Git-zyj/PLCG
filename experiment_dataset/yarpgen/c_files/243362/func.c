/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243362
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
    var_20 = ((long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
    var_21 = ((/* implicit */unsigned short) var_19);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (short)-15581);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)15561)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22191))) : ((-((-(15161833534189262238ULL)))))));
                var_23 *= ((/* implicit */short) arr_3 [6U]);
            }
        } 
    } 
}
