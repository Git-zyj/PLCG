/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25631
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))) + (max((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_1] [i_0] [11]))))), (((/* implicit */unsigned long long int) max((min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)64)))), (var_10))))));
            arr_4 [i_0] [i_0] = min((arr_3 [i_0] [i_0] [1]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_1] [i_0] [i_0])) | (((long long int) (_Bool)1))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_15 = ((/* implicit */int) ((signed char) arr_3 [i_0] [i_2] [i_0]));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_2])) | (((/* implicit */int) arr_7 [i_0] [i_0]))));
            var_16 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) var_9))))));
        }
        arr_9 [i_0] = min((((((/* implicit */_Bool) max((-566198215280951506LL), (((/* implicit */long long int) arr_0 [7] [i_0]))))) ? (max((((/* implicit */int) (unsigned char)185)), (arr_0 [i_0] [i_0]))) : (((131072) + (((/* implicit */int) arr_6 [i_0] [i_0])))))), (((/* implicit */int) ((arr_0 [i_0] [i_0]) != (((/* implicit */int) arr_6 [(unsigned char)8] [(unsigned char)13]))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_17 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) arr_11 [i_0])) * (((((/* implicit */_Bool) arr_5 [i_0] [14] [i_0])) ? (arr_3 [(_Bool)1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6930))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_3])) : (arr_2 [i_0] [i_0] [i_0]))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)54))));
        }
        var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) var_4)) - (15655780605352984018ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (2790963468356567598ULL)))) ? (arr_3 [i_0] [i_0] [7ULL]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
        arr_13 [i_0] = ((/* implicit */long long int) min(((+(2790963468356567598ULL))), ((-(min((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) (signed char)3);
        var_21 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)2)))))));
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) (unsigned short)2);
    }
    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_22 = 8642260170909391000ULL;
        arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))) - (4160749568U)))) ? ((~(((/* implicit */int) ((_Bool) arr_18 [i_5]))))) : (((/* implicit */int) arr_18 [i_5]))));
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) ((signed char) ((signed char) arr_18 [i_5])));
        arr_21 [23] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_5])) ^ (((/* implicit */int) arr_17 [i_5]))))) ? (((/* implicit */int) min((arr_17 [i_5]), (((/* implicit */unsigned char) arr_18 [i_5]))))) : (((/* implicit */int) arr_17 [i_5]))))));
    }
    var_23 |= ((/* implicit */short) max((((((int) 449080437U)) << (((((/* implicit */int) (unsigned char)228)) - (227))))), (((/* implicit */int) var_9))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            arr_26 [i_6 + 2] = arr_12 [i_6] [i_6] [i_7];
            arr_27 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) arr_1 [i_6] [i_6]);
        }
        var_24 = ((/* implicit */unsigned char) ((arr_0 [i_6 + 1] [i_6 - 1]) / (arr_0 [i_6 - 1] [i_6])));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-10))));
        arr_29 [i_6 - 1] = ((/* implicit */int) ((((/* implicit */int) arr_7 [i_6 - 1] [i_6 - 1])) >= (((/* implicit */int) arr_24 [i_6 - 1] [i_6 - 1] [i_6 + 1]))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) arr_1 [i_8] [2]);
        var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) arr_0 [i_8] [i_8])))) ? (((/* implicit */int) arr_6 [i_8] [i_8])) : (((int) arr_1 [i_8] [i_8]))));
        var_27 = ((/* implicit */unsigned long long int) arr_0 [i_8] [i_8]);
    }
    for (int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) min((arr_32 [i_9] [7ULL]), (arr_32 [i_9] [i_9])))), (min((117440512U), (((/* implicit */unsigned int) -290840526)))))), (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9])))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_18 [i_9]))));
        arr_35 [i_9] [i_9] &= ((/* implicit */signed char) ((((((((arr_33 [i_9] [(unsigned char)16]) + (2147483647))) >> (((((/* implicit */int) (signed char)68)) - (61))))) & ((~(arr_34 [i_9] [i_9]))))) << (((arr_34 [i_9] [i_9]) + (1006277163)))));
    }
    for (int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_17 [i_10])) ? ((~(arr_33 [i_10] [i_10]))) : (((/* implicit */int) arr_37 [i_10] [i_10])))));
        var_31 -= ((/* implicit */unsigned long long int) ((arr_34 [i_10] [i_10]) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (1069868492)))))))));
        var_32 -= ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) + (arr_36 [9LL]))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_33 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) arr_34 [i_10] [i_10])) : (1338481371342141797ULL))))));
        var_33 |= ((/* implicit */unsigned short) ((signed char) ((unsigned int) arr_32 [i_10] [i_10])));
    }
}
