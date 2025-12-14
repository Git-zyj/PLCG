/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226834
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_4 [i_1 + 1] [i_0 + 1] [i_0]) : (arr_4 [i_1 + 1] [i_0 + 1] [i_0])))));
                var_13 = ((/* implicit */short) (!(((arr_3 [i_0 + 1]) || ((_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)56))) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (arr_4 [i_1] [5ULL] [i_3]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)56))))) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) max(((signed char)-56), ((signed char)-76)))))))));
                            var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) * (arr_9 [(signed char)1] [i_1 + 1] [i_2])))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1] [i_2] [i_2])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) / (arr_9 [i_0 + 1] [i_1] [(unsigned char)22])))))));
                            var_16 = ((/* implicit */long long int) ((arr_3 [i_2]) ? ((-(((/* implicit */int) (signed char)-33)))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (1369291730) : (((/* implicit */int) arr_7 [i_2]))))));
                            var_17 = ((/* implicit */signed char) 4294966272U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_15 [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) (signed char)-24))), ((unsigned short)26290))))));
                            arr_16 [i_0] [i_1] [(signed char)1] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((~(67108856U))) << (min((((/* implicit */long long int) arr_3 [(short)17])), (var_6))))))));
                            var_18 = ((/* implicit */unsigned long long int) -1836481876);
                            var_19 = ((/* implicit */int) ((unsigned short) var_9));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        arr_20 [(unsigned short)0] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((5625671220120078147ULL) >> (((/* implicit */int) min((arr_14 [i_6] [10U] [i_6]), (((/* implicit */unsigned short) arr_7 [i_6]))))))))));
        var_20 &= ((((/* implicit */int) (((-(arr_2 [i_6]))) > (((/* implicit */int) ((short) 8868238899802905407ULL)))))) & ((~(((/* implicit */int) min(((unsigned short)46172), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7] [i_7])) ? (arr_2 [i_7]) : (((/* implicit */int) ((2171023713U) == (arr_8 [i_7] [i_7 + 1] [i_7 - 2] [i_7]))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_7])) ? (arr_8 [i_7] [i_7] [i_7 - 1] [i_7]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)71)))))));
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) -1);
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                arr_31 [i_8] [i_9] [i_8] [i_10] = ((/* implicit */signed char) 822144170);
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) >= ((~(((/* implicit */int) (short)-29936))))))))))));
                arr_32 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))));
                var_25 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 8868238899802905407ULL))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
            {
                var_26 = ((_Bool) 1836481876);
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned long long int) arr_9 [i_11] [i_9] [(unsigned char)10])))));
                var_28 ^= ((/* implicit */unsigned long long int) ((int) 16960036508862082886ULL));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_9] [i_12]))));
                var_30 &= ((/* implicit */long long int) arr_36 [i_12] [10] [i_8]);
                arr_39 [i_12] [i_12] [i_12] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (1836481875)));
                arr_40 [i_12] [i_8] [i_8] [i_12] = ((((/* implicit */_Bool) arr_8 [(short)4] [i_9] [i_12] [i_12])) ? (((/* implicit */int) arr_34 [i_9] [i_12] [i_9] [i_8])) : ((~(((/* implicit */int) arr_5 [i_12])))));
            }
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_48 [i_8] [i_8] [i_13] [i_14] = (!(((/* implicit */_Bool) -1097527551)));
                        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_9 [i_8] [i_9] [i_14])))) ? (((((/* implicit */_Bool) 1369291722)) ? (arr_45 [i_8] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned long long int) 1145343759296059613LL)))))));
                        arr_49 [i_8] [i_9] [(signed char)13] [i_14] = ((/* implicit */short) var_0);
                    }
                } 
            } 
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21038))) + (8868238899802905399ULL))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned int) ((min((arr_13 [i_8] [i_8] [i_15] [i_15] [i_15]), (((/* implicit */int) (unsigned short)54975)))) / (max((((/* implicit */int) arr_33 [i_15])), (1527082984)))))) : (max((((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned short) arr_26 [i_8] [(_Bool)1]))))), (arr_17 [i_15])))));
            arr_52 [i_15] [i_15] [i_8] = ((/* implicit */short) ((signed char) ((int) ((((/* implicit */int) arr_47 [i_15] [i_15] [i_8] [i_8])) >= (((/* implicit */int) (short)1073))))));
            var_33 |= ((/* implicit */short) ((((int) arr_27 [i_8])) | (((/* implicit */int) ((short) -1836481876)))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_17 = 1; i_17 < 16; i_17 += 1) 
            {
                for (signed char i_18 = 1; i_18 < 16; i_18 += 4) 
                {
                    for (unsigned char i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        {
                            arr_62 [i_8] [i_17] [i_17] [i_18 - 1] [i_19] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_19 + 1])) ? (((/* implicit */int) arr_26 [i_17 - 1] [i_18 + 1])) : (((/* implicit */int) arr_12 [i_8] [i_19 - 1])))), (((((/* implicit */int) arr_12 [i_17 - 1] [i_17 + 1])) | (((/* implicit */int) arr_12 [i_8] [i_8]))))));
                            var_34 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_43 [i_8] [i_16] [i_18] [i_19])), ((-(-5020602739738382122LL)))));
                            var_35 = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned short) arr_47 [i_18] [i_18] [i_17] [i_16]))));
                            var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 1369291730)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -924679479)) : (max((2601841621U), (((/* implicit */unsigned int) (_Bool)1))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                arr_67 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((int) (short)-31214));
                arr_68 [i_8] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32094))))) ? (((((/* implicit */_Bool) arr_11 [i_8] [i_16] [i_8] [i_20])) ? (arr_44 [i_8] [i_8] [i_8] [i_8]) : (arr_37 [i_20]))) : ((~(1527082984)))));
                var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-21))));
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 2; i_21 < 17; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((var_38), ((~(((/* implicit */int) ((unsigned short) arr_72 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                            arr_76 [i_8] [i_16] [(short)11] [i_21 + 1] [i_22 + 1] = ((/* implicit */signed char) arr_71 [1LL]);
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (+(-1077073730))))));
                        }
                    } 
                } 
                arr_77 [i_8] [i_16] = ((/* implicit */short) (unsigned char)163);
            }
        }
        var_40 |= ((/* implicit */unsigned char) arr_50 [i_8] [i_8]);
    }
    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)127)), (var_12)))) ? (5676347095788171816LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (517444820U))))));
    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (signed char)20)) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
}
