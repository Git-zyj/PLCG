/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26707
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
    var_10 = ((/* implicit */signed char) ((var_5) << (((((/* implicit */int) (short)32767)) >> (((7669548069687374119ULL) - (7669548069687374090ULL)))))));
    var_11 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_12 += ((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) (+(6841673921621873487ULL)));
            var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_2 [i_0])) : ((-(((/* implicit */int) var_4))))));
            arr_4 [i_1] [i_1] = var_8;
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_0 [(short)2]))));
            var_16 = ((/* implicit */signed char) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (arr_5 [i_0] [i_0])))) - (65417)))))));
            var_17 ^= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (short)-32767)) || (((/* implicit */_Bool) (short)32767)))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((((/* implicit */int) arr_5 [i_0] [i_2])) + (((/* implicit */int) arr_1 [i_2] [i_2])))))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] &= ((signed char) 6841673921621873497ULL);
            var_19 = ((/* implicit */_Bool) ((signed char) arr_0 [i_3]));
        }
        var_20 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) (~((-(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) 11605070152087678140ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_0])))) : (arr_0 [i_0])))));
        arr_12 [3] [(signed char)9] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) arr_0 [i_0])) ^ (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (6011781009262399977LL)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */short) arr_5 [i_4] [i_4]);
        arr_17 [i_4] = ((/* implicit */unsigned long long int) (-((-(arr_15 [(unsigned short)0])))));
        var_21 = ((/* implicit */long long int) var_8);
        var_22 = ((_Bool) var_1);
    }
    for (long long int i_5 = 2; i_5 < 13; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5 + 1] [i_5] = ((/* implicit */signed char) 13343905495004096566ULL);
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_7 [i_5 + 3] [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [(short)8])) || (((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5 + 1]))))) : (((((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1])) | (((/* implicit */int) var_8))))));
        arr_22 [(signed char)2] [(unsigned short)4] |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)18249))) < (((long long int) arr_1 [(short)7] [(short)7]))))) != (((((/* implicit */int) arr_7 [i_5 - 2] [i_5])) << (((/* implicit */int) arr_7 [i_5 + 1] [i_5]))))));
        var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_20 [i_5] [2LL]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned char)2] [i_5 + 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [0ULL]))) : (arr_20 [i_5] [(_Bool)1])));
    }
    for (long long int i_6 = 2; i_6 < 13; i_6 += 3) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-32749))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_6] [i_6]))))) : (arr_20 [10LL] [10LL]))), (840698078U)));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)32767)))) + (((/* implicit */int) arr_6 [i_6 + 1] [i_6 + 3]))))) ? (((((/* implicit */unsigned long long int) arr_20 [i_6 - 1] [(unsigned short)8])) / (arr_24 [i_6 + 2] [i_6 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (7220042942149618803LL))))));
        var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), ((+(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_7)))))))));
    }
}
