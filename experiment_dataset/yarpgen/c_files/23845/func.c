/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23845
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_13 = ((/* implicit */unsigned long long int) ((int) (signed char)-45));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) arr_10 [i_2] [i_2] [(signed char)0] [4ULL] [6ULL] [(_Bool)1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)0])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [(short)1] [i_0] [i_0] [i_3] [(_Bool)1] [i_0] [6] = ((((/* implicit */int) arr_13 [i_3] [i_4 - 1] [(signed char)9] [i_4] [i_4] [(unsigned short)5] [3U])) - (((/* implicit */int) ((unsigned char) arr_13 [i_4] [(unsigned short)5] [i_3] [i_2] [i_2] [i_1] [i_0]))));
                            arr_17 [i_0] [(_Bool)1] [(signed char)8] [i_1] [i_3] [2] [(signed char)8] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_4 - 1]))));
                        }
                        var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [1LL] [i_3] [i_1]))))) <= (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [7LL] [i_0] [0ULL] [i_0])));
                    }
                } 
            } 
        } 
        arr_18 [i_0] [7LL] = (!(((/* implicit */_Bool) 4023958109U)));
        arr_19 [i_0] = ((/* implicit */unsigned char) (signed char)44);
    }
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    arr_27 [i_5] [i_6] [i_6 + 4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 + 1] [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned short) arr_30 [i_5] [(_Bool)1] [i_7] [(_Bool)1]);
                                arr_36 [i_5] [i_6] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) max(((unsigned char)32), (((/* implicit */unsigned char) (signed char)-44))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_22 [12U] [i_6 + 1] [i_5 + 2])) ? (((/* implicit */int) (unsigned short)41371)) : (arr_22 [i_5 + 2] [i_6 + 3] [i_5 + 2]))), (arr_22 [i_6] [i_6 + 3] [i_5 - 1])));
                }
            } 
        } 
        var_18 ^= ((/* implicit */long long int) var_5);
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        arr_41 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-60)) || ((_Bool)1)))) < (((/* implicit */int) ((unsigned short) arr_30 [i_10] [11LL] [14LL] [i_10])))));
        arr_42 [i_10] = ((/* implicit */unsigned short) min((((unsigned int) (unsigned short)512)), (((/* implicit */unsigned int) (signed char)-111))));
    }
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)43)) : ((~(((/* implicit */int) (signed char)127)))))), (((/* implicit */int) (unsigned char)94))));
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (unsigned short)24153)))) : (((((/* implicit */int) (unsigned short)41383)) + (((/* implicit */int) var_2)))))), ((-(((((/* implicit */_Bool) -242218222)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_52 [14LL] [i_12] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((((/* implicit */_Bool) arr_45 [i_11])) ? (((/* implicit */int) (_Bool)0)) : (var_8))))) : (arr_48 [i_11] [i_11] [i_11])));
                arr_53 [16ULL] [(signed char)16] [i_13] &= ((/* implicit */short) var_1);
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_57 [(unsigned char)7] [i_11] [i_14] = max((((/* implicit */short) arr_51 [i_11])), (var_11));
                var_22 = ((/* implicit */signed char) ((max((1939602781685320198LL), (((/* implicit */long long int) arr_55 [i_11] [i_11] [i_11])))) << (((((-1939602781685320198LL) + (1939602781685320258LL))) - (59LL)))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41371)) >> (((196802811) - (196802789)))));
            }
            /* LoopNest 2 */
            for (signed char i_15 = 4; i_15 < 19; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) arr_56 [i_11] [(unsigned char)1] [i_11]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            arr_64 [(signed char)6] [i_11] [(signed char)6] = ((/* implicit */unsigned char) ((3079643970U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))));
                            var_25 = ((/* implicit */short) ((arr_54 [i_11] [3ULL]) + (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_15 - 2])))));
                        }
                        for (int i_18 = 1; i_18 < 19; i_18 += 1) 
                        {
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_62 [(signed char)5] [16ULL] [(signed char)5] [i_18])))));
                            arr_69 [i_18] [i_18] [i_11] [i_18] [i_18] [(unsigned char)18] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_68 [i_15 - 1])) || (((/* implicit */_Bool) arr_68 [i_15 - 2])))), (((((/* implicit */long long int) var_8)) == (arr_68 [i_15 - 1])))));
                            var_27 = ((/* implicit */signed char) 1805100794U);
                        }
                        var_28 ^= ((((/* implicit */unsigned long long int) arr_68 [i_15 - 4])) % (2521454937687804006ULL));
                        var_29 ^= ((/* implicit */_Bool) max((arr_48 [(_Bool)1] [(signed char)2] [(_Bool)1]), (((/* implicit */int) var_6))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            var_30 |= ((/* implicit */int) ((((/* implicit */_Bool) 3079643948U)) ? (var_1) : (((/* implicit */unsigned long long int) arr_48 [8ULL] [i_15] [8ULL]))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_15] [i_15 - 2] [i_15] [i_15])) - (((/* implicit */int) arr_62 [i_11] [i_15 - 1] [i_19] [i_19]))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [(_Bool)1] [i_15 + 1] [i_15])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))) : (((/* implicit */int) (unsigned char)159))));
                        }
                    }
                } 
            } 
            arr_72 [17U] [(unsigned char)4] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((1215323326U) << (((279223176896970752ULL) - (279223176896970735ULL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_1)))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)41384)) < (((/* implicit */int) (unsigned short)41387))))))) : (((/* implicit */int) var_11))));
            var_33 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) < (((((/* implicit */unsigned long long int) 0LL)) - (((unsigned long long int) (unsigned short)35916))))));
            var_34 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_43 [i_11])))), (((/* implicit */int) max((arr_43 [i_11]), (arr_43 [i_12]))))));
        }
        arr_73 [i_11] = ((/* implicit */signed char) var_10);
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)-30))) ? ((~(2361899645008081839LL))) : (((/* implicit */long long int) min((((/* implicit */int) (short)-10530)), (-196802810))))));
    }
}
