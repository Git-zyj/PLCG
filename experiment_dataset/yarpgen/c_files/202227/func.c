/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202227
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_4))));
    var_16 ^= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_9));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0] [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_0))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 - 2] [i_0 + 1]);
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */unsigned short) max((((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 1])))))));
            var_19 |= ((/* implicit */unsigned short) ((short) var_11));
        }
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned short) var_7);
            arr_14 [(unsigned char)7] [i_1 - 1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_1] [i_3 + 1])))) : (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) - (((((arr_0 [i_1 + 1] [i_1 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_3])))))));
            var_21 = ((/* implicit */short) (-(((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_1 + 1])) - (64798)))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_22 ^= ((/* implicit */unsigned short) var_12);
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_3 [i_1 - 2]), (arr_3 [i_1 - 1])))) | (((/* implicit */int) var_3))));
        }
        var_23 = ((/* implicit */unsigned long long int) var_3);
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        var_24 = ((/* implicit */short) ((min((var_2), (((/* implicit */unsigned long long int) arr_6 [i_5])))) >> (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) % (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_5 + 3])) : (((/* implicit */int) arr_19 [i_5]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_21 [(unsigned char)0])), (562949953421280ULL)))))))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_22 [i_7]))))), (arr_26 [i_5] [i_5 + 1] [i_7])))))))));
                    arr_27 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5])) * (((/* implicit */int) arr_19 [i_5]))))), (((((/* implicit */_Bool) arr_4 [0ULL])) ? (((arr_20 [i_5 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)512)) >> (((arr_10 [i_6]) - (8363217375565348545ULL))))))))));
                    var_27 &= ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)1));
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_8), (var_10)))) * (((/* implicit */int) var_14))))) != (var_2)));
}
