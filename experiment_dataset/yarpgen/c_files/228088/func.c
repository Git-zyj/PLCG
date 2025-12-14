/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228088
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-401319380) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (var_6))))))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_9))))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (8U)))))));
    var_15 = ((/* implicit */unsigned long long int) min((-3LL), (((/* implicit */long long int) (_Bool)0))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) -3592047888960285779LL);
        var_17 += ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) 331174719U)), (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >= (min((((((/* implicit */unsigned long long int) var_7)) + (16957033057680078530ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (1198691788U))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_0 [i_1])))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [(short)17])) : (((/* implicit */int) arr_4 [i_1]))))) * (var_6)));
        arr_7 [i_1] = ((/* implicit */signed char) var_0);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2])) % (((/* implicit */int) arr_0 [i_2]))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [(unsigned char)7] [i_3] [(unsigned char)7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)10)) ? (var_0) : (((/* implicit */int) (unsigned char)184))))) % (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned int) var_0)) : (var_6)))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] = (+(((/* implicit */int) arr_3 [i_3 + 1])));
                        var_20 ^= ((/* implicit */short) arr_5 [i_3 + 1]);
                    }
                    var_21 = ((/* implicit */unsigned int) var_1);
                    arr_20 [i_4] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_3 - 2] [i_3 - 3] [i_3] [i_3]))));
                    arr_21 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) var_10);
                }
            } 
        } 
    }
}
