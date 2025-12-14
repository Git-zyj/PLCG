/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33266
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
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_3 [(unsigned short)0] &= ((/* implicit */unsigned char) var_15);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_1) : (var_19))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0 - 2] [i_0] [i_0 - 1]) : (((/* implicit */int) var_9))))))))) + (arr_6 [i_0 - 2])));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_7 [i_0] [11LL] [11LL]))));
        }
        for (long long int i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_21 = ((((/* implicit */int) (unsigned short)14336)) | (((/* implicit */int) (unsigned short)14349)));
                    var_22 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2 + 1])) >> (((((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_3 + 1])) - (6220)))));
                    var_23 = ((/* implicit */unsigned short) var_7);
                    var_24 = ((/* implicit */int) var_3);
                }
                var_25 += ((/* implicit */unsigned char) (unsigned short)16384);
            }
            for (int i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                arr_19 [i_2] [i_2 + 1] [i_2] = ((/* implicit */int) var_8);
                var_26 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)51193))));
                arr_20 [i_2] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0]);
            }
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max(((-(1092844221))), (((/* implicit */int) var_7)))))));
        }
        for (long long int i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 + 1]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) -414131491)))))));
            var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_9 [i_0 - 1] [i_0] [(unsigned short)2])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_15 [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_6] [i_6])) ? (arr_23 [i_0 + 1] [i_6]) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_6])))))))) ? (-9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        }
        arr_25 [i_0] = ((/* implicit */long long int) min(((+(arr_22 [i_0 - 2] [i_0 - 2]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (arr_4 [i_0 + 1] [i_0 - 2])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_7 = 1; i_7 < 18; i_7 += 2) 
    {
        arr_28 [i_7] = ((/* implicit */long long int) arr_26 [i_7]);
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_7 + 1])) ? (-1382286710477314654LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_7])) == (((/* implicit */int) var_16))))))));
    }
    var_31 = ((/* implicit */unsigned char) var_11);
    var_32 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) -689149759))))));
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_11))));
}
