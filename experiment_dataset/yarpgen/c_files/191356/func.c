/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191356
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
    var_17 = ((/* implicit */int) var_12);
    var_18 = var_1;
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_9))));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) ((signed char) var_4)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_21 = ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) arr_1 [21] [i_1])), (arr_3 [i_0]))))) ? (max((((/* implicit */int) (unsigned char)115)), (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_15)));
                var_22 = ((/* implicit */short) var_2);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_12) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))))));
                var_24 |= ((/* implicit */unsigned char) (_Bool)1);
            }
            arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) : (((long long int) ((arr_11 [i_0] [i_0] [(unsigned short)3] [i_0]) ? (((/* implicit */int) (unsigned short)42188)) : (((/* implicit */int) var_9)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned int) arr_1 [i_1] [14])))));
                arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 33285996544ULL)) ? (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (1700009724616082868ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [(unsigned short)5]))));
            }
            arr_16 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (2666373307U)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)0)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [13U] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))));
        }
        var_26 = ((/* implicit */unsigned char) 17445362280606523488ULL);
        arr_17 [21U] = ((/* implicit */_Bool) (signed char)15);
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [10U] [i_5] [4U] [i_5]))) : (arr_10 [i_5] [i_5] [i_5]))))))));
        arr_20 [8] [i_5] = ((/* implicit */unsigned char) var_12);
        var_28 = ((/* implicit */unsigned char) 5244441193056770857ULL);
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_29 = ((/* implicit */unsigned char) ((signed char) ((unsigned int) var_7)));
        var_30 = ((/* implicit */int) min((var_30), (((var_4) ? (((((/* implicit */_Bool) arr_3 [i_6])) ? (arr_3 [i_6]) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : ((+(((/* implicit */int) var_10))))))))));
    }
}
