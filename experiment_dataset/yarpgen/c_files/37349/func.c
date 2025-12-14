/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37349
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
    var_20 -= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) ((int) arr_2 [i_0]))))) ? (min((((/* implicit */long long int) arr_0 [i_0])), (((long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_16))) & (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_0);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                var_22 ^= ((/* implicit */unsigned short) arr_6 [i_1]);
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_4), (var_14)))), (3680246043U)))) ? (((min((644074173U), (arr_5 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (min((min((var_6), (((/* implicit */unsigned int) var_8)))), (arr_8 [i_0] [(unsigned char)13] [i_2 - 1])))));
            }
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_7 [i_1] [i_1 - 1] [i_1] [i_1 - 2])), (var_18)))), (((644074173U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 - 2] [i_1] [i_1 + 1]))))))))));
            var_25 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_8)) ? (arr_8 [i_1 + 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 2] [(unsigned char)11]))))), (((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_0])))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_18)))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_26 = ((((arr_8 [i_3] [i_3] [i_3]) >> (((((/* implicit */int) var_15)) - (109))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3]))));
        arr_13 [i_3] [(short)5] = ((/* implicit */long long int) (_Bool)1);
        var_27 = ((/* implicit */_Bool) var_7);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 *= ((/* implicit */int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)2]))))))));
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_8 [i_4] [i_5] [i_5]))));
            var_30 = ((/* implicit */long long int) (((!(arr_15 [i_4]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)757)) ? (arr_14 [i_4]) : (((/* implicit */long long int) 614721253U)))))));
        }
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            arr_23 [i_4] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (var_13) : (var_13)))));
            arr_24 [i_4] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_6] [i_6] [i_6 + 1] [i_6]))));
            var_31 -= ((/* implicit */unsigned int) ((unsigned char) arr_18 [(unsigned char)6] [(unsigned char)6]));
            var_32 = ((/* implicit */long long int) var_4);
        }
        arr_25 [i_4] = ((/* implicit */long long int) arr_20 [i_4]);
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            arr_28 [i_4] [i_7 + 1] [12LL] = ((unsigned int) var_10);
            arr_29 [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_18 [i_4] [i_4])))));
        }
        arr_30 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) var_5))));
    }
}
