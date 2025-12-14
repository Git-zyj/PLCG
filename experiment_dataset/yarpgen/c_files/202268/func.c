/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202268
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 1022957542U))));
    var_20 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 3] [i_0]))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) (unsigned char)233)) : (var_17)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) var_6);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1]);
                            var_23 = ((/* implicit */_Bool) arr_3 [i_0] [i_3]);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((arr_2 [i_3] [i_4]) ? (((/* implicit */int) var_1)) : ((+(var_2))))))));
                            arr_15 [i_0] = (-(((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0] [i_4]) : (((/* implicit */int) var_6)))));
                            var_25 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_18 [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? ((-(arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned char)5]))) : (((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : ((-(arr_3 [i_2] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) var_2)));
                            var_26 = ((/* implicit */int) 281474976710640ULL);
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((max((1502882743), (var_14))) < (((/* implicit */int) arr_0 [i_1])))) ? (((max((((/* implicit */unsigned int) var_6)), (4294967295U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_4 [i_3 + 2] [i_0])) - (169)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) (short)32767));
                        }
                        var_29 = ((/* implicit */long long int) (((+(((-319204351) / (-319204350))))) >= (-1502882735)));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) (((~(var_4))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-319204350) : (var_17))))));
                        var_31 += ((/* implicit */unsigned char) (((!(arr_2 [i_0] [5ULL]))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_11))));
                        var_32 = ((/* implicit */int) max((var_32), ((((~(((/* implicit */int) arr_20 [i_6] [i_6])))) / (((var_17) | ((-2147483647 - 1))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_2] [5ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [(short)9] [1U] [i_2] [i_7 - 1]))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */_Bool) (unsigned char)96)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                            var_33 -= (+(((/* implicit */int) ((((/* implicit */int) var_11)) > (2147483647)))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0] [i_0])) * (((/* implicit */int) arr_10 [i_7] [i_1] [i_2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [(signed char)1] [i_1 - 2] [i_2] [i_7] [6ULL]))) % (var_15)))))));
                            var_35 &= ((/* implicit */short) arr_19 [(unsigned char)9] [i_1 - 2] [i_2] [i_7] [i_8]);
                        }
                        for (signed char i_9 = 2; i_9 < 7; i_9 += 4) 
                        {
                            arr_31 [(signed char)6] [i_0] [i_0] [i_0 + 4] [(signed char)6] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
                            var_36 = ((/* implicit */unsigned short) ((-306610940) + (var_8)));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7 + 1] [i_2] [1LL] [i_2]))) - (var_12)));
                            var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_14))))));
                            var_39 = ((/* implicit */unsigned int) var_17);
                        }
                        for (signed char i_10 = 2; i_10 < 9; i_10 += 4) 
                        {
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) arr_0 [i_7])))))))));
                            var_41 -= ((/* implicit */unsigned char) (-2147483647 - 1));
                            var_42 = ((/* implicit */int) var_16);
                            var_43 = ((/* implicit */int) (short)31743);
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_37 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((311746630998343282ULL) != (((/* implicit */unsigned long long int) var_9))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) arr_33 [i_11])), (arr_0 [i_1])))) << ((((+(((/* implicit */int) arr_0 [i_1])))) + (28544))))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) (+(((unsigned long long int) arr_30 [i_0 + 1] [i_0 + 4] [i_1 + 1] [i_0] [i_1 - 2]))));
                        var_46 = ((/* implicit */unsigned short) -1967329965);
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12948)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((_Bool) (unsigned char)77)))));
                    }
                }
            } 
        } 
    } 
    var_48 = ((/* implicit */int) (-(8796093022207ULL)));
}
