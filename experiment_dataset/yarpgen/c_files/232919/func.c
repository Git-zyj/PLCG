/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232919
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_1 [(signed char)2]), (arr_1 [(unsigned char)2])))))))));
        var_14 = ((/* implicit */short) min((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_2))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)2215)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)3)))) | ((-(((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (short)-1)))));
            var_15 = ((/* implicit */unsigned int) (~(arr_3 [i_1] [i_0] [i_1 + 4])));
        }
    }
    for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_6 [i_2]))));
        var_17 *= ((/* implicit */short) arr_6 [i_2]);
        var_18 = ((/* implicit */_Bool) min(((-(arr_6 [i_2 + 2]))), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_2] [i_2]) : (arr_6 [i_2]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_10 [i_3] = arr_7 [i_3];
        arr_11 [i_3] = ((/* implicit */_Bool) var_10);
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_9 [i_3]))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        arr_15 [i_4] &= ((/* implicit */unsigned char) (-(arr_9 [3])));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_26 [i_4] [i_5] [i_5] [i_6] [i_7] [i_7] = (~((+(((((/* implicit */int) arr_19 [i_5] [i_8] [i_7])) - (((/* implicit */int) arr_12 [i_4])))))));
                            arr_27 [i_7] [i_8] [i_7] [i_6] [i_6] [i_4] [i_7] |= ((/* implicit */unsigned short) arr_8 [i_4]);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_20 [i_4] [i_5] [i_4] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_13 [i_5])) : (((var_0) ? (arr_16 [i_4]) : (((/* implicit */int) arr_12 [(_Bool)1])))))) + (((/* implicit */int) ((unsigned short) (-(var_4)))))));
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4])) + (((/* implicit */int) arr_19 [(short)16] [i_4] [i_5]))))) ? (arr_22 [i_4] [i_4] [(_Bool)1] [i_5]) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [(_Bool)1])), (arr_20 [i_4] [i_4] [i_4] [(unsigned char)17] [i_4])))) ? (max((((/* implicit */long long int) var_2)), (arr_9 [i_4]))) : (arr_22 [6U] [i_4] [0LL] [i_5])))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), ((~(((((/* implicit */_Bool) arr_28 [i_11])) ? (((/* implicit */int) arr_28 [i_11])) : (((/* implicit */int) arr_28 [i_10]))))))));
                        arr_35 [i_4] [i_4] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_9] [i_10 - 1] [i_11]))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_9] [i_9]))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_12 [i_11])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_29 [i_9] [i_9]))))))) : (arr_31 [i_4] [i_11]))))));
                        var_24 -= ((/* implicit */unsigned int) arr_18 [i_4] [i_4] [i_4]);
                    }
                } 
            } 
            var_25 ^= ((/* implicit */int) arr_14 [i_9] [i_9]);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((arr_23 [11] [i_12] [i_12] [i_12]) ? (((/* implicit */int) min((arr_23 [i_4] [i_4] [i_4] [i_12]), (var_9)))) : (((/* implicit */int) arr_23 [i_12] [15U] [i_4] [i_4])))))));
            arr_38 [i_4] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_4] [i_12] [i_12])) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_3))))) < (((long long int) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
        }
        var_27 -= ((/* implicit */short) max((arr_22 [i_4] [i_4] [(unsigned char)8] [i_4]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_37 [i_4] [i_4]))) ? (var_4) : (arr_31 [i_4] [(unsigned char)18]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(arr_24 [i_4] [(unsigned char)6] [i_4] [12] [i_4])))) < ((~(var_11)))));
            var_29 ^= ((/* implicit */_Bool) (-(arr_39 [i_4] [i_13] [i_13])));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((signed char) arr_34 [i_4] [8U] [10ULL])))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            var_31 -= ((/* implicit */unsigned long long int) (((-(arr_42 [i_4]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [(signed char)0])) ? (arr_31 [i_4] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))))))));
            arr_47 [12ULL] [i_14] |= ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_4])) > ((-(((/* implicit */int) arr_8 [i_4]))))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)115)))))));
        }
        for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_16 = 2; i_16 < 18; i_16 += 3) 
            {
                var_33 += ((/* implicit */int) var_6);
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (-(arr_40 [i_16 + 1]))))));
                var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_15] [(short)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16]))) : (var_4))))));
            }
            var_36 *= (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)31974)), (315958901U)))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (((~(var_1))) << (((max((arr_22 [i_4] [i_4] [i_15] [i_4]), (max((arr_42 [i_15]), (((/* implicit */long long int) arr_16 [i_15])))))) - (8806978002165303255LL))))))));
            var_38 = ((/* implicit */unsigned int) max((var_38), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_43 [i_4] [i_4] [i_15])))) ? (((arr_8 [i_15]) ? (((/* implicit */int) arr_49 [i_15] [i_15] [i_4])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) var_1)))))) ? (max((((/* implicit */unsigned int) (-(arr_39 [i_4] [(unsigned char)6] [i_15])))), (((arr_8 [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-104)))))))));
        }
    }
    for (short i_17 = 3; i_17 < 10; i_17 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            arr_60 [i_17] [i_17] = ((/* implicit */signed char) arr_0 [i_18]);
            arr_61 [i_17] = ((/* implicit */_Bool) var_10);
            var_39 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_24 [i_17 - 3] [i_17] [18U] [18U] [i_18])) ? (arr_31 [i_17] [i_17]) : (arr_44 [i_17] [(unsigned char)14] [i_17]))) < (((((/* implicit */_Bool) arr_5 [i_17] [i_17])) ? (arr_31 [i_17] [i_17]) : (arr_32 [i_17] [i_18]))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_19 [i_17] [i_17 - 1] [i_18]))))))) : ((+(((((/* implicit */_Bool) arr_34 [i_17 - 3] [i_17] [i_17])) ? (arr_43 [i_17] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_18])))))))));
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_7 [i_17]))))))) ? ((-(((/* implicit */int) ((_Bool) var_9))))) : ((~((-(((/* implicit */int) var_6))))))));
        }
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) 
        {
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_17 - 3] [i_17 - 3] [8U])))))));
            arr_64 [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(signed char)1] [1ULL] [i_19]))) > ((-(arr_48 [i_17] [i_19])))));
        }
        /* vectorizable */
        for (short i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
        {
            var_42 *= ((/* implicit */unsigned int) arr_56 [i_20]);
            arr_69 [i_17] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_36 [i_17] [i_17] [i_20]))))));
        }
        for (short i_21 = 0; i_21 < 11; i_21 += 4) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_17])), (arr_31 [i_17 - 1] [i_17])))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_17] [i_21] [i_17 - 3]))))) ? (((((/* implicit */_Bool) arr_34 [i_17] [i_17] [i_17])) ? (arr_71 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_17] [i_21]))))))));
            /* LoopNest 3 */
            for (int i_22 = 3; i_22 < 8; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (int i_24 = 1; i_24 < 9; i_24 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 368136783)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7))) : (((long long int) arr_50 [i_17]))))) ? (((/* implicit */int) arr_13 [i_21])) : (((/* implicit */int) (signed char)98))));
                            arr_81 [i_17] [i_21] [i_23] [i_23] [i_17] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned char) (unsigned char)17))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_17] [i_17])) < (((/* implicit */int) arr_12 [i_17 - 2])))))) : (arr_37 [i_17] [i_24 + 2])))));
                            var_45 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_17] [i_21] [(signed char)17] [i_23] [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_17] [i_21] [i_22] [i_23]))) : (arr_44 [i_21] [i_22] [i_24])))) < (min((arr_42 [i_17]), (((/* implicit */long long int) arr_13 [i_24])))))))));
                        }
                    } 
                } 
            } 
        }
        arr_82 [i_17] = ((/* implicit */signed char) min(((~((~(((/* implicit */int) arr_56 [i_17])))))), (((/* implicit */int) ((short) arr_23 [i_17 + 1] [i_17] [i_17] [i_17])))));
    }
    for (int i_25 = 1; i_25 < 22; i_25 += 2) 
    {
        arr_85 [i_25] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_25]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_84 [i_25])) ? (arr_9 [i_25]) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_25])))))))));
        var_46 -= ((/* implicit */short) arr_9 [i_25 + 1]);
        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (368136783) : (937036789)))) ? (((long long int) arr_83 [i_25 - 1])) : (((/* implicit */long long int) ((/* implicit */int) min((arr_83 [i_25 + 1]), (arr_83 [i_25 - 1]))))))))));
        var_48 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (~(arr_9 [i_25]))))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        /* LoopSeq 1 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_49 = ((/* implicit */unsigned short) arr_84 [i_25]);
            arr_90 [i_26] = ((/* implicit */int) arr_89 [i_26] [i_26] [i_25]);
        }
    }
    /* vectorizable */
    for (unsigned char i_27 = 0; i_27 < 20; i_27 += 2) 
    {
        arr_93 [i_27] = ((/* implicit */int) arr_92 [i_27]);
        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_27] [i_27] [i_27] [i_27] [i_27])) ? (arr_20 [i_27] [i_27] [i_27] [i_27] [i_27]) : (arr_20 [i_27] [i_27] [i_27] [i_27] [i_27]))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_28 = 2; i_28 < 10; i_28 += 3) 
    {
        for (short i_29 = 0; i_29 < 13; i_29 += 3) 
        {
            {
                var_51 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4294967295U)));
                var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-18906))))) ? ((+(((/* implicit */int) (unsigned char)214)))) : ((-(((/* implicit */int) (short)-3)))))))))));
            }
        } 
    } 
}
