/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238163
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
    var_11 = (-(((/* implicit */int) ((short) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)40641))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)2] [i_0] = ((/* implicit */signed char) ((arr_2 [21]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_2 [(unsigned char)2])))))))));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-((+(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_5))))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                arr_14 [(unsigned short)23] [(signed char)4] [i_0] [(unsigned short)11] [22LL] = ((/* implicit */short) ((((((/* implicit */int) max((var_1), (var_1)))) << (((max((var_0), (((/* implicit */long long int) var_9)))) - (7899672034659930591LL))))) != (((/* implicit */int) max((var_7), (max((((/* implicit */unsigned short) var_1)), (arr_0 [i_0]))))))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13814))) == (arr_6 [i_1 + 1] [i_1 + 1] [(signed char)4] [i_2 + 1])))), (((long long int) var_1)))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                var_14 |= ((/* implicit */signed char) arr_2 [16ULL]);
                                var_15 = ((/* implicit */_Bool) -907189224);
                                var_16 = (i_0 % 2 == zero) ? (((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) / (((arr_13 [(short)3] [10] [18U] [i_0] [2] [(_Bool)1] [(_Bool)1]) >> (((907189236) - (907189174))))))))) : (((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) * (((arr_13 [(short)3] [10] [18U] [i_0] [2] [(_Bool)1] [(_Bool)1]) >> (((907189236) - (907189174)))))))));
                                arr_17 [(unsigned char)3] [i_0] [20ULL] [(_Bool)1] = ((/* implicit */unsigned short) max((max((8432729930616446235ULL), (min((arr_16 [(unsigned char)15] [i_0] [(signed char)16] [(unsigned short)3] [(unsigned short)6] [18] [(short)19]), (((/* implicit */unsigned long long int) arr_6 [(unsigned char)5] [(signed char)23] [(short)3] [21U])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)2] [(short)14] [4LL] [(short)13])) ? (((/* implicit */int) arr_12 [(signed char)12])) : (((/* implicit */int) arr_4 [7LL] [(unsigned short)8] [9LL]))))))))));
                                arr_18 [(signed char)8] [i_0] [9LL] [i_0] [5ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_15 [i_0] [16] [(unsigned char)6] [i_1 + 1] [i_2 + 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -907189233)) ? (907189221) : (((/* implicit */int) (short)-3564)))))));
                            }
                            arr_19 [i_0] [0ULL] [(unsigned char)20] [1LL] = ((/* implicit */short) min((min((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_3 [5LL] [(signed char)19]))))), (((((/* implicit */_Bool) arr_16 [(short)1] [i_0] [(short)24] [17LL] [3ULL] [i_0] [8LL])) ? (6587601732708106403LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3599))))))), (((/* implicit */long long int) arr_11 [(unsigned char)6] [7U] [(unsigned char)18] [11]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) arr_21 [(signed char)19] [(unsigned char)13] [14LL]);
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_26 [i_7] [(_Bool)1] [(short)0] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [(signed char)2] [i_1 - 2] [(unsigned short)0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_21 [(signed char)20] [i_1 - 2] [19LL])))) : (arr_6 [3ULL] [i_1 - 2] [(signed char)2] [(short)23])));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) (unsigned char)136))) <= (max((arr_2 [i_0]), (arr_2 [(unsigned short)18])))));
                            var_19 = arr_8 [(unsigned char)12] [(signed char)20] [(signed char)20];
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_1 - 1]))))), (max((var_4), (((/* implicit */long long int) var_9))))));
                            var_21 += ((/* implicit */unsigned short) (+(-907189233)));
                        }
                    }
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_16 [(signed char)6] [(signed char)6] [(unsigned char)12] [(unsigned char)12] [24U] [(unsigned char)4] [12ULL]), (((/* implicit */unsigned long long int) (short)-29790))))))))) ^ (arr_6 [5] [(short)23] [(unsigned short)24] [11LL])));
                    arr_32 [i_0] [(signed char)17] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (max((arr_16 [(unsigned char)1] [i_0] [7LL] [i_6] [i_6] [(short)10] [(short)2]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)3968))) + (arr_25 [(signed char)3] [(unsigned char)5])))))) : (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1 - 2] [(unsigned short)1] [i_1 - 2] [i_0])), ((-(arr_8 [1ULL] [(short)21] [1U])))))));
                    arr_33 [i_0] [3ULL] [4LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [(short)20] [(unsigned char)23] [9ULL] [(short)17] [(signed char)1])) >> (((arr_9 [8LL] [11LL] [0LL]) - (1314418609660821726ULL)))));
                }
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            {
                                arr_41 [(unsigned short)3] [i_0] [(signed char)13] [2] [(signed char)6] [(short)17] [(signed char)1] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)138)) != (((/* implicit */int) (signed char)48))))));
                                arr_42 [(short)9] [(signed char)13] [21ULL] [i_0] [20LL] [8LL] [(unsigned char)12] = ((/* implicit */_Bool) arr_6 [13LL] [14U] [(signed char)14] [(short)12]);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */short) ((((((((/* implicit */int) var_5)) | (((/* implicit */int) arr_37 [i_1 + 1] [(unsigned char)22] [(_Bool)0] [(unsigned short)0])))) + (2147483647))) >> (((((/* implicit */int) arr_37 [i_1 - 1] [14LL] [(unsigned short)18] [24U])) / (((/* implicit */int) (short)-20093))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    arr_45 [(short)19] [i_0] [22LL] [4U] = ((/* implicit */long long int) max((((/* implicit */int) ((arr_24 [i_1 - 1] [i_1 + 1]) > (var_0)))), ((-(((/* implicit */int) var_8))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) max((arr_30 [18LL] [4ULL] [i_1 - 1] [(unsigned short)10] [23]), (arr_30 [(short)0] [(_Bool)1] [i_1 - 2] [(unsigned char)20] [(signed char)15])))) / (((((/* implicit */_Bool) arr_30 [1LL] [13ULL] [i_1 - 1] [13U] [24ULL])) ? (((/* implicit */int) arr_22 [5LL] [19] [i_1 + 1])) : (((/* implicit */int) var_6)))))))));
                            var_25 *= ((/* implicit */long long int) ((((max((((/* implicit */long long int) arr_12 [(unsigned short)9])), (arr_44 [(short)3] [15LL] [(unsigned char)19] [(signed char)10]))) - (((/* implicit */long long int) ((((/* implicit */int) (short)20101)) + (((/* implicit */int) arr_1 [(signed char)11] [(unsigned char)4]))))))) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            arr_52 [(_Bool)1] [17] [i_0] [17U] [19ULL] = ((/* implicit */signed char) arr_11 [(unsigned short)7] [(signed char)6] [(unsigned short)23] [(unsigned short)14]);
                        }
                        arr_53 [(unsigned char)8] [(signed char)15] [0ULL] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_6))))))));
                        var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)-20069)) ? (6587601732708106400LL) : (((/* implicit */long long int) -907189229)))) : (var_3))), (((/* implicit */long long int) (+(((((/* implicit */int) var_5)) - (arr_47 [i_0] [(signed char)10] [24U] [i_0]))))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        arr_56 [22LL] [24U] &= ((/* implicit */signed char) ((int) arr_51 [(signed char)6] [(signed char)24] [(signed char)24] [(short)2] [0ULL] [14U]));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            arr_59 [(signed char)18] [7LL] [(short)16] [i_0] [(unsigned short)8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [10LL] [20U])) ? (arr_40 [(short)1] [19LL] [(short)13] [(_Bool)1] [(unsigned char)4] [(unsigned short)22] [21ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)4] [20LL])))))) ? (((/* implicit */unsigned long long int) ((arr_46 [(unsigned char)20] [17ULL] [3ULL] [(unsigned short)3]) + (((/* implicit */long long int) ((/* implicit */int) arr_30 [(short)8] [(unsigned char)10] [(short)20] [(signed char)4] [(short)22])))))) : ((+(arr_9 [(signed char)13] [21LL] [(unsigned short)8]))))), (((/* implicit */unsigned long long int) (signed char)32))));
                            arr_60 [i_0] [(signed char)12] [(short)1] [5ULL] = ((/* implicit */unsigned short) arr_4 [19LL] [13LL] [10LL]);
                            arr_61 [(short)15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [(unsigned short)3] [(_Bool)1] [i_1 - 2] [(unsigned char)19])))))) >> (((((/* implicit */int) var_7)) - (55177)))));
                            var_27 *= ((/* implicit */signed char) max((var_8), ((short)20092)));
                        }
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned short)127)), (arr_24 [17] [(unsigned short)0]))) + (((/* implicit */long long int) ((/* implicit */int) arr_35 [6ULL] [(signed char)3])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(short)15] [(unsigned char)11])) - (((/* implicit */int) arr_22 [(unsigned short)12] [20U] [20U]))))) + (arr_62 [i_1 - 2] [(unsigned short)8] [i_1 + 1] [i_18] [i_1 + 1])))));
                            var_29 = ((/* implicit */unsigned int) arr_25 [14U] [(_Bool)1]);
                        }
                        arr_64 [i_0] [(signed char)1] = ((/* implicit */unsigned short) ((((_Bool) arr_51 [20ULL] [(signed char)3] [(signed char)11] [(unsigned short)2] [21LL] [(_Bool)0])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 - 1] [11LL] [8]))) + (((var_0) + (var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)-20076))) ? (((((/* implicit */int) (short)-9640)) ^ (((/* implicit */int) arr_34 [23LL])))) : ((-(((/* implicit */int) var_10)))))))));
                    }
                }
                for (unsigned short i_19 = 2; i_19 < 23; i_19 += 4) 
                {
                    arr_68 [i_0] [(signed char)18] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)20077)) / (((((((/* implicit */int) arr_38 [(unsigned char)22])) * (((/* implicit */int) (signed char)62)))) / (((((/* implicit */_Bool) arr_27 [15LL] [(unsigned short)2] [15] [(unsigned short)15] [(unsigned short)20] [(unsigned short)15] [5LL])) ? (((/* implicit */int) arr_3 [(unsigned short)20] [2LL])) : (((/* implicit */int) var_1))))))));
                    arr_69 [20ULL] [i_0] [(signed char)21] = var_0;
                }
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), (var_9)))))));
}
