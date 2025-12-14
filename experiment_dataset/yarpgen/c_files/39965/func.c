/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39965
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
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-124)), ((unsigned short)24576))))) - (var_2)))) % (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (((((/* implicit */_Bool) var_5)) ? (7601081216978583158LL) : (((/* implicit */long long int) var_8))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((int) ((((/* implicit */int) (unsigned short)32768)) % (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) var_1);
            var_15 = ((/* implicit */int) max((var_7), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) min((var_11), (arr_4 [i_0] [i_0] [i_1])))))))));
            var_16 = ((/* implicit */long long int) max((max((var_4), (((/* implicit */int) arr_0 [i_0 - 2] [i_1 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)32759)) : (arr_4 [i_0] [i_0] [(signed char)18])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (var_10))))))));
            var_17 -= ((/* implicit */_Bool) (+(((arr_1 [i_0 - 1]) % (((((/* implicit */_Bool) arr_2 [i_1] [(short)22])) ? (1231974679) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29311)) - (((/* implicit */int) (unsigned short)32777))))), (0ULL)));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_6 [i_0 - 1]))) | (min((var_4), (((/* implicit */int) arr_6 [i_0 + 2]))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = arr_2 [i_0 + 1] [i_0];
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_21 = ((max((var_4), (((/* implicit */int) ((unsigned short) (unsigned short)36224))))) / (min((((/* implicit */int) arr_11 [(signed char)12])), (max((((/* implicit */int) arr_13 [i_0] [(signed char)20] [i_0] [(signed char)20])), (arr_7 [i_0 - 2] [i_0 - 2] [i_0]))))));
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_22 = ((/* implicit */short) var_9);
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32776))) % (11409083147606980123ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)32768)))), ((_Bool)0)))))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((((/* implicit */_Bool) (-(arr_9 [i_5])))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) / (7144116799317500993ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        var_25 -= ((/* implicit */long long int) var_8);
                        var_26 -= ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_11 [(short)18]))))), (((unsigned char) arr_15 [i_6] [i_5] [i_4])))))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [12] [i_5]);
                        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_8)), (arr_9 [1U])))))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (arr_22 [i_3] [i_5])))) ? (min((arr_18 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)32768)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_14 [i_3] [i_5] [i_7 + 1])))))))));
                    }
                }
                for (signed char i_8 = 3; i_8 < 23; i_8 += 1) 
                {
                    var_29 ^= ((max((((((/* implicit */_Bool) (signed char)-80)) ? (arr_2 [i_0] [i_3]) : (((/* implicit */int) arr_12 [i_0] [(unsigned char)16] [i_0] [i_8])))), (-1442243242))) / (var_4));
                    var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_8 + 1] [i_4])) ? (arr_8 [i_0 - 1] [i_8 - 2] [i_4]) : (((/* implicit */unsigned long long int) arr_19 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_8] [i_8 - 3])))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_3] [i_8 - 2] [(signed char)7] [i_8] [i_8 - 1] [i_8])) ? (arr_24 [i_0] [i_8 - 2] [20] [i_0] [i_8] [i_8]) : (((/* implicit */int) (unsigned short)0)))))));
                    var_31 = ((/* implicit */unsigned int) min((127ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_8] [i_3] [i_4] [i_3])) >> ((((~(((/* implicit */int) (unsigned short)65535)))) + (65565))))))));
                    var_32 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [22])) / (arr_23 [i_0] [i_0 + 1] [i_8 - 3] [i_8]))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (arr_22 [(short)21] [i_8]))), (((/* implicit */unsigned int) arr_24 [i_0] [i_3] [i_8 - 2] [i_0 + 1] [i_8 - 2] [i_0 + 1]))))) ? (min((((var_1) % (arr_25 [i_0] [i_8] [(unsigned char)14] [i_4] [i_0] [i_8 + 1]))), (((/* implicit */unsigned int) min((arr_7 [i_0 - 2] [i_3] [i_4]), (((/* implicit */int) (unsigned short)50351))))))) : (((((/* implicit */unsigned int) max((244933168), (((/* implicit */int) (signed char)90))))) | ((~(var_2)))))));
                }
                for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_34 ^= ((/* implicit */int) (!((!((!(((/* implicit */_Bool) arr_10 [i_4] [i_9]))))))));
                    var_35 *= ((/* implicit */short) ((int) ((var_2) + (((((/* implicit */unsigned int) var_11)) / (arr_25 [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2]))))));
                    var_36 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_4]);
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_0]))))) - (((((/* implicit */_Bool) ((int) arr_22 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) - (arr_8 [i_9] [i_9] [i_9])))))));
                }
                for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 2) 
                {
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_3]))))), ((unsigned short)50332)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)105))))) : (0U))))));
                    var_39 = ((/* implicit */long long int) var_11);
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_6))) | (((/* implicit */int) arr_27 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1])))))));
                        var_41 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((-202147789), (((/* implicit */int) var_0))))))) && ((!(((/* implicit */_Bool) ((arr_22 [i_0] [i_0]) % (((/* implicit */unsigned int) var_8)))))))));
                        var_42 = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) (unsigned short)36224)) ? (((/* implicit */int) (signed char)127)) : (arr_2 [i_0] [i_0]))), (((/* implicit */int) arr_28 [i_0] [i_3] [i_4] [i_0]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 9605129172412936595ULL)) && (((/* implicit */_Bool) (unsigned char)232)))) ? (arr_18 [i_0] [i_3]) : (((/* implicit */unsigned long long int) min((arr_25 [i_0] [i_12] [14LL] [i_12] [10ULL] [i_12]), (((/* implicit */unsigned int) (unsigned char)49))))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36212))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)29)))))))));
                        var_44 = (~(3279775977489275374ULL));
                        var_45 = ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)49))))))));
                        var_46 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(arr_16 [i_0 + 2] [i_3] [i_10 + 1])))), (((2665109006U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned long long int) var_4);
                        var_48 = ((_Bool) (_Bool)1);
                        var_49 = ((/* implicit */_Bool) ((signed char) min((arr_3 [i_10 - 1]), (((/* implicit */unsigned long long int) arr_25 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))));
                        var_50 = ((/* implicit */long long int) ((max((((var_1) != (((/* implicit */unsigned int) 2147483646)))), (((arr_32 [i_0] [i_3] [i_3] [i_13]) != (var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)120))))) : (((((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_3] [i_10])) ? (((/* implicit */unsigned int) var_11)) : (arr_22 [i_3] [i_0]))) >> (((((((/* implicit */_Bool) arr_30 [i_0 + 2] [19LL])) ? (arr_9 [i_4]) : (arr_20 [2LL] [i_4] [i_13]))) - (3801741977U)))))));
                    }
                }
            }
        }
        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (var_9) : (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_30 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)50328)) ? (((/* implicit */int) (signed char)12)) : (1063398040))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_8) | (arr_37 [i_0] [i_0] [i_0 + 2] [i_0] [i_0])))) && (((/* implicit */_Bool) (~(arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        var_52 -= ((/* implicit */long long int) arr_37 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]);
    }
}
