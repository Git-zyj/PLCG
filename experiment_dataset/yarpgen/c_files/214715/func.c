/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214715
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) var_10);
        var_14 += arr_1 [i_0];
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((long long int) (-(var_7))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) ((var_6) - (((/* implicit */long long int) 4259939966U))));
                    var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_7)) : (2521812048U)))) : (10979421826831694052ULL)));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [8U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_17 *= ((/* implicit */unsigned long long int) ((int) var_2));
    }
    var_18 |= ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14191))))))))));
}
