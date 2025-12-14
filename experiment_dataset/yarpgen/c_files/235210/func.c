/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235210
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
    for (int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_0 - 2])), ((unsigned short)59112))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) arr_5 [i_0]);
                        var_17 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0 - 2] [i_0] [i_1] [i_0] [i_0 - 3]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 3) 
                {
                    arr_17 [(short)3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (short)4182);
                    arr_18 [i_0] [i_1] [(unsigned short)16] [i_0] = ((/* implicit */_Bool) (~(max((-474585455), (((/* implicit */int) arr_3 [i_4]))))));
                }
                var_18 &= ((/* implicit */unsigned int) arr_13 [8LL] [i_4] [i_4] [i_1]);
                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((arr_6 [i_1] [i_4 + 2]), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (unsigned short)11387))))));
                /* LoopNest 2 */
                for (long long int i_6 = 4; i_6 < 20; i_6 += 3) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (((arr_1 [13U]) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                            var_21 = ((/* implicit */signed char) arr_21 [i_6 + 2] [i_1] [i_4] [i_7 - 1] [i_0 - 4] [i_1]);
                            arr_24 [i_7] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                            var_22 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -3548250949914311963LL)))))));
                        }
                    } 
                } 
            }
            for (short i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                arr_28 [i_1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 723158749))))) & (((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) var_11)))) <= (((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 3] [i_0])))))));
                arr_29 [i_0] [i_8] [i_1] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (_Bool)1)))), (((arr_25 [i_0] [i_8] [i_8]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_1] [i_8]))))))) ? ((+(((/* implicit */int) max((var_10), (var_10)))))) : (((/* implicit */int) arr_2 [i_0 - 1]))));
            }
            arr_30 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_0 - 3] [i_1])) || (((/* implicit */_Bool) arr_13 [i_0 - 2] [i_1] [i_0 - 2] [i_1]))))), (((unsigned char) (short)3632))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((((-8114929472182899095LL) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_1] [i_0])) - (((/* implicit */int) arr_4 [i_0 - 3]))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))))))));
            }
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_32 [i_0]))));
        }
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) arr_33 [i_0 - 4] [i_0 + 1])) >= (((/* implicit */int) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))))))));
    }
    for (signed char i_10 = 2; i_10 < 20; i_10 += 4) 
    {
        var_27 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_35 [i_10] [i_10 + 3])) : (arr_34 [13LL] [13LL]))))) ^ (((/* implicit */int) arr_35 [i_10] [i_10 + 1]))));
        /* LoopSeq 2 */
        for (long long int i_11 = 1; i_11 < 20; i_11 += 2) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_35 [i_11 + 4] [i_10]))));
            arr_38 [i_10] = ((/* implicit */unsigned short) max((((/* implicit */int) var_11)), ((((!(((/* implicit */_Bool) var_9)))) ? ((~(arr_36 [i_10] [i_10]))) : (max((arr_34 [i_10] [i_10 - 2]), (((/* implicit */int) arr_35 [i_10] [i_10]))))))));
            arr_39 [i_10] [i_10] [i_10] |= arr_34 [i_10 + 1] [i_11 + 3];
        }
        /* vectorizable */
        for (short i_12 = 2; i_12 < 22; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_13 = 2; i_13 < 23; i_13 += 4) 
            {
                var_29 = ((/* implicit */signed char) var_5);
                var_30 = ((/* implicit */unsigned char) var_13);
            }
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_47 [i_12 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_43 [i_10] [i_12 + 1] [i_14]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [i_10 + 2] [i_10 + 2] [i_10 + 2]))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((arr_44 [i_10 + 1] [i_12] [i_14] [i_15]) << (((((/* implicit */int) var_3)) - (31382)))));
                            arr_52 [15ULL] [i_15] [i_10 + 2] [i_12 - 2] [i_10 + 2] &= ((/* implicit */short) var_1);
                        }
                    } 
                } 
                arr_53 [(unsigned char)12] [i_12] [i_14] = ((/* implicit */long long int) arr_37 [7] [i_12 + 1]);
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_10] [i_12 + 1] [i_14])) >= (((/* implicit */int) arr_35 [i_10] [i_12 - 2]))));
            }
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_46 [i_10 + 2] [i_10] [i_10 + 2]))));
            var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_48 [i_12 - 1] [i_10])))) ? (arr_48 [i_10 - 2] [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_10] [(signed char)21] [i_12]))))))));
        }
    }
    for (short i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_35 = ((/* implicit */short) ((((unsigned int) (+(((/* implicit */int) arr_35 [i_17] [i_17]))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 3; i_18 < 11; i_18 += 4) 
        {
            var_36 *= ((/* implicit */signed char) arr_33 [i_18 + 1] [i_18 - 3]);
            /* LoopNest 2 */
            for (signed char i_19 = 1; i_19 < 9; i_19 += 4) 
            {
                for (int i_20 = 1; i_20 < 9; i_20 += 4) 
                {
                    {
                        arr_63 [i_20] [i_19] [i_18] [3LL] &= ((/* implicit */long long int) ((short) (signed char)66));
                        var_37 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_19 - 1] [i_17] [i_20])) ? (((/* implicit */int) arr_8 [i_19 + 3] [i_17] [i_19 + 3] [i_19])) : (((/* implicit */int) arr_8 [i_19 + 3] [i_17] [i_19] [2U])))));
                        var_38 = var_6;
                    }
                } 
            } 
            var_39 = (!(((/* implicit */_Bool) (unsigned short)384)));
            var_40 -= ((/* implicit */short) (+(((arr_1 [i_18 - 3]) << (((arr_1 [i_18 + 1]) - (4167695284567207363LL)))))));
            var_41 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(-723158758)))) ? (8823646882240078639LL) : ((-(arr_45 [i_17] [i_17] [i_17] [i_17]))))) | (arr_58 [(short)11] [i_18 - 3] [i_18 - 3])));
        }
        /* LoopNest 3 */
        for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            for (short i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                for (unsigned short i_23 = 0; i_23 < 12; i_23 += 4) 
                {
                    {
                        var_42 ^= ((/* implicit */signed char) ((int) (~(arr_1 [i_23]))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [i_17] [i_23] [i_22] [i_23] [i_22] [i_23])) : (((/* implicit */int) arr_41 [i_17] [i_21]))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_8)), (max((((/* implicit */int) (signed char)106)), (arr_27 [i_17] [i_21])))))) : (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_41 [i_22] [i_21]))))) & ((~(arr_48 [i_17] [i_17])))))));
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65526)), (-723158758)));
    /* LoopNest 2 */
    for (signed char i_24 = 2; i_24 < 20; i_24 += 4) 
    {
        for (signed char i_25 = 2; i_25 < 19; i_25 += 4) 
        {
            {
                var_45 = ((/* implicit */int) arr_77 [i_25 - 1]);
                arr_78 [i_25] = ((/* implicit */unsigned int) ((short) arr_35 [i_24] [i_25]));
                arr_79 [i_24] [i_24] [i_24 + 3] = ((/* implicit */short) arr_75 [i_24]);
            }
        } 
    } 
    var_46 *= ((/* implicit */unsigned long long int) var_14);
    var_47 += ((/* implicit */short) var_10);
}
