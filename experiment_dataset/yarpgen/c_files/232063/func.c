/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232063
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
    var_16 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned short)824)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((unsigned short) ((_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (var_13)))));
        var_18 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (-144115188075855872LL)))))));
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [6LL]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_9))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) ((_Bool) arr_3 [i_0] [5U] [i_1 - 1])))))), (((((long long int) arr_0 [i_0])) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30289))))))))));
            var_21 |= ((/* implicit */unsigned short) arr_1 [i_1 + 1]);
        }
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned char)84)))))), (max((((((-1) + (2147483647))) << (((((((/* implicit */int) arr_5 [i_2] [i_2])) + (46))) - (18))))), (((/* implicit */int) var_15))))));
        arr_9 [2ULL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) ((arr_0 [i_2]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2]))))))) ? (((/* implicit */int) min((((unsigned char) arr_1 [i_2])), (((/* implicit */unsigned char) arr_5 [i_2] [i_2]))))) : (((/* implicit */int) arr_8 [i_2]))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) arr_1 [9U]))), ((unsigned short)45033)))) <= ((-((+(((/* implicit */int) (unsigned char)113))))))));
            var_25 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_5 [i_3] [i_2]))) * (((/* implicit */int) ((short) arr_5 [i_2] [i_2])))));
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            arr_14 [i_4] [i_2] = ((/* implicit */int) ((min((((/* implicit */int) arr_0 [i_4])), ((~(((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) arr_5 [i_2] [i_2])), (var_0)))))));
            var_26 = ((/* implicit */long long int) arr_8 [i_4]);
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_2]), (arr_12 [(unsigned short)1] [i_4] [i_2]))))) > (((long long int) arr_11 [i_4] [i_2] [i_2]))))))));
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            arr_17 [(unsigned char)5] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)6] [2ULL] [(unsigned short)0]))) : (arr_11 [i_2] [i_2] [i_5]))));
            var_28 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 7258970899745585471ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_5 - 1] [i_2] [i_2])))));
            arr_18 [i_2] [i_5 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (((/* implicit */int) arr_4 [i_5 - 2] [i_5])) : (-3)));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28089)) | (((/* implicit */int) arr_19 [4ULL])))))))), (((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_6] [i_6] [i_6]))))) / (arr_13 [i_6] [i_6])))));
        var_29 += ((((((((/* implicit */int) arr_3 [8U] [2ULL] [0ULL])) + (2147483647))) >> (((((7483493887698880763ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6]))))) - (54624042975904230ULL))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_6])) && (((/* implicit */_Bool) var_1)))))) - (max((7483493887698880763ULL), (((/* implicit */unsigned long long int) (unsigned short)6685)))))) - (10963250186010670850ULL))));
    }
}
