/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40160
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) (short)-32746);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0 + 1] [i_1] = ((/* implicit */int) (-(arr_2 [i_0 - 1])));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_13 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) (~(arr_1 [i_2])))) : (arr_6 [i_0 + 1] [(unsigned char)5]));
                /* LoopSeq 2 */
                for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    var_14 ^= ((/* implicit */long long int) arr_1 [i_3 + 4]);
                    arr_11 [i_3] [i_2] [i_1] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_3 - 1]))));
                    var_15 = ((/* implicit */unsigned long long int) 4294967295U);
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] [i_3 - 1]))));
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_2);
                        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [9LL] [i_1] [i_2] [i_0 - 1] [i_4] [i_0])) >= (arr_1 [i_4]))))) : (arr_10 [i_3 - 2] [i_0 + 1])));
                    }
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_8 [i_0 + 1]) : (arr_2 [i_0 - 1])));
                    var_17 += ((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))));
                }
                arr_19 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    arr_22 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)116))));
                    arr_23 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)222)))))) ^ (arr_5 [i_0])));
                }
                var_18 = ((/* implicit */long long int) 4294967279U);
            }
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_21 [i_1] [i_0 + 1] [i_1] [i_1] [i_0 + 1]);
        }
        for (short i_7 = 4; i_7 < 18; i_7 += 1) 
        {
            arr_27 [i_0] [i_7] = (~((-((-(((/* implicit */int) var_0)))))));
            var_19 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]))) : (min((((/* implicit */unsigned int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])), (4110452928U)))));
            var_20 = ((/* implicit */unsigned char) arr_9 [i_0 + 1] [i_7 + 1]);
            var_21 = ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (4294967276U) : (((/* implicit */unsigned int) var_10))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_7] [i_0]))))) ^ (((/* implicit */long long int) max((var_7), (((/* implicit */int) arr_12 [i_0] [(unsigned short)16] [(unsigned short)16] [i_0 - 1] [i_0] [i_0 - 1]))))));
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                arr_31 [i_8] [i_0] [i_7 - 3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8]))) : (var_5))))));
                var_22 += ((/* implicit */int) ((arr_8 [i_7 - 3]) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_21 [i_0] [i_7 - 3] [i_8] [i_7 - 4] [i_8]) : (min((((/* implicit */unsigned int) arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (4294967282U))))))));
            }
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    arr_36 [i_0] [i_10] [i_0] [i_10] = ((/* implicit */unsigned short) ((arr_8 [i_7 - 2]) & (arr_8 [i_7 - 3])));
                    var_23 -= ((/* implicit */unsigned long long int) var_0);
                    arr_37 [0LL] [0LL] [i_7 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_26 [i_7 - 2] [i_7 - 2] [i_0 - 1])) : (4294967295U)));
                }
                for (short i_11 = 1; i_11 < 18; i_11 += 1) 
                {
                    var_24 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_28 [i_0] [i_0] [i_9] [i_11 + 1])), (arr_32 [i_0 - 1] [i_0])))))))) / (((((/* implicit */_Bool) arr_13 [i_7 - 3] [i_0])) ? (arr_13 [i_7 - 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29563))))));
                    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_26 [i_11 - 1] [i_7 - 1] [i_0 + 1])) ? (arr_5 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35970)))))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 2; i_12 < 18; i_12 += 1) 
                    {
                        var_26 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_12])) ? (((var_5) / ((~(arr_5 [i_12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))));
                        arr_44 [i_0] [i_7] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_34 [i_12] [i_11] [i_0] [i_0])))))))), (max((arr_7 [i_12] [i_12] [i_12]), (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_12 + 1] [i_7] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18094))))))));
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_41 [i_0] [i_7] [i_9] [i_11] [i_12 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((arr_9 [i_0 - 1] [i_9]) << (((((arr_6 [13LL] [13LL]) + (7986988925211285722LL))) - (57LL))))))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        arr_48 [i_13] [i_11 - 1] [i_11 - 1] [i_9] [i_7] [i_7] [15] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_38 [i_11 + 1])) % (((((/* implicit */_Bool) (unsigned short)29566)) ? (arr_5 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_7] [i_0]))))))))));
                        var_28 -= ((/* implicit */short) ((((/* implicit */int) var_3)) != (-50882686)));
                    }
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
                    {
                        arr_53 [i_9] [i_0] [i_0] |= ((/* implicit */int) arr_9 [i_9] [11LL]);
                        arr_54 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_9])) ? (arr_6 [i_9] [i_9]) : (((/* implicit */long long int) var_2))))))));
                        var_29 = ((((/* implicit */_Bool) arr_52 [i_0 + 1] [i_0] [(_Bool)0])) ? (((/* implicit */long long int) min((max((arr_51 [i_14] [i_14] [i_14] [i_14] [i_14]), (var_8))), (((/* implicit */int) ((unsigned short) 50882688)))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (arr_5 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */long long int) arr_42 [i_0 - 1] [i_7 - 4] [i_9] [i_11] [i_11] [i_14])), (arr_13 [7U] [i_7]))))));
                        arr_55 [i_0] [i_7 + 1] [i_7] [i_14] [i_9] = ((/* implicit */unsigned short) var_6);
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                {
                    var_30 += ((/* implicit */long long int) arr_1 [i_0]);
                    arr_58 [i_15] [i_15] [i_7 - 1] [i_7 - 1] [i_15] [i_0] = ((/* implicit */unsigned short) ((arr_46 [13U] [i_7 + 1] [i_9] [i_15]) & (arr_46 [i_0] [i_7 + 1] [i_0] [i_9])));
                }
                for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                {
                    arr_61 [i_16] [i_7] [i_7] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_7] [(_Bool)1] [i_16])) * (((/* implicit */int) ((arr_1 [i_7 - 4]) < (arr_1 [i_7 - 1]))))));
                    var_31 ^= ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 3 */
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        var_32 |= ((((arr_17 [i_9]) ^ (((/* implicit */long long int) (+(((/* implicit */int) arr_50 [i_17] [i_16] [i_9] [i_7] [i_0]))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_16] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4389))) : (arr_7 [(_Bool)1] [i_7] [i_9])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_5 [i_0])))) : (((/* implicit */int) min(((unsigned short)62292), (((/* implicit */unsigned short) arr_57 [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
                        arr_64 [i_17] [i_16] [i_7 - 1] [15] = ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)0)))))))) ? ((~(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_9] [i_0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_6))))) : (((/* implicit */unsigned int) arr_59 [18LL] [i_7] [i_7])));
                        arr_65 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] = var_11;
                    }
                    for (int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        var_33 -= ((/* implicit */unsigned char) max((arr_16 [i_18] [(signed char)1] [i_9] [i_16] [i_18]), ((~(7219230988963702788ULL)))));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32764)))))));
                        arr_69 [i_16] = ((/* implicit */signed char) arr_35 [i_7 - 2] [i_7] [i_7 - 3] [i_7 - 1]);
                        var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (max((50882676), (arr_26 [i_16] [i_9] [i_7]))) : (((/* implicit */int) ((arr_9 [i_16] [i_9]) > (((/* implicit */long long int) var_2)))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_16] [i_9] [i_7 + 1] [i_0])))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        arr_72 [i_19] [(unsigned short)3] [i_9] [i_9] [i_7 - 4] [i_0] [i_0] = ((((/* implicit */_Bool) arr_59 [i_0] [i_7] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_19])))))))))) : (arr_8 [i_0 + 1]));
                        var_36 *= ((/* implicit */unsigned short) arr_52 [i_0 - 1] [i_9] [i_0 - 1]);
                    }
                    var_37 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) arr_12 [i_7 - 3] [i_7] [i_7 - 4] [i_7 - 1] [i_7 - 1] [i_7])), (arr_52 [i_0] [i_0 - 1] [i_7 - 3])))));
                }
                var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_57 [i_0] [i_0] [i_9] [i_7] [i_9]))));
                var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_7 - 1] [i_7 - 2]))));
                arr_73 [i_0] [i_0] [i_0 - 1] [i_0 - 1] |= ((/* implicit */unsigned char) arr_43 [i_9] [i_9] [i_9] [i_0] [i_0]);
            }
        }
    }
    var_40 = ((/* implicit */int) ((_Bool) var_9));
    var_41 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) / ((+(((/* implicit */int) var_0))))));
}
