/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47919
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
    var_17 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) 9152821581168018146LL);
                arr_6 [i_1] = ((/* implicit */signed char) arr_3 [i_0] [(short)2]);
                var_19 = ((/* implicit */unsigned char) (+(arr_3 [10] [10])));
                /* LoopSeq 3 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((var_3) ? (((/* implicit */int) arr_4 [3] [10LL])) : (((/* implicit */int) arr_4 [i_0] [i_2])))) : (((/* implicit */int) ((signed char) (_Bool)0))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!((!(arr_8 [i_0] [i_2 + 1] [i_0]))))))));
                        var_22 |= ((/* implicit */unsigned char) 69472869U);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_15 [i_1] [(short)5] [7U] [i_1] [7U] [7U] [(unsigned char)8] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_1] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)16380)) : (((/* implicit */int) (signed char)-89))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (268173312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_12 [8LL] [(signed char)3] [i_1] [(short)11] [(signed char)2] [i_2 - 2])))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [7LL] [i_2]))))))) ? (((/* implicit */int) arr_9 [i_1] [8] [2ULL])) : (((((/* implicit */_Bool) 1441251734)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))));
                                arr_17 [i_1] [i_1] [i_2] [(unsigned char)4] [(_Bool)0] [i_2] [1ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((signed char) 91881557U))) : (((/* implicit */int) (short)-2699))));
                                var_23 -= ((/* implicit */unsigned long long int) ((unsigned char) ((short) max((var_8), (((/* implicit */unsigned int) (signed char)75))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1414502532149139663ULL))) + (((/* implicit */unsigned long long int) (-(var_11)))))) & (((((/* implicit */_Bool) ((int) arr_2 [i_2]))) ? (((((/* implicit */_Bool) (unsigned char)40)) ? (10120869633460128706ULL) : (621105740187989479ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2480621114U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (459156941U)))))))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_1 [(_Bool)1] [8U])) * (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) ((unsigned short) (short)29104)))))), (((((/* implicit */_Bool) ((arr_1 [8] [8]) ? (((/* implicit */long long int) var_8)) : (-6907944579373012164LL)))) ? ((+(-7916733534960801477LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_8 [i_1] [i_2 - 1] [i_1]) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_8 [i_1] [i_2 - 1] [(unsigned char)6])))))));
                }
                for (signed char i_6 = 3; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (signed char)-117)), ((-(((/* implicit */int) (signed char)-44)))))))))));
                    var_27 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_20 [i_6 - 1] [i_1] [i_1] [5U])))) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) 543528045U)) != (7569370177982933204ULL))))))));
                }
                for (signed char i_7 = 3; i_7 < 10; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_14 [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 3] [(unsigned char)5] [i_7 - 2]))));
                        arr_26 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_3 [(short)2] [7ULL])) ? (((/* implicit */int) (short)-10949)) : (((/* implicit */int) (_Bool)1)))));
                        arr_27 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0] [i_7] [i_7] [i_7 - 2]))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) ((unsigned long long int) arr_10 [i_7] [i_7 - 2] [i_1] [i_7 + 1] [i_1] [i_7 + 2]));
                            arr_31 [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (signed char)-8))) ? (((/* implicit */unsigned long long int) ((long long int) var_13))) : (((unsigned long long int) var_1))));
                            arr_32 [i_0] [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned char)188))))));
                        }
                        for (long long int i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            arr_36 [i_0] [i_0] [i_7] [i_0] [i_1] = (!((_Bool)0));
                            var_31 = ((/* implicit */unsigned char) ((((_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -410670647)) ? (((/* implicit */int) (short)4066)) : (((/* implicit */int) var_2))))) : (arr_34 [i_1] [i_8] [i_1] [i_1] [i_1])));
                        }
                        var_32 = ((/* implicit */_Bool) 4286578688U);
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                    {
                        arr_39 [(signed char)6] [i_1] [6] [6] = ((arr_14 [i_7 - 3] [i_7] [i_7] [i_7 - 3] [i_7 - 3] [i_7 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (((long long int) (signed char)20)));
                        var_33 ^= ((/* implicit */short) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_7 - 1])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [(unsigned char)2] [8ULL] [i_1] [(signed char)8])))))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) != (((/* implicit */int) arr_29 [i_7 - 1] [i_7] [2] [i_7 - 1] [i_7 - 3] [i_7]))));
                    }
                    var_35 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 18446744073709551597ULL)))))) : (((/* implicit */int) (((-(arr_13 [i_0] [i_1] [i_1] [i_1] [i_7]))) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    var_36 += (+(max((arr_19 [i_0] [i_0] [(signed char)5]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))));
                }
            }
        } 
    } 
}
