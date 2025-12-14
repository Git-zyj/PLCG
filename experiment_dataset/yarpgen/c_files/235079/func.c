/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235079
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [13ULL] = ((/* implicit */unsigned int) ((unsigned short) var_10));
        var_12 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)44));
        var_13 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)48)) ? (14532594721722081570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5753)))));
            arr_6 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [(_Bool)1] [10LL] [i_1])) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [11U] [i_1]))))), (((/* implicit */unsigned int) ((((arr_5 [i_0] [15LL]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-9207)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)9] [i_0]))) : (4294967279U)));
                    arr_12 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned char) ((((unsigned long long int) arr_0 [(_Bool)1] [i_2])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))))));
                    var_16 = ((/* implicit */unsigned short) (unsigned char)210);
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_5 = 3; i_5 < 7; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 3) 
                        {
                            arr_27 [i_5] [i_7] [i_6] [i_5 + 2] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (arr_22 [i_5 + 3] [i_6] [i_7] [i_8 + 1])));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_22 [i_4] [i_4] [(short)8] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) (+(-175611071)))) : (arr_0 [(unsigned short)1] [i_5])));
                            arr_28 [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_5 + 2] [14U] [i_6])) | (var_4)));
                            arr_29 [i_5] [i_5 - 2] [i_6] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)72)) <= (((/* implicit */int) arr_14 [i_5 - 1]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((arr_11 [i_5 + 1] [i_5 - 2] [i_5 - 1]) <= (arr_11 [i_5 - 2] [i_5 + 3] [i_5 + 1])));
                            var_19 = ((/* implicit */unsigned int) ((arr_11 [i_4] [i_5 + 1] [i_6]) > (arr_11 [i_4] [i_5 + 2] [8ULL])));
                        }
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)201)) >> (((((/* implicit */int) (unsigned char)44)) - (17))))) << (((4558217484190439152LL) - (4558217484190439143LL)))));
                            var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(short)7] [8ULL] [6U] [i_5 + 1])) ? (((/* implicit */int) arr_14 [i_5 - 2])) : (((/* implicit */int) arr_34 [i_5 + 1] [i_5 - 1] [i_5 + 2] [(unsigned char)4] [i_5 + 1]))));
                            var_22 *= ((/* implicit */unsigned char) var_1);
                            var_23 += ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_5 + 2] [i_5 - 3] [i_5 + 3]));
                        }
                        arr_35 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_14 [i_6]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_11 = 3; i_11 < 9; i_11 += 3) 
            {
                var_24 += ((/* implicit */unsigned int) ((arr_15 [i_5] [i_5 - 1]) | (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) var_6))))))));
                arr_38 [i_11] [i_11] [i_11] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_7)))))));
            }
        }
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_25 *= ((/* implicit */short) arr_18 [i_4]);
            var_26 = ((/* implicit */unsigned char) arr_0 [i_4] [i_12]);
            var_27 = ((/* implicit */unsigned long long int) arr_22 [i_4] [(_Bool)1] [(_Bool)1] [i_12]);
            arr_42 [i_4] [(short)2] [0LL] &= ((/* implicit */unsigned char) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_4))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [i_12] [i_4])), (arr_3 [i_12] [i_4] [i_4])))) : ((-(arr_22 [i_4] [i_12] [i_12] [i_12]))))))));
        }
        for (short i_13 = 2; i_13 < 8; i_13 += 1) 
        {
            var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-21627)) : (((/* implicit */int) arr_40 [i_4] [i_4] [i_4]))))) ? ((~(((/* implicit */int) arr_23 [i_13] [i_13] [i_4] [i_4])))) : (((/* implicit */int) var_8))))) ? (var_6) : (((/* implicit */int) arr_30 [i_4] [5U] [5U] [8] [i_4] [i_4]))));
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_20 [i_13] [i_4] [i_4] [i_4]))));
            var_30 = arr_5 [i_13] [i_4];
            arr_45 [i_13] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) arr_23 [i_13] [i_13 - 1] [i_4] [i_4])) : (((/* implicit */int) arr_31 [(unsigned char)9] [i_13] [(_Bool)1] [i_4] [i_4] [(_Bool)1]))))), (var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((var_2), ((unsigned char)210)))) & (((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))))) : (4286871115U)));
        }
        for (unsigned short i_14 = 2; i_14 < 8; i_14 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_15 = 4; i_15 < 8; i_15 += 3) 
            {
                for (short i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)68)) << (((((/* implicit */int) (unsigned short)3096)) - (3075))))))));
                            arr_55 [i_4] [i_14] [i_14] [i_15] = var_1;
                        }
                    } 
                } 
            } 
            arr_56 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)228)) - (((/* implicit */int) (unsigned char)222))))) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_14] [i_14 + 2] [i_14] [i_14 - 1] [i_14 - 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) / ((~(4294967292U)))))));
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                for (short i_19 = 4; i_19 < 9; i_19 += 3) 
                {
                    {
                        var_32 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_19 [i_14 - 1] [i_14 + 2]), (((/* implicit */short) (unsigned char)222)))))) & ((-(arr_62 [i_19 - 1] [i_19 - 3] [i_14 + 2] [i_14 + 1])))));
                        arr_65 [i_4] [i_4] [i_18] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)30299)) ? (((/* implicit */int) (unsigned char)34)) : (853187866)))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_14])) || (((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
        }
        arr_66 [i_4] [5U] = ((/* implicit */unsigned short) var_11);
    }
    var_34 = var_1;
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_20 = 3; i_20 < 20; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (int i_22 = 3; i_22 < 18; i_22 += 4) 
            {
                {
                    arr_74 [(_Bool)1] [i_21] [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) % (4294967279U)));
                    arr_75 [i_22] [i_22] = ((/* implicit */long long int) ((short) (short)21619));
                    var_36 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_71 [i_20] [i_20 + 1] [i_20]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_7))))) : (arr_70 [i_22]));
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) ((((arr_72 [i_20] [2U] [0U]) + (2147483647))) << (((((arr_72 [i_20] [4LL] [14U]) + (1509275616))) - (18)))));
        var_38 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_68 [i_20])) ? (var_6) : (2147483641)));
    }
    var_39 = ((/* implicit */unsigned int) var_7);
}
