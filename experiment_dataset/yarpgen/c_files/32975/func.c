/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32975
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */long long int) (~(2U)));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))) : (arr_4 [2U] [i_1 + 1])));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)38)))) * ((+(((/* implicit */int) arr_5 [i_0]))))));
                    var_20 = ((/* implicit */unsigned int) (~(((int) var_13))));
                    arr_9 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (arr_4 [i_2] [i_1])))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))));
                }
                arr_10 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (((unsigned int) 5))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)28)))))));
            }
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32752)) ? ((~(17179865088ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 3])))));
            var_23 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 2])) & (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_6 [i_0] [3LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13794)))))));
            arr_11 [i_0] [i_0] [i_1] &= ((((/* implicit */int) arr_0 [i_0] [(unsigned short)9])) | (((/* implicit */int) arr_0 [i_0] [i_1])));
        }
        for (short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) var_11);
            arr_15 [i_0] [i_4] = ((/* implicit */signed char) var_15);
            arr_16 [13] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)-13816))));
        }
        for (short i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)30034)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_13 [i_5 + 1] [i_5]))));
            var_25 ^= ((/* implicit */unsigned char) var_11);
        }
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */int) arr_23 [i_6]);
        var_27 ^= ((/* implicit */unsigned char) arr_2 [i_6] [i_6] [i_6]);
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */long long int) arr_4 [i_6] [18LL])) : (arr_19 [i_6]))))))));
            arr_27 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) arr_14 [i_6] [i_7] [i_6])) : (arr_17 [i_6] [i_7] [i_6])));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) var_6)) : (arr_8 [i_6] [i_6] [i_7] [i_7])));
            arr_28 [i_6] = ((/* implicit */signed char) arr_22 [i_6] [i_6]);
        }
        for (long long int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            arr_32 [i_8 - 1] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_8]))) - ((-9223372036854775807LL - 1LL)))) % (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            var_30 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_24 [i_6] [i_6]))))));
            var_31 = ((/* implicit */unsigned int) var_3);
        }
        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) arr_18 [19LL]);
            arr_35 [i_9] [i_9 + 1] [i_6] = ((/* implicit */unsigned short) var_5);
            arr_36 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_34 [i_9 + 1] [i_9 - 1]) : (arr_34 [i_9 - 1] [i_9 + 1])));
        }
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        var_33 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_10])) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535)))))))), (((((/* implicit */_Bool) arr_4 [i_10] [i_10])) ? (((/* implicit */int) (short)-13812)) : (((/* implicit */int) min(((short)13788), ((short)4096))))))));
        /* LoopSeq 3 */
        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            arr_43 [i_10] = ((/* implicit */unsigned short) var_16);
            var_34 = ((/* implicit */unsigned long long int) max((var_34), ((+((+(max((((/* implicit */unsigned long long int) arr_38 [i_11])), (15869680325778070890ULL)))))))));
        }
        for (int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            var_35 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_10] [i_10] [(signed char)18]))))) ? (((/* implicit */unsigned long long int) min((arr_31 [i_10] [i_10] [i_10]), (((((/* implicit */_Bool) arr_12 [i_12] [i_10])) ? (arr_30 [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) : (min((((unsigned long long int) arr_40 [i_10])), (((/* implicit */unsigned long long int) ((((-6) + (2147483647))) << (((((((/* implicit */int) (short)-28607)) + (28611))) - (4))))))))));
            var_36 &= ((/* implicit */signed char) (unsigned short)65529);
            arr_46 [i_10] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) 22)) ^ (-7938366192098455693LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_10] [i_12])) : (((/* implicit */int) arr_21 [i_12] [i_12]))))) : (((((/* implicit */_Bool) (short)4087)) ? (((/* implicit */unsigned long long int) 1068590639U)) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) var_6))));
            arr_47 [i_10] = ((/* implicit */signed char) (((+(arr_33 [i_10] [i_10]))) >= (((/* implicit */long long int) max((((arr_37 [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)4090))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_12] [i_12])) / (arr_29 [i_10] [9U])))))))));
        }
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_10] [i_10])) - (((/* implicit */int) max((arr_23 [i_10]), (arr_12 [i_10] [i_13]))))))) ? (((/* implicit */int) min((arr_5 [i_10]), (arr_5 [i_10])))) : (((((/* implicit */int) max((var_6), (((/* implicit */short) var_4))))) + (((/* implicit */int) (signed char)-90))))));
            /* LoopSeq 3 */
            for (signed char i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_15 = 2; i_15 < 18; i_15 += 1) 
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_7 [i_10]), (((/* implicit */unsigned short) arr_12 [i_14] [i_15])))))))) ? (993873180) : (((/* implicit */int) arr_0 [i_10] [i_13]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 4; i_16 < 17; i_16 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) arr_26 [(signed char)15]))));
                        arr_57 [i_10] [i_13] [i_10] [i_14] [i_15] [i_14] [i_16] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_40 [11ULL])) : (((((/* implicit */int) arr_13 [i_10] [i_10])) & (((/* implicit */int) (short)-4096)))))));
                    }
                }
                for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    var_40 &= ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_29 [i_17] [i_17])))), (((((/* implicit */_Bool) arr_6 [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) var_2))))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_3)), (arr_59 [i_10] [(_Bool)1] [i_13] [i_13] [i_14] [i_17]))), (max((8418808484889584498LL), (((/* implicit */long long int) (short)0))))))) ? (((/* implicit */unsigned long long int) 0U)) : (max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)4081)))))))));
                }
                /* vectorizable */
                for (short i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
                {
                    arr_64 [i_10] [i_10] [i_10] [i_10] [i_10] = ((unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_10] [i_13])) ? (((/* implicit */int) (short)4089)) : (((/* implicit */int) arr_41 [i_10] [i_10] [i_10]))));
                    var_42 = ((/* implicit */short) arr_61 [i_10] [i_10] [i_10] [i_10]);
                    arr_65 [i_14] [i_10] [i_14] [15ULL] = ((/* implicit */unsigned char) ((arr_33 [i_10] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10])))));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4090)) ? (795251292) : (((/* implicit */int) (unsigned short)61352))));
                }
                /* vectorizable */
                for (short i_19 = 0; i_19 < 19; i_19 += 2) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((unsigned int) var_6)))));
                    var_45 = ((/* implicit */signed char) ((arr_19 [i_10]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_10])))));
                    arr_69 [i_10] [i_13] [i_14] [(unsigned char)10] = ((/* implicit */signed char) ((unsigned long long int) arr_4 [i_10] [i_13]));
                    var_46 = ((/* implicit */short) 45214521042051541ULL);
                }
                var_47 = ((/* implicit */_Bool) arr_19 [i_13]);
                var_48 = ((/* implicit */short) (-(2169165745U)));
            }
            /* vectorizable */
            for (short i_20 = 1; i_20 < 16; i_20 += 1) 
            {
                arr_73 [i_10] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_59 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (arr_24 [i_10] [i_10]))) + (((/* implicit */int) arr_38 [i_10]))));
                var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_20 + 1] [i_20 + 2])) ? (((/* implicit */int) arr_0 [i_20 + 1] [i_20 + 2])) : (((/* implicit */int) var_3))));
                var_50 = ((/* implicit */signed char) arr_70 [i_13] [i_13] [18ULL]);
            }
            for (unsigned char i_21 = 0; i_21 < 19; i_21 += 2) 
            {
                arr_76 [i_10] [i_10] [i_21] &= ((/* implicit */int) ((unsigned short) arr_26 [i_10]));
                arr_77 [i_10] = ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (((((/* implicit */_Bool) max((arr_31 [i_10] [(unsigned short)14] [i_21]), (((/* implicit */long long int) (unsigned short)5))))) ? (((((/* implicit */_Bool) arr_19 [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_52 [i_10] [i_13] [i_10] [i_21]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10]))) | (arr_17 [i_10] [i_10] [i_10]))))));
                arr_78 [(short)10] [i_10] [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((arr_8 [i_10] [i_10] [i_13] [i_21]) + (1357273246)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10] [i_13]))) : ((~(2948047224U))))) : (arr_14 [i_10] [i_10] [i_10])));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_22 = 1; i_22 < 16; i_22 += 2) 
            {
                arr_81 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)12288)) : (795251269)));
                /* LoopSeq 2 */
                for (short i_23 = 0; i_23 < 19; i_23 += 2) /* same iter space */
                {
                    arr_84 [i_10] [12U] [12U] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (arr_6 [i_10] [i_13] [i_22 + 3])));
                    var_51 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 5614774473245401000ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (5614774473245401000ULL))));
                }
                for (short i_24 = 0; i_24 < 19; i_24 += 2) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned char) (+(795251292)));
                    var_53 = ((/* implicit */short) var_4);
                }
            }
        }
        var_54 = ((/* implicit */unsigned short) arr_30 [i_10] [i_10]);
        var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2989)) ? (7938366192098455690LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))))))));
    }
    var_56 = ((/* implicit */short) var_3);
    var_57 = ((/* implicit */unsigned short) var_10);
}
