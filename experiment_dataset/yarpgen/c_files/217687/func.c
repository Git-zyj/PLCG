/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217687
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (+((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_18 = ((/* implicit */unsigned int) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_19 &= ((/* implicit */int) ((max((18446744073709551595ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [16LL])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_20 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1]))))) <= (arr_4 [i_2]));
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_3 [i_1] [i_1]))) % (((/* implicit */int) ((signed char) arr_7 [i_1] [i_1] [i_1])))));
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_2])))));
            arr_10 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_6 [i_1] [i_1]))) > (((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) arr_0 [i_1])) - (39151)))))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_6 [i_1] [i_1]))) > (((((/* implicit */int) arr_1 [i_1])) << (((((((((/* implicit */int) arr_0 [i_1])) - (39151))) + (18055))) - (27))))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1]))) & (((arr_4 [i_1 + 2]) - (arr_4 [i_2])))));
        }
        var_23 = ((/* implicit */int) arr_8 [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) ? (20ULL) : (((/* implicit */unsigned long long int) -9020282489591538227LL))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) (~(arr_8 [i_3] [i_3])))) : ((~(4311002078281553050ULL)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [2LL] [i_3] [i_4])))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) arr_11 [i_3]))))))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_20 [i_4] [i_4 + 1] [i_4] [i_4] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_3] [i_3])))) || ((!(((/* implicit */_Bool) arr_3 [i_4] [i_4]))))));
                    arr_21 [i_3] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) (+(((unsigned int) arr_17 [i_6] [i_4 - 1] [i_4 - 1]))));
                    arr_22 [i_4] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_8 [i_5] [i_3]) : (((/* implicit */long long int) arr_16 [i_3])))));
                    arr_23 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (arr_8 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4])))))) ? ((-(((/* implicit */int) arr_12 [i_4])))) : (((((/* implicit */int) arr_13 [i_3] [i_3])) ^ (((/* implicit */int) arr_6 [i_4] [i_4]))))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [i_5] [i_3]))))))));
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_0 [i_4])))));
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) & (arr_26 [i_5]))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_3] [i_6])))))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_3 [i_5] [i_8])) : (((/* implicit */int) arr_6 [i_5] [i_8]))))))));
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    arr_31 [i_3] [i_3] [i_3] [i_9] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_4] [i_5] [i_9])) ? (arr_24 [i_3] [i_3] [i_4] [i_5] [i_5] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_9])))))) ? ((-(arr_4 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_4])) <= (((/* implicit */int) arr_11 [i_5])))))));
                    var_32 ^= ((/* implicit */short) ((((unsigned long long int) arr_7 [i_5] [i_4] [i_9])) >> (((((/* implicit */int) arr_1 [i_5])) - (810)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_34 [i_4] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_27 [i_4] [i_3] [i_3] [i_4] [i_9] [i_4]))))));
                        var_33 = arr_6 [i_4] [i_3];
                        arr_35 [i_5] [i_4] [i_5] [i_9] [i_5] &= ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_4 [i_3])))));
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_34 += ((/* implicit */_Bool) (((+(arr_37 [i_3] [i_4 - 1] [i_4] [i_5] [i_4 - 1] [i_9] [i_11]))) >> (((((((/* implicit */_Bool) arr_36 [i_11] [i_5] [i_5] [i_3])) ? (arr_33 [i_3] [i_4 - 2] [i_5] [i_9] [i_4 - 2] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5]))))) - (11417588793250708974ULL)))));
                        var_35 = (+(14135741995427998566ULL));
                        arr_40 [i_3] [i_4] = ((/* implicit */short) (~(((arr_18 [i_3] [i_4] [i_5]) / (arr_37 [i_3] [i_3] [i_4] [i_5] [i_9] [i_11] [i_11])))));
                        var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1444))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_37 ^= ((/* implicit */unsigned long long int) (-(((131040) & (((/* implicit */int) (unsigned short)65535))))));
                        var_38 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_5] [i_9] [i_12])))));
                    }
                }
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                {
                    var_39 += (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_3] [i_4] [i_4] [i_5] [i_5] [i_13]))))));
                    var_40 = ((/* implicit */signed char) arr_16 [i_4]);
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) arr_28 [i_3] [i_4] [i_5] [i_13] [i_13] [i_13] [i_13]))));
                }
                arr_45 [i_3] [i_3] [i_5] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_5] [i_5] [i_3] [i_4] [i_5])) ? (arr_4 [i_3]) : (((/* implicit */unsigned long long int) arr_16 [i_3])))) | (((((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_5] [i_4] [i_5] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) arr_16 [i_4])) : (arr_25 [i_3] [i_4] [i_4 - 1] [i_4] [i_5])))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_14 = 3; i_14 < 10; i_14 += 2) /* same iter space */
            {
                arr_49 [i_4] [i_4] [i_14] = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_26 [i_14]))));
                var_42 *= ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (signed char)3)))));
            }
            for (unsigned short i_15 = 3; i_15 < 10; i_15 += 2) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned long long int) (~(arr_43 [i_3])));
                var_44 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_39 [i_3] [i_3] [i_3] [i_4] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) arr_16 [i_3])) : (arr_19 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2])))));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    var_45 = ((/* implicit */unsigned short) ((int) (-(arr_50 [i_3] [i_4]))));
                    arr_55 [i_3] [i_4] [i_15 - 2] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_42 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3])))) ? ((-(arr_4 [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_3] [i_4] [i_4] [i_15] [i_15] [i_16])) ? (arr_50 [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_3] [i_3] [i_4 - 2] [i_4] [i_15 - 3] [i_4]))))))));
                }
                for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (signed char)119))))))));
                    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3]))))))));
                    var_48 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_4]))))));
                    var_49 = (i_4 % 2 == 0) ? (((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_13 [i_3] [i_4])) + (2147483647))) >> (((arr_30 [i_4] [i_4] [i_15] [i_17]) - (2641828022U)))))))) : (((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_13 [i_3] [i_4])) + (2147483647))) >> (((((arr_30 [i_4] [i_4] [i_15] [i_17]) - (2641828022U))) - (3727902525U))))))));
                    arr_58 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_3] [i_4 - 3] [i_4] [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))) : (arr_57 [i_15] [i_15] [i_15] [i_15] [i_4] [i_3])))) ? (((/* implicit */long long int) ((unsigned int) arr_1 [i_4]))) : ((~(arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
                }
            }
            var_50 ^= ((/* implicit */long long int) ((signed char) (+(arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
        }
        for (int i_18 = 3; i_18 < 9; i_18 += 1) 
        {
            var_51 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [(signed char)4] [i_3] [i_3])) | (((/* implicit */int) arr_11 [i_3]))))));
            arr_61 [i_3] &= ((/* implicit */int) ((unsigned short) arr_13 [i_3] [i_18 - 2]));
        }
        var_52 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_43 [i_3])) ? (arr_26 [i_3]) : (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
        arr_62 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_3] [i_3]);
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        var_53 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_19]))) : (arr_14 [i_19] [i_19])))) : (min((((/* implicit */unsigned long long int) arr_18 [i_19] [i_19] [i_19])), (arr_26 [i_19])))))) ? ((((!(((/* implicit */_Bool) arr_57 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))) ? (arr_25 [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_19]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) <= (((/* implicit */int) arr_32 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))) * ((~(19U)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            for (long long int i_21 = 1; i_21 < 9; i_21 += 4) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    {
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) (~((~(((/* implicit */int) ((_Bool) (unsigned char)0))))))))));
                        var_55 = ((/* implicit */unsigned char) ((((unsigned long long int) ((long long int) arr_52 [i_19] [i_19] [i_20]))) + (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_47 [i_19] [i_20] [i_22] [i_22])) & (((/* implicit */int) arr_3 [i_19] [i_19])))))))));
                        arr_74 [i_19] [i_20] [i_19] [i_19] = ((/* implicit */short) (~(((long long int) (+(arr_57 [i_22] [i_22] [i_20] [i_20] [i_20] [i_19]))))));
                        var_56 |= ((/* implicit */long long int) arr_57 [i_19] [i_19] [i_19] [i_19] [i_21] [i_21]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 11; i_23 += 4) 
        {
            for (long long int i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                {
                    var_57 = ((/* implicit */short) ((4311002078281553060ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110)))));
                    var_58 = ((/* implicit */long long int) ((max((((unsigned long long int) arr_25 [i_24] [i_23] [i_24] [i_23] [i_19])), (((/* implicit */unsigned long long int) ((signed char) arr_19 [i_19] [i_23] [i_23] [i_23] [i_24]))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_19] [i_23] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_19] [i_19] [i_19] [i_23] [i_23] [i_24]))) : (arr_78 [i_19] [i_23] [i_23])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))) | (arr_29 [i_19] [i_19] [i_23] [i_19]))) : ((~(arr_4 [i_19])))))));
                }
            } 
        } 
        var_59 = ((/* implicit */short) (((+((+(arr_37 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((arr_78 [i_19] [i_19] [i_19]), (((/* implicit */long long int) arr_64 [i_19])))))))));
    }
    var_60 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))));
    var_61 = ((/* implicit */short) (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)86)) && (((/* implicit */_Bool) 140737219919872ULL))))))))));
    var_62 = ((/* implicit */unsigned short) var_3);
}
