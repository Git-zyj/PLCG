/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40807
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
    var_12 &= ((/* implicit */int) (+(((((/* implicit */_Bool) (~(var_8)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_4)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) arr_5 [11] [i_1] [i_1] [i_0]);
                            arr_9 [i_0] [4ULL] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) -6841276077578198033LL));
                            arr_10 [i_3] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -528254176212117656LL)) ? (((/* implicit */long long int) var_2)) : (((((arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 1]) + (9223372036854775807LL))) << (((((arr_8 [9] [i_0 - 1] [i_0 + 2] [i_0 - 1]) + (8480672282710089887LL))) - (39LL)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) (~(var_0)));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) >= (((/* implicit */int) min(((short)-4878), (((/* implicit */short) (signed char)127)))))));
                            arr_21 [(short)15] [i_1] [i_4] [i_1] [(short)15] = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) arr_3 [i_5 + 3] [i_0 + 1])), (var_5))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)7] [(signed char)6])) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))))))) : (((/* implicit */int) (short)4878))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_17 = ((/* implicit */int) -4992418717264821827LL);
                            var_18 = 118286412;
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_5] [i_4] [i_0] [i_1 + 1] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0]))) * (var_5))))))));
                        }
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_22 [i_4] [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6630))))) : (((int) 528254176212117655LL))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-104))))), (var_11)));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            arr_31 [i_0 - 1] [7U] [i_0] [i_1] [i_0 + 2] [7U] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_29 [9LL] [i_9 + 1] [i_1] [i_1] [i_9] [i_9 + 2])))) || (((/* implicit */_Bool) (signed char)-1))));
                            arr_32 [i_9] [i_8] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) arr_2 [i_4] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0 + 1]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 2; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */int) (short)-4879)) >= (((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */long long int) ((unsigned long long int) (-(7300919057365338414ULL))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (signed char)-10))));
                        }
                    }
                    var_25 = ((/* implicit */unsigned char) min((arr_1 [i_0 - 2]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2])))))));
                    var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) max((var_9), (arr_35 [i_0 + 1] [(signed char)11] [i_0] [(short)11] [9] [(unsigned char)14])))), (arr_3 [i_1 - 1] [(unsigned char)2]))))));
                    var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)84))));
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_28 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -6841276077578198028LL)) ? (((/* implicit */int) (short)10792)) : (((/* implicit */int) (signed char)103))))));
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_0] [i_1 + 2] [i_4] [i_11] [12ULL] [9])) >> (((((((/* implicit */_Bool) arr_27 [i_0 + 2])) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (unsigned char)167)))) - (54)))));
                                arr_41 [i_1] [i_1] [i_4] [i_1 + 2] [i_1] = ((/* implicit */short) ((unsigned int) var_0));
                            }
                        } 
                    } 
                }
                for (unsigned short i_13 = 1; i_13 < 17; i_13 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_13] [i_1] [i_13] [1])) ? (((/* implicit */unsigned int) arr_3 [i_1] [(unsigned short)17])) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) % (min((var_8), (((/* implicit */unsigned int) (short)-30447))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_31 &= ((/* implicit */long long int) arr_36 [i_14] [i_14] [i_1 + 2] [i_1 + 2]);
                        arr_47 [i_1 + 1] [i_1] [i_13] [i_14] [i_14] = (+(((((/* implicit */_Bool) -6841276077578198028LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [5])))))) : (((((/* implicit */_Bool) arr_29 [14] [1] [i_1] [(short)5] [i_14] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))))));
                        arr_48 [i_0 - 1] [i_1] [i_13] [i_14] [i_1 - 1] [i_13] = ((/* implicit */unsigned char) 1795041277725870068LL);
                    }
                }
                for (int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_16 = 4; i_16 < 16; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_32 += ((long long int) (signed char)0);
                                var_33 |= ((/* implicit */short) (-((+(((/* implicit */int) arr_0 [i_0 + 2]))))));
                                var_34 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -528254176212117656LL)))) ? (((/* implicit */int) (!((!((_Bool)1)))))) : (1783857557)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_19 = 4; i_19 < 16; i_19 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)127)))) ? ((+(arr_42 [i_1] [i_15] [i_18] [i_19]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_4)) + (11162)))))))))));
                            arr_62 [i_1] [(unsigned char)5] [i_15] [(short)15] [i_1] = ((/* implicit */short) arr_40 [i_1] [i_1] [4U] [i_18]);
                            arr_63 [5] [i_1 - 1] [i_1] [13LL] [i_1 - 1] = ((/* implicit */unsigned int) 0);
                            var_36 &= ((/* implicit */long long int) arr_54 [i_19 - 2] [i_18] [i_1]);
                        }
                        arr_64 [i_0] [i_1 - 1] [i_1] [(_Bool)1] [i_15] [i_1] = ((/* implicit */long long int) (signed char)111);
                        var_37 ^= ((/* implicit */short) (signed char)67);
                        arr_65 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (((max((((/* implicit */long long int) var_0)), (-1795041277725870077LL))) * (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1]))))));
                    }
                    for (unsigned short i_20 = 1; i_20 < 14; i_20 += 1) /* same iter space */
                    {
                        var_38 -= min(((unsigned char)214), (((/* implicit */unsigned char) (_Bool)1)));
                        var_39 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)25593)), (8191LL)))) ? (((((/* implicit */_Bool) -1362150635449164108LL)) ? (var_0) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) (short)-4893))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_21 = 1; i_21 < 14; i_21 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_22 = 0; i_22 < 18; i_22 += 2) /* same iter space */
                        {
                            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((_Bool) var_4)))));
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((long long int) arr_18 [6LL] [i_22] [i_22] [i_22])))));
                        }
                        for (unsigned int i_23 = 0; i_23 < 18; i_23 += 2) /* same iter space */
                        {
                            var_42 = ((/* implicit */long long int) ((int) 1223466513438436907LL));
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0 + 2] [0] [i_23] [i_23] [i_23] [i_23])) << (((((/* implicit */int) (short)-25772)) + (25796)))));
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) var_10))));
                            arr_75 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_0 + 1]))));
                        }
                        arr_76 [i_1] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_1] [i_15] [i_21] [i_21])) << (((var_5) - (6334742846999396112ULL))))));
                    }
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((unsigned char) var_10))));
                }
            }
        } 
    } 
    var_46 = ((/* implicit */short) ((int) (+((-(((/* implicit */int) (_Bool)1)))))));
    var_47 = ((((((/* implicit */int) min((var_11), (((/* implicit */short) var_9))))) + (2147483647))) << (((((int) var_1)) + (25502))));
}
