/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223458
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) (+(arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_15)))), ((+(((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) (unsigned short)65535);
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_0 [i_0]))))));
        var_18 ^= ((/* implicit */signed char) ((arr_0 [i_0]) >= (((/* implicit */unsigned long long int) var_16))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            arr_17 [i_5] [i_4] [i_1] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_9 [i_5 + 1])));
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_5 + 2])) < (((/* implicit */int) var_12))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)41735)) : (((/* implicit */int) arr_16 [i_5] [i_5 + 2] [i_5] [0LL] [i_5 - 1] [i_2])))))));
                            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [(signed char)1] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5 + 1])) ? (arr_6 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108)))));
                            var_22 += ((/* implicit */signed char) var_16);
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_11 [i_1] [i_2] [i_3] [i_6]))))));
                            var_24 = ((/* implicit */unsigned long long int) arr_18 [i_1] [i_2] [i_3] [i_3] [i_6]);
                        }
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) arr_24 [i_1] [i_2] [i_3] [i_4] [i_2] [i_4])) : (((((/* implicit */_Bool) arr_12 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (arr_11 [i_7] [1U] [(unsigned short)6] [i_1])))));
                            var_26 += ((/* implicit */unsigned short) arr_18 [i_7] [i_4] [i_3] [i_2] [i_7]);
                        }
                        for (unsigned short i_8 = 2; i_8 < 14; i_8 += 1) 
                        {
                            arr_27 [i_1] [i_1] [(short)13] [i_1] = ((/* implicit */signed char) (+(var_6)));
                            arr_28 [i_1] [i_1] = ((/* implicit */signed char) var_1);
                        }
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) var_11));
                        arr_30 [i_1] [(short)8] [(short)0] [i_4] [i_2] = ((unsigned int) arr_8 [i_1] [i_4]);
                        var_27 = ((/* implicit */short) (+(((/* implicit */int) (signed char)31))));
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = arr_26 [i_1] [i_1] [i_2] [12U] [i_3] [i_3] [i_4];
                    }
                } 
            } 
            arr_32 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_1] [i_1])) ^ (((/* implicit */int) (signed char)64))));
            /* LoopSeq 1 */
            for (signed char i_9 = 1; i_9 < 15; i_9 += 1) 
            {
                arr_35 [i_1] [i_2] [i_1] [4U] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                arr_36 [i_9 + 2] [i_9] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)44))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_24 [i_9] [(signed char)10] [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 2])));
                arr_37 [i_2] [i_9 - 1] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_1] [i_1] [(unsigned short)12] [i_2]))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_13))));
                var_29 = var_1;
            }
        }
        for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) ((int) (signed char)-17));
                        var_31 = ((/* implicit */signed char) arr_43 [i_1] [i_1] [i_1] [i_12]);
                        arr_47 [15U] [i_10] [i_11] [i_10] [i_1] [i_12] = ((/* implicit */int) var_8);
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) (unsigned short)15);
            arr_48 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_41 [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_34 [i_1] [14U] [i_1] [i_1]), (((/* implicit */unsigned short) var_2))))))))) ? (((long long int) (unsigned short)504)) : (((/* implicit */long long int) ((arr_38 [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) (signed char)3)) * (((/* implicit */int) (_Bool)0)))))))));
            arr_49 [i_1] = ((/* implicit */signed char) var_14);
        }
        arr_50 [i_1] [i_1] = arr_24 [(unsigned short)0] [i_1] [i_1] [(unsigned short)14] [(unsigned short)0] [6U];
        /* LoopSeq 2 */
        for (unsigned short i_13 = 4; i_13 < 14; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    {
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_1] [i_13 + 1] [i_15] [i_13 - 2])) ? (((((/* implicit */_Bool) var_16)) ? (arr_23 [i_1] [i_15] [i_15] [i_13 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_13 - 2] [i_13] [i_13] [i_15])))));
                        arr_59 [(signed char)14] [i_1] [7LL] [1LL] [6ULL] [(signed char)10] = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) (unsigned short)496)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) arr_10 [i_1])) << (((arr_9 [i_1]) - (2133874667U)))))))));
                        arr_60 [i_1] [i_1] [i_14] [i_15] = ((/* implicit */long long int) arr_52 [i_1] [i_1]);
                        arr_61 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)10), ((signed char)-6)))) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) var_15)), (arr_33 [i_1])))))) ? (((/* implicit */long long int) ((int) (signed char)-17))) : (arr_24 [(unsigned short)12] [i_15] [i_14] [i_13] [i_13] [i_1])));
                    }
                } 
            } 
            var_34 += ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) arr_7 [i_13 - 4]))))), ((~(((/* implicit */int) arr_26 [(unsigned char)8] [(unsigned short)0] [(unsigned char)6] [i_1] [i_13 - 4] [(signed char)0] [i_13 + 3]))))));
        }
        /* vectorizable */
        for (unsigned short i_16 = 4; i_16 < 14; i_16 += 3) /* same iter space */
        {
            var_35 ^= ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (arr_6 [i_1])))));
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_16 - 1]))) > (-2693914268161631888LL))))));
            /* LoopSeq 3 */
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) (signed char)-12);
                            arr_72 [(signed char)10] [i_1] [i_17] [i_1] [i_1] = ((/* implicit */long long int) (~(arr_62 [i_1] [i_16 - 2])));
                            var_38 = ((/* implicit */long long int) max((var_38), (((((/* implicit */_Bool) var_13)) ? (arr_63 [i_16 - 3] [i_19] [i_16 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                arr_73 [i_1] [(unsigned char)8] [i_1] [i_17] = ((/* implicit */signed char) (unsigned short)11285);
            }
            for (unsigned int i_20 = 0; i_20 < 17; i_20 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)80)))))));
                var_40 ^= ((/* implicit */signed char) var_3);
                var_41 += (signed char)6;
                arr_77 [i_1] [10U] [10U] [10U] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_40 [(_Bool)1] [i_1] [i_16 + 1]))));
            }
            for (unsigned int i_21 = 0; i_21 < 17; i_21 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_22 = 2; i_22 < 14; i_22 += 1) 
                {
                    arr_83 [i_1] [8LL] [i_1] [i_22] = ((/* implicit */unsigned int) arr_56 [i_16] [i_16] [i_16 - 2] [i_16 - 4] [2]);
                    var_42 = ((/* implicit */signed char) (unsigned char)24);
                    arr_84 [i_1] [i_16] [i_1] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_22] [i_1] [1LL] [i_1])) ? (((/* implicit */int) arr_68 [10ULL] [i_16] [i_21] [i_22])) : (((/* implicit */int) arr_21 [i_1]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1]))) : (arr_11 [i_16] [i_16] [i_16] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                }
                var_43 = ((/* implicit */long long int) (+(var_0)));
            }
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 17; i_23 += 2) 
            {
                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)0)))))));
                /* LoopSeq 2 */
                for (short i_24 = 3; i_24 < 16; i_24 += 3) 
                {
                    var_45 = ((/* implicit */int) var_14);
                    var_46 &= ((/* implicit */int) ((unsigned long long int) var_8));
                }
                for (unsigned char i_25 = 2; i_25 < 15; i_25 += 3) 
                {
                    arr_93 [i_1] [i_23] [i_16] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)66))) : (0LL)));
                    var_47 -= ((/* implicit */unsigned long long int) -1783359702);
                    arr_94 [i_23] |= ((/* implicit */int) ((long long int) arr_43 [i_25 - 1] [i_16] [i_23] [i_16 - 1]));
                }
                arr_95 [i_1] = ((/* implicit */unsigned short) (unsigned char)69);
                var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_16 + 1] [i_23] [i_16 - 1])) ? (arr_63 [i_16 - 4] [i_23] [i_16 - 1]) : (arr_63 [i_16 - 1] [i_23] [i_16 - 3])));
            }
        }
        arr_96 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)7))));
        var_49 += ((/* implicit */unsigned short) (-(((var_2) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((arr_34 [(signed char)2] [i_1] [i_1] [(signed char)2]), ((unsigned short)65015))))))));
    }
    for (unsigned short i_26 = 4; i_26 < 8; i_26 += 3) 
    {
        arr_99 [i_26] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)7)) ? (var_11) : (((/* implicit */unsigned long long int) arr_33 [0])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_26 - 4]) > (arr_9 [i_26 - 3])))))));
        var_50 = 2097151U;
    }
    var_51 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) ((signed char) var_6))))))));
}
