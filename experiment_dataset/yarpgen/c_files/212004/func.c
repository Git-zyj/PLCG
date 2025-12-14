/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212004
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
    var_12 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned short)21774)))))))));
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [3ULL] [i_2] = (!(((/* implicit */_Bool) var_0)));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_4] [i_4]))))))))));
                            arr_14 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) var_10)))) ^ ((((_Bool)0) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) var_8)))))))));
                            var_15 -= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_10)) - (188)))))))), ((!(((/* implicit */_Bool) arr_0 [i_4]))))));
                        }
                        var_16 = ((/* implicit */int) var_4);
                        var_17 = var_2;
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1901164736)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)17))))), ((((~(4293918720U))) ^ (((/* implicit */unsigned int) ((var_0) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_5])))))))));
                        arr_18 [i_1] = ((/* implicit */unsigned char) var_5);
                        var_18 = ((/* implicit */unsigned short) ((short) var_4));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-7018)) : (((/* implicit */int) arr_15 [i_0] [i_6 - 2] [i_2])))));
                            arr_23 [i_0] [7] [i_2] [i_2] [4LL] [i_6] = ((/* implicit */unsigned short) min((((((arr_11 [6] [i_2] [i_6 - 1]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) var_2))));
                            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (((/* implicit */int) (short)-32747)) : (((/* implicit */int) (unsigned short)43463)))))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) var_4))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned char) var_0);
                            var_21 = ((/* implicit */unsigned int) ((unsigned short) var_4));
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_7] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_7] [i_0])) ? (((/* implicit */int) var_4)) : (arr_7 [i_0] [i_1] [i_2] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [0U] [i_2] [i_0] [i_0]))))) : (((/* implicit */int) (!((_Bool)1))))));
                        }
                        arr_27 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned char) min((arr_3 [i_2] [i_2] [i_2]), ((_Bool)1)))), (min((((/* implicit */unsigned char) arr_3 [i_5] [i_1] [i_0])), ((unsigned char)151)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)65516)) <= (((/* implicit */int) (short)4297))))));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_9 + 1] [i_9 - 1] [i_9 - 1] [(short)1] [i_9 - 1])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_19 [i_9] [i_9] [i_9 - 1] [i_9 + 1] [i_9 - 1]))));
                            arr_34 [i_9] [i_1] [i_1] [i_2] [i_8] [i_9] = (_Bool)1;
                        }
                        arr_35 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */long long int) var_8);
                    }
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_10])))))));
                        var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_10]))))) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (unsigned short)65516)), (-4728217857936289880LL))))) : (var_0)))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_11))))));
                        var_26 = ((/* implicit */unsigned int) var_1);
                        arr_39 [i_1] [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) & (((/* implicit */int) var_1)))) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((-1712594361) / (((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) min((arr_13 [i_2] [i_0] [4U] [i_2] [i_2]), (((/* implicit */short) var_7)))))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) / (((long long int) (unsigned short)58059))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 9; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) var_4))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [(short)5] [i_0]))) & (var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11253)))))) : (((/* implicit */int) var_4))));
                            var_28 = ((/* implicit */_Bool) min((var_28), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_42 [i_11 - 1] [i_11] [i_12]) ? (((/* implicit */int) arr_29 [i_11 + 2] [(unsigned char)2] [i_13] [i_14] [i_14])) : (((/* implicit */int) arr_29 [i_11 - 1] [i_11] [i_11 + 2] [i_11 + 2] [i_11]))))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)22090)) : (((/* implicit */int) (_Bool)1)))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_8 [i_11 + 2])) : (4428298633286494030ULL)))));
                            arr_48 [i_0] [i_0] [(short)9] [i_0] [i_11] [i_11] [i_0] = ((/* implicit */unsigned char) (!(var_3)));
                        }
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_11 + 2])) << (((((/* implicit */int) arr_0 [i_11 + 1])) - (7878)))))) ? (((((/* implicit */int) (unsigned short)54308)) / (1293113288))) : (((/* implicit */int) arr_0 [i_11 - 1]))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_11 - 1] [i_11] [i_11 - 1] [i_11 + 1])) ? (((/* implicit */int) var_1)) : (var_11)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64916))) * (2431862812U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 1; i_16 < 8; i_16 += 1) 
                        {
                            arr_54 [i_0] [i_11] [i_11] [i_12] [i_13] [i_16 + 3] = ((/* implicit */unsigned char) var_5);
                            arr_55 [i_0] [i_11] [10ULL] [(unsigned short)9] [i_16] [i_13] = ((/* implicit */unsigned short) ((arr_45 [i_11]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))));
                        }
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_8 [i_11 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16320)) * (((/* implicit */int) arr_28 [(unsigned char)4] [i_13])))))))) ? ((-(arr_10 [(signed char)8] [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 2]))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_8)))))))));
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((_Bool) arr_37 [i_17] [i_13] [i_12] [i_11 + 1])) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65516))))), (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_11] [i_0]))) * (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) (unsigned short)43445)))))))))))));
                            var_34 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)30)))))))), (max((((((/* implicit */_Bool) (signed char)111)) ? (4286578688LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))));
                            arr_58 [i_11] [8LL] [i_12] [i_12] [i_11 - 1] [i_11] = ((/* implicit */unsigned long long int) var_10);
                        }
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_42 [i_12] [i_11] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((arr_16 [i_0] [i_0] [3ULL] [(short)0] [i_13]) / ((-(6597069766656ULL)))))));
                    }
                    var_36 = ((var_0) ^ (((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_41 [i_0] [i_11 + 1] [(_Bool)1])))));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 1; i_18 < 8; i_18 += 1) 
                    {
                        arr_63 [i_0] [i_11] [i_11] [i_11] [i_18] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                        var_37 |= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1636))));
                        var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_3)))) : (min((var_0), (((/* implicit */int) arr_52 [i_0] [(short)4] [0U] [i_0] [i_0]))))))) ? (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0] [i_11 - 1] [i_18])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_3))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        arr_66 [i_0] [i_11] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_3) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) > (4206184637U))))) < (((((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (60619890U))))) : (arr_8 [i_11 + 1])))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)65516)))))));
                    }
                }
            } 
        } 
    }
}
