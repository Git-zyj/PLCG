/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22895
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_4)))) || (((/* implicit */_Bool) var_8))));
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 - 3]));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_4 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((short) var_6));
            var_15 = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] [i_0] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 2]))) & (((var_7) + (var_1)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((unsigned short) (+(arr_11 [i_3]))));
                            arr_20 [i_0 + 4] [i_3] [i_4] = max(((short)22991), (((/* implicit */short) var_10)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) ((arr_2 [i_7 - 1]) ^ (var_7)));
                        arr_25 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_8]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_34 [(short)9] [(short)9] [i_3] [i_10] [i_11] = ((/* implicit */unsigned char) arr_16 [i_11] [i_3] [i_11] [i_3]);
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 1912144493881778664LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22175))) : (-4063361968757311907LL))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */short) (signed char)1)), ((short)-22992))))));
                            arr_35 [i_11] [i_10] [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((min((max((((/* implicit */int) (signed char)-2)), (arr_0 [i_0]))), (((/* implicit */int) arr_31 [2U] [i_9 + 1] [2U] [i_10] [2U] [i_11])))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_9])) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_3])) : (arr_0 [i_3])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((max((arr_24 [i_3]), (((((/* implicit */_Bool) arr_23 [i_0] [i_3] [i_3] [(unsigned short)1] [i_3] [(unsigned short)1])) ? (-3128700749051674493LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) | (max((((/* implicit */long long int) arr_7 [i_3])), (((long long int) arr_9 [i_0]))))));
            }
            for (unsigned short i_12 = 1; i_12 < 12; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            arr_45 [i_14] [i_3] [i_3] [i_3] [11U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((((var_6) + (((/* implicit */unsigned long long int) var_1)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [i_13])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_12] [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            arr_46 [i_12 + 1] [i_12 + 1] [i_0] [i_12] [i_12] &= ((/* implicit */short) max((arr_24 [i_14]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 3] [i_0] [i_0] [(short)7])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_6)))))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) arr_24 [i_3])))))) <= (((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_43 [i_3] [i_3])) : (((/* implicit */int) var_0))))) / (var_9)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_15 = 1; i_15 < 11; i_15 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                    var_24 = ((/* implicit */short) var_2);
                    arr_50 [i_12 - 1] [i_12 - 1] [i_3] [i_12] [i_3] = ((/* implicit */int) arr_26 [i_12] [i_3] [i_12 + 1]);
                    var_25 = ((/* implicit */unsigned char) 6607667718172949336ULL);
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_26 ^= ((/* implicit */short) arr_23 [i_0] [i_3] [i_0] [i_12] [i_0] [6U]);
                        arr_53 [i_0] [i_3] [(short)10] [i_16] &= ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_2))));
                        arr_54 [i_12] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_43 [i_0 - 2] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) : (((unsigned long long int) (signed char)-74))));
                        var_27 ^= ((/* implicit */signed char) var_11);
                    }
                    for (unsigned char i_17 = 1; i_17 < 12; i_17 += 3) /* same iter space */
                    {
                        arr_59 [i_3] [i_3] [i_15] [i_15] = ((/* implicit */unsigned short) arr_26 [i_12 - 1] [i_12 + 1] [i_12 - 1]);
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) var_9)))))));
                        arr_60 [i_0] [i_3] [i_3] = ((/* implicit */long long int) arr_43 [i_12 - 1] [i_3]);
                    }
                    for (unsigned char i_18 = 1; i_18 < 12; i_18 += 3) /* same iter space */
                    {
                        arr_63 [i_3] [i_3] [(_Bool)1] [i_15 - 1] = ((/* implicit */unsigned int) var_8);
                        var_29 = ((/* implicit */long long int) ((int) ((short) var_6)));
                        var_30 *= ((/* implicit */short) arr_12 [i_15] [i_15 + 2] [i_15 - 1]);
                    }
                }
                for (signed char i_19 = 1; i_19 < 11; i_19 += 4) /* same iter space */
                {
                    arr_67 [i_0] [i_3] [(short)12] = ((/* implicit */short) min((var_2), (((/* implicit */long long int) max((1878045375U), (((/* implicit */unsigned int) (short)-23012)))))));
                    var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_41 [(_Bool)1] [i_3] [i_3] [i_12] [i_19]), (((/* implicit */unsigned short) arr_10 [i_3] [i_3] [i_0 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_48 [i_19 + 2] [i_19 + 1] [i_19] [i_19] [i_19 + 2])))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [(signed char)3] [i_12 - 1] [i_19]))) & (arr_28 [i_0] [i_0] [7ULL])))))))));
                }
            }
        }
    }
}
