/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206152
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
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = arr_0 [i_0] [i_1];
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_0 [i_0] [i_2]))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */short) var_3)))))) : (max((((/* implicit */unsigned int) var_11)), (max((((/* implicit */unsigned int) (unsigned short)62640)), (var_9)))))));
    var_20 -= ((/* implicit */unsigned char) var_10);
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)3)))))));
}
