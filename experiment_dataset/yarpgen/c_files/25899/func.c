/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25899
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
    var_10 = ((/* implicit */short) (~(var_6)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048574U)) ? (((/* implicit */unsigned long long int) 4293918707U)) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
        arr_3 [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2577564267U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_11 *= ((/* implicit */short) ((_Bool) arr_1 [i_1]));
        var_12 += ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_1]));
        arr_6 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) 1048588U)))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_9 [7ULL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */unsigned long long int) 1048608U))))) ? (((arr_4 [i_2]) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))) : (arr_1 [i_2])));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (min((((((/* implicit */_Bool) arr_0 [i_2])) ? (1048558U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_2])))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_18 [6LL] [8U] [i_4] [i_2] [i_2]) : (4293918699U))), (((/* implicit */unsigned int) arr_14 [i_5] [i_4] [i_2])))), (((/* implicit */unsigned int) max((arr_8 [i_3]), (var_3))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1048574U)) + (((((/* implicit */_Bool) (unsigned short)38403)) ? (max((((/* implicit */unsigned long long int) 1048574U)), (5760065830221445155ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1048570U)))))))))));
                    arr_19 [i_5] [(unsigned short)5] [i_4] = ((/* implicit */unsigned int) max((5760065830221445155ULL), (((((/* implicit */_Bool) 16U)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2]))) : (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))))));
                }
                arr_20 [i_2] [i_4] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2]))))) ? (4293918721U) : ((~(4293918728U))))));
            }
            for (short i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                arr_24 [i_2] [i_3] [i_2] [i_6 - 1] = ((/* implicit */short) arr_8 [i_6 + 2]);
                arr_25 [i_2] [i_2] [i_2] = ((/* implicit */short) 1048569U);
            }
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
        {
            arr_29 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4293918707U)))) - (min((((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_7])), (arr_16 [i_2] [i_2] [i_7])))))) : (min((((/* implicit */long long int) var_3)), (arr_28 [i_7])))));
            arr_30 [i_2] [(unsigned short)1] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((short) 5760065830221445155ULL))) ? (((arr_22 [i_7]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_7]))))), (((/* implicit */unsigned long long int) ((unsigned int) 2609071254U)))));
            var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7] [i_2])) ? (((/* implicit */int) arr_21 [i_2] [i_7])) : (((/* implicit */int) arr_21 [i_2] [i_7]))))), (max((1048574U), (((/* implicit */unsigned int) arr_0 [i_2]))))));
            var_17 = ((/* implicit */_Bool) ((max((-716842972), (((/* implicit */int) arr_17 [i_2] [i_7] [i_2] [i_2] [i_2] [i_2])))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(signed char)7] [i_2] [i_2] [i_2] [i_7] [i_2]))) > (1048574U))))));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
        {
            arr_33 [i_2] [i_8] = ((/* implicit */short) 4293918707U);
            arr_34 [i_8] [i_8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */int) arr_7 [i_2])) >= (((/* implicit */int) arr_26 [i_2])))))))) <= (1048571U)));
            var_18 = (+(((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8]))) / (var_8))));
            arr_35 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4293918721U)) ? (arr_28 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_31 [i_2] [i_2])), (1048589U))))))) ? (((/* implicit */int) min((arr_17 [i_2] [i_2] [i_2] [i_2] [i_8] [i_8]), (((/* implicit */unsigned short) arr_7 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_2] [i_2] [i_2]))) || (((/* implicit */_Bool) ((unsigned int) arr_22 [i_8]))))))));
        }
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((12686678243488106444ULL), (((/* implicit */unsigned long long int) ((arr_16 [i_2] [i_2] [(unsigned char)1]) != (1048588U))))))) ? ((~(((long long int) 1048588U)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)34))))));
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_39 [i_9] = ((/* implicit */unsigned short) ((((_Bool) arr_38 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_9]))) : ((-((-(arr_38 [i_9])))))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (signed char i_11 = 4; i_11 < 18; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) 5760065830221445155ULL);
                        arr_48 [i_9] [i_10] = ((/* implicit */_Bool) var_0);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 3; i_13 < 17; i_13 += 3) 
                        {
                            arr_51 [i_9] [i_9] [i_10] [i_11 - 1] [i_12] [i_13] [i_13] = (+(((/* implicit */int) ((arr_44 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 1]) == (arr_44 [i_11] [i_11 - 3] [i_11 - 4] [i_11 + 2])))));
                            arr_52 [i_9] [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) arr_46 [i_10] [17ULL] [i_11] [i_10] [i_13 - 2]);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            arr_55 [i_11] [i_11] [i_14] = ((/* implicit */int) arr_50 [i_9] [i_10] [i_11] [i_10] [i_14]);
                            var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4293918696U)))) ? (min((arr_42 [i_10]), (((/* implicit */unsigned int) (signed char)45)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 222264632842513524LL))))))), (min((12686678243488106468ULL), (5760065830221445155ULL)))));
                            var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1048621U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_45 [i_10] [i_10])) : (1048621U))) : (min((((/* implicit */unsigned int) arr_41 [i_9])), (1048574U)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_54 [i_9] [i_10] [i_10] [i_11] [i_12] [i_14]))))) : (min((((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */long long int) 4293918707U)) : (var_2))), (arr_50 [i_11 - 2] [i_12] [i_11 - 2] [i_12] [i_14])))));
                        }
                        arr_56 [i_11] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_45 [i_11 - 1] [i_10])) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)-16345))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (((((/* implicit */_Bool) arr_43 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9]))) : (((((/* implicit */_Bool) arr_53 [i_9])) ? (((/* implicit */long long int) 2147483648U)) : (var_8)))))));
    }
    var_24 = ((/* implicit */long long int) var_3);
}
