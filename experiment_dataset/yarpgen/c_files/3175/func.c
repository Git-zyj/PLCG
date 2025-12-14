/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3175
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_10 [i_3] [i_3] [i_1 - 3] [i_2] [i_1 - 3] [i_3] [i_3] = ((/* implicit */long long int) 4294967295U);
                                var_10 *= ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [i_4] [i_0] [i_2] [i_0] [i_0]))))) ^ (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_11 += ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (4610560118520545280LL)));
                                var_13 = ((/* implicit */long long int) ((int) (~(arr_8 [i_0] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_6 + 1] [i_1 + 1]))));
                                var_14 = arr_13 [i_0] [i_5];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
    {
        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((unsigned int) 1103761486));
                    var_16 ^= ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        arr_30 [i_10] = ((/* implicit */_Bool) ((unsigned short) ((var_4) | (((/* implicit */unsigned long long int) arr_13 [i_10] [i_10])))));
        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)44452)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_11 = 2; i_11 < 19; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            for (int i_13 = 3; i_13 < 17; i_13 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned long long int) (~(max((arr_11 [i_11] [i_11] [i_11] [i_13 + 2]), ((((_Bool)1) ? (var_2) : (arr_15 [3LL] [i_12] [i_11] [i_11] [i_11])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 19; i_15 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_17 [i_13] [i_11]))));
                                arr_45 [i_11] [9] [9] [i_12] [9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_11 - 2] [i_12] [i_13] [i_14] [i_15])) ? (arr_11 [i_11] [2LL] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_11 + 1] [i_11 + 1] [i_12] [(short)17] [i_11]))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_11] [i_11]))))))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((18446744073709551613ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)448))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) 8682559924535776371LL);
                }
            } 
        } 
        arr_46 [i_11] = ((/* implicit */short) arr_43 [i_11]);
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((_Bool) arr_37 [i_16]));
        arr_49 [i_16] = ((/* implicit */int) ((((((/* implicit */_Bool) -8682559924535776372LL)) ? (((/* implicit */int) (unsigned short)65087)) : (((/* implicit */int) (unsigned char)128)))) >= (((/* implicit */int) var_0))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_16])) ? (arr_43 [i_16]) : (((/* implicit */unsigned int) -1486748473))));
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -414852476)) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_34 [i_17] [i_17])))) ? (((/* implicit */long long int) ((unsigned int) -8682559924535776372LL))) : ((-(3LL)))));
        var_26 *= ((long long int) (~(((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_50 [i_17]))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            for (unsigned short i_19 = 1; i_19 < 15; i_19 += 4) 
            {
                {
                    arr_59 [i_17] [i_17] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55460)) - (((/* implicit */int) (_Bool)1))))) ? (23) : (arr_2 [i_17] [i_17])));
                    arr_60 [i_17] [i_17] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (long long int i_20 = 1; i_20 < 16; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 4) 
                        {
                            {
                                arr_67 [i_17] [i_18] [i_19] [i_17] [14ULL] = ((/* implicit */short) arr_65 [i_17] [i_20] [i_21]);
                                arr_68 [i_21] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((2969373034U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) | (arr_9 [i_20] [i_20 + 1] [i_20 - 1] [i_20] [i_20 + 1])));
                            }
                        } 
                    } 
                    arr_69 [i_17] [i_17] [i_17] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)453)) ? (((((/* implicit */_Bool) 4274512327U)) ? (277401225516858174LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3ULL))))))));
                    var_28 = ((/* implicit */unsigned char) 18446744073709551602ULL);
                }
            } 
        } 
    }
}
