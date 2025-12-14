/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53058
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((16635132712776295042ULL) / (((/* implicit */unsigned long long int) var_10)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126)))));
    var_13 = ((/* implicit */int) 2700691043U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((long long int) arr_0 [i_0]));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_10))))));
                        var_16 *= ((/* implicit */int) arr_7 [i_0] [(signed char)4] [i_2] [i_0]);
                        var_17 = arr_10 [i_0];
                        var_18 = ((/* implicit */long long int) 2147483647);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)49)) - ((~(-2147483642)))));
        arr_15 [i_4] = ((/* implicit */long long int) arr_10 [13LL]);
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-118)) - (((/* implicit */int) arr_1 [i_4] [i_4]))));
        arr_16 [(short)5] = ((_Bool) arr_13 [i_4] [i_4]);
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned long long int) arr_20 [i_5]);
        var_21 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [(unsigned char)0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))))));
    }
}
