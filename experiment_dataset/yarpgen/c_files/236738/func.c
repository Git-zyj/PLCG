/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236738
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    var_11 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_1] [i_0]))))) ^ (((arr_9 [8U] [i_2 + 2] [i_2]) | (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2 + 1] [i_0] [i_0])))));
                    arr_10 [i_1] [i_1] = ((/* implicit */int) ((_Bool) (unsigned char)85));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        var_12 |= ((/* implicit */int) arr_5 [i_1] [i_4]);
                        var_13 = ((/* implicit */signed char) max(((unsigned char)157), (((/* implicit */unsigned char) (signed char)-1))));
                        arr_16 [i_0 - 3] [(_Bool)1] [i_3] [i_1] = arr_11 [i_1] [i_1] [i_1] [i_1];
                    }
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) max(((unsigned char)99), (((/* implicit */unsigned char) ((14966603658453811811ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((3480140415255739776ULL) == (3480140415255739776ULL))))))))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)64)) == (((/* implicit */int) var_8)))))))) == ((-(12276657757516227550ULL)))));
                        arr_19 [i_1] [i_0] [i_1] [i_1] [i_3] [0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */unsigned short) arr_8 [i_3] [i_5]))))), (arr_2 [i_0 + 1]))) | (((arr_2 [i_0 - 2]) + (arr_2 [i_3])))));
                        var_16 = ((/* implicit */signed char) (+((+(max((((/* implicit */unsigned long long int) arr_8 [i_3] [i_5])), (var_2)))))));
                        arr_20 [9LL] [i_1] [9LL] [(short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2923443338958541460LL)) ? (14966603658453811820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229)))));
                    }
                    var_17 = ((((/* implicit */_Bool) ((long long int) arr_1 [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [3ULL] [i_3]))))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (arr_9 [i_1] [i_1] [i_3]))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_18 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)197))))), (((6545611779646018663ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) 18446744073709551615ULL))));
                        }
                        var_20 = ((/* implicit */short) ((((((/* implicit */int) arr_17 [i_0 - 2] [i_1] [i_1] [i_3] [i_6])) * (((/* implicit */int) (unsigned char)188)))) - (((/* implicit */int) arr_17 [(unsigned short)7] [i_1] [i_1] [(unsigned char)2] [i_6]))));
                        arr_27 [i_0] [i_0] [i_1] [i_0] [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-4886869835563483259LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)64)) - (998683586))))))) || ((((-(((/* implicit */int) (signed char)-4)))) <= (((/* implicit */int) (unsigned char)5))))));
                        arr_28 [i_0] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (-(arr_0 [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) ((-4) + (((/* implicit */int) arr_6 [i_8] [i_1] [i_1] [i_0 + 1]))));
                            var_22 = ((/* implicit */unsigned char) (+(arr_24 [i_0 - 3] [i_0] [i_0] [(unsigned short)11])));
                        }
                        arr_35 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1878904095)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned short)16)))))));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_1])) > (((/* implicit */int) arr_21 [i_0 - 1] [i_1] [i_3] [i_10]))))) + ((~(((/* implicit */int) (unsigned short)56401)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            var_24 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) arr_32 [i_0 - 3] [i_3] [4]))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-95)), (arr_0 [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_10] [i_0 - 2]))) : (arr_33 [i_0 + 1] [i_3])))));
                            arr_42 [i_0] [i_1] [10] [i_3] [i_1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_41 [i_11] [i_0] [i_1])), (((6790726408316467950LL) % (-1853450523501111825LL)))))) ? (((((arr_11 [i_1] [i_1] [i_10] [i_10]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_0 - 3] [i_0 - 3]))) : (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_14 [(short)8] [i_10] [i_3] [i_1] [i_0])) || (((/* implicit */_Bool) 3293195756U))))))))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14676))) <= (3527857927U))));
                        var_26 = min((((((((/* implicit */_Bool) 3359177740U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62425))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [4LL] [i_3]))))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62425)) && (((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) arr_38 [i_0] [i_1] [i_3] [i_10] [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_18 [i_0] [2] [(short)2] [(_Bool)1]))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                        {
                            arr_45 [i_1] [i_10] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)11578)) ? (14606053923782278792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27957))))) / (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0 - 2]))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [7LL] [i_0 - 1] [i_0 + 1] [i_0 + 1] [1] [i_3])) ? (arr_4 [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_10] [7U] [i_0 - 3] [(_Bool)1] [10U] [10U] [i_10])))));
                            arr_46 [i_1] [i_1] [i_3] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)30683)) && (((/* implicit */_Bool) (unsigned short)22402)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_40 [i_0 + 1]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 3548088073U))))))))) : (max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)50368)), (1044480)))), (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4453823744458586689LL)))))));
                            var_29 |= ((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_3] [i_10] [i_13]);
                        }
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)66)) ? (arr_4 [i_0]) : (arr_11 [i_1] [i_1] [i_14] [i_1]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])))))))) || (((/* implicit */_Bool) ((unsigned long long int) 14850443529653990151ULL)))));
                    arr_53 [i_1] [i_1] [i_14] [i_14] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_1]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)53957)), (1091925845U)))) : (arr_30 [i_0] [i_0] [5U] [i_14] [i_14]));
                    var_31 ^= ((/* implicit */signed char) (unsigned char)158);
                }
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        {
                            arr_59 [i_15] [i_15] [i_1] [i_15] [10U] = ((/* implicit */unsigned short) arr_56 [i_0 - 3] [i_1] [2LL] [i_16] [i_16]);
                            var_32 = ((/* implicit */short) var_4);
                            /* LoopSeq 2 */
                            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                            {
                                var_33 -= ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_16] [i_17]);
                                var_34 |= ((/* implicit */unsigned int) ((11235130400488413739ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (arr_43 [i_0 - 3] [10LL] [i_15] [i_16]))))))))));
                            }
                            for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
                            {
                                arr_66 [i_1] [i_18] [i_1] [i_1] [i_18] [i_15] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 478936109U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1])))))))), (((max((4020931045365553826LL), (((/* implicit */long long int) (_Bool)1)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8133)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (1984633140U))))))));
                                arr_67 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-115347393)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */int) var_8);
    var_36 = ((/* implicit */int) var_7);
}
