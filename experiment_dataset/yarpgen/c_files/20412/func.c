/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20412
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) (-2147483647 - 1)))), (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((unsigned int) (unsigned short)1640))) ? (((((/* implicit */unsigned long long int) var_8)) & (16942522750351168796ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((int) 4008928873U)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_17 *= ((/* implicit */signed char) var_14);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(var_9)));
            var_18 ^= ((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)63895)) : (((/* implicit */int) (_Bool)0))))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_19 ^= ((/* implicit */unsigned char) (unsigned short)1640);
                var_20 = ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_1])));
            }
        }
        var_21 = (short)-1;
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_2);
        arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) 884533228)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1640))) : (((((/* implicit */_Bool) 8402808810899774810ULL)) ? (var_1) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3])))));
    }
    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) & (((/* implicit */int) (unsigned char)255)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_23 = ((/* implicit */_Bool) var_0);
}
