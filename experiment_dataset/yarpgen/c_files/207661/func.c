/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207661
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
    var_18 = var_14;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)58)) | (((/* implicit */int) (_Bool)0))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((1272288628U) - (1272288619U)))))) | (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)53897)))) - (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (63U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (arr_3 [i_0] [i_0]) : ((+(arr_3 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            var_20 = (~(((((/* implicit */_Bool) 1280540540762198735ULL)) ? (1185724596U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_9 [i_2 + 1] [i_2 + 3])));
                var_21 = ((/* implicit */unsigned short) arr_11 [i_1] [(unsigned short)5] [i_3] [i_3]);
                arr_15 [i_3] = ((/* implicit */long long int) ((((unsigned int) arr_13 [i_3] [i_1] [i_1] [i_1])) >> (((arr_2 [i_1] [i_3]) - (996073422U)))));
            }
            var_22 = ((/* implicit */unsigned short) arr_2 [i_2 + 2] [i_2 + 2]);
            var_23 = ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 + 2])) ? (((/* implicit */long long int) arr_10 [i_2 + 1] [i_2 - 1])) : (arr_3 [i_2 - 1] [i_2 - 1]));
            arr_16 [(unsigned short)12] = (-(arr_7 [i_1] [i_2 + 2]));
        }
        arr_17 [i_1] = ((/* implicit */unsigned int) arr_0 [i_1]);
        arr_18 [1U] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
    }
}
