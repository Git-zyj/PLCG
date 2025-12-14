/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46977
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (((unsigned long long int) 550875606U)))) - (((((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (_Bool)1)))) ? (((16385842276429691386ULL) - (16385842276429691386ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_14 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) > (16385842276429691386ULL)));
                        var_15 = (-(16385842276429691391ULL));
                        arr_15 [i_0] [i_1] [2ULL] [i_2] [i_2 + 1] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 551795802U)) ? (((/* implicit */long long int) 4294967278U)) : (arr_7 [i_0] [i_2 - 1] [i_0] [i_2])));
                    }
                    arr_16 [i_0] = arr_0 [i_0];
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */int) ((2060901797279860224ULL) <= (((((/* implicit */_Bool) (short)23758)) ? (15402126942715411532ULL) : (((/* implicit */unsigned long long int) 1505534575U))))));
                        arr_20 [i_5] [i_3 - 1] [i_2 + 2] [i_1] [i_0] = ((/* implicit */long long int) arr_13 [(unsigned char)6] [i_1] [i_2] [i_3 - 1] [i_5] [i_2 + 1]);
                        var_17 -= ((/* implicit */long long int) 551795802U);
                        var_18 = ((signed char) 17932434163203568142ULL);
                    }
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        var_19 -= ((/* implicit */unsigned int) -2080602323);
                        var_20 = ((/* implicit */int) max((var_20), (((int) arr_8 [i_2 - 1] [i_2] [i_2] [i_2]))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = 2974323431708128471LL;
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned short)57622))));
                    }
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7] [i_3] [i_1]))) - (var_0));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -857455458)) ? (var_11) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65511))))) : (2060901797279860224ULL)));
                    }
                }
                for (short i_8 = 1; i_8 < 12; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (16385842276429691391ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (7090643153422980324LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (67104768) : (((/* implicit */int) (signed char)29))))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_34 [i_0] [i_2] = ((/* implicit */signed char) -4812123992240216740LL);
                        arr_35 [i_9] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 16385842276429691392ULL)) ? (arr_12 [i_8 + 2] [i_2 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    }
                    for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        arr_40 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_32 [i_0] [i_1] [10U] [i_10]);
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) <= (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (2060901797279860240ULL))))))));
                        var_26 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 2599781977U)) ? (2060901797279860218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)124))))));
                        var_27 ^= ((/* implicit */unsigned int) var_9);
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) var_8)) ? ((+(4612604073138380840ULL))) : (((unsigned long long int) 16385842276429691377ULL))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 16385842276429691395ULL)))) ? (2060901797279860224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (arr_26 [i_11] [i_8 - 1] [i_2 + 2] [i_2 + 1] [i_11] [i_8] [2LL])))))));
                        var_30 = ((/* implicit */short) ((unsigned char) arr_24 [i_2 + 2] [i_8 - 1] [i_8]));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((arr_39 [i_0] [i_1] [i_2 + 1]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) arr_24 [i_0] [i_2] [i_2]))))))))));
                    }
                    var_32 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_38 [i_8] [i_2 + 1] [i_0] [i_0] [i_0])))) ? (((long long int) arr_12 [i_0] [i_1] [i_8])) : (((/* implicit */long long int) ((int) 2863791028U))))))));
                    var_33 = ((/* implicit */unsigned short) ((unsigned int) ((short) arr_1 [i_8 + 1])));
                }
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_34 = ((/* implicit */int) 5131154917791732111LL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_47 [i_0] [i_0] [i_2] [i_12] [i_13] [i_0] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10941)) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7090643153422980325LL)) ? (((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_0] [i_0])) : (2863791019U))))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) == (3298534883328LL)))));
                        arr_48 [(unsigned short)12] [i_1] [15] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_36 [7LL] [i_12] [i_1] [i_0]))) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(signed char)12] [i_0] [(signed char)12])) : (((/* implicit */int) arr_37 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] [i_12]))));
                    }
                    for (unsigned short i_14 = 4; i_14 < 14; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((arr_23 [i_14] [i_14] [i_14 - 2] [i_12] [i_2 + 1] [6] [i_1]) != (arr_23 [i_14] [i_14] [i_14 - 2] [i_1] [i_2 + 1] [i_1] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)0)))) : (((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2] [i_2])) ? (arr_23 [i_14] [i_2 + 1] [i_14 - 2] [i_12] [i_2 + 1] [i_2] [i_2 + 1]) : (arr_23 [i_14 + 2] [i_14] [i_14 - 2] [i_2 - 1] [i_2 + 1] [i_0] [i_0])))));
                        var_38 = ((/* implicit */_Bool) ((int) (signed char)41));
                        var_39 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 1630499167)) : (2233785415175766016LL))));
                        arr_52 [(short)13] = ((/* implicit */unsigned short) ((_Bool) ((int) ((unsigned int) (_Bool)1))));
                        arr_53 [i_2] = var_5;
                    }
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_10))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    arr_56 [i_0] [i_0] [i_0] [i_15] = ((/* implicit */_Bool) arr_10 [i_15] [(unsigned char)14] [i_0] [i_0]);
                    var_41 = ((unsigned short) (signed char)-48);
                }
                var_42 &= var_1;
            }
            for (int i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                arr_60 [i_0] [i_1] [10U] = ((/* implicit */unsigned int) ((_Bool) ((unsigned char) arr_6 [i_0] [i_1] [i_0])));
                var_43 = ((/* implicit */unsigned short) max((((unsigned int) (signed char)30)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_51 [i_16] [i_16] [i_1] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_51 [i_1] [i_1] [i_16] [i_16] [i_0] [i_0] [i_16])))))));
                var_44 = ((/* implicit */_Bool) ((((unsigned int) arr_38 [i_0] [i_0] [i_0] [i_1] [i_16])) + (arr_36 [i_16] [i_16] [i_0] [i_16])));
            }
            var_45 ^= ((/* implicit */int) ((((unsigned int) arr_38 [i_0] [i_0] [i_0] [i_1] [i_1])) <= (((/* implicit */unsigned int) (~(arr_38 [i_1] [i_1] [i_1] [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            arr_63 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((4707043445757043159ULL) > (16448877472652524278ULL)));
            var_46 = ((/* implicit */unsigned char) (-(arr_12 [i_0] [i_17] [i_0])));
            arr_64 [i_0] [i_17] [i_17] = ((/* implicit */unsigned long long int) var_3);
            var_47 -= ((/* implicit */unsigned int) (unsigned char)255);
            var_48 = ((/* implicit */unsigned long long int) arr_57 [i_0] [i_17] [i_17]);
        }
        for (short i_18 = 2; i_18 < 12; i_18 += 4) 
        {
            arr_69 [i_0] = ((/* implicit */signed char) arr_46 [i_0] [i_0] [i_18 + 3] [i_18 + 3] [i_18]);
            var_49 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_66 [i_0])) : (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (-(-1998646875765281664LL))))))))));
        }
        for (unsigned short i_19 = 3; i_19 < 14; i_19 += 3) 
        {
            arr_72 [i_19] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)37)) ? (((((/* implicit */int) (short)32767)) + (((/* implicit */int) ((unsigned short) 10061476507209060411ULL))))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (_Bool)0)))))));
            arr_73 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_10);
            arr_74 [i_0] &= ((/* implicit */unsigned short) ((unsigned long long int) (signed char)127));
        }
        var_50 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 2060901797279860223ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (3982466182U))));
    }
    var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (274877644800ULL))))))))));
    var_52 = ((/* implicit */unsigned short) (!(((min((((/* implicit */unsigned int) (_Bool)1)), (1431176268U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
}
