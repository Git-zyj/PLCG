/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236629
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_3)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (~(var_12))))));
        var_16 = ((/* implicit */unsigned int) ((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_14 [i_1] [i_2] [(unsigned short)22] [16U] [i_3] [i_2] &= ((/* implicit */_Bool) (+(1733865804U)));
                        arr_15 [(signed char)3] [i_4] [i_3] = (-(var_10));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */short) max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_7 [i_1]))), ((+(((((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1])) + (4294967282U)))))));
    }
    var_18 *= ((/* implicit */unsigned long long int) ((var_5) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_13)) : (13U))))));
    var_19 = ((/* implicit */unsigned int) var_0);
}
