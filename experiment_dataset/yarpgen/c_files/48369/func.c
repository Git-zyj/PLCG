/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48369
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
    var_12 = ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-787013064827371189LL))))));
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((max((-787013064827371189LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 787013064827371189LL)) ? (((/* implicit */int) arr_1 [18ULL])) : (((/* implicit */int) arr_1 [i_0]))))))) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] |= ((/* implicit */short) var_3);
                    arr_9 [i_0] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -817250192))));
        arr_14 [i_3] [i_3] = min((arr_0 [i_3] [i_3]), (787013064827371188LL));
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_17 = ((/* implicit */long long int) (short)-1);
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? ((-(((arr_2 [i_4] [i_4] [i_4]) * (arr_2 [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_4 [i_4] [i_4])) : (arr_2 [i_4] [i_4] [i_4])))));
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        arr_21 [i_5] [i_5] = (-(-787013064827371173LL));
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [(unsigned char)1])) : (((/* implicit */int) var_5)))))) % (((((/* implicit */unsigned long long int) (+(787013064827371189LL)))) + (arr_7 [i_5])))));
        var_20 -= ((/* implicit */short) arr_20 [i_5]);
    }
}
