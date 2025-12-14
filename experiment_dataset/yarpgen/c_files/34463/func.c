/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34463
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
    var_18 = ((/* implicit */unsigned char) (-(var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) (short)22368))));
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1])) - (((/* implicit */int) var_9)))) | (((((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 3])) - (((/* implicit */int) arr_11 [i_1 - 3] [i_1 + 1] [i_1 - 2]))))));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_4 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_3 [i_0]))), (((/* implicit */long long int) (unsigned short)448))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0]))))) : (((/* implicit */int) ((arr_6 [i_1 - 3]) < (((/* implicit */int) max((arr_2 [i_0 + 1]), (var_3)))))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((short) arr_7 [i_1 - 2] [i_3 - 2] [i_5 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_5))))))))));
                                arr_19 [i_0] [(short)11] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17930455153916840613ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2]))) : (516288919792711009ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (min((((/* implicit */unsigned long long int) (unsigned short)65506)), (17930455153916840594ULL)))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) /* same iter space */
                            {
                                var_22 |= ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (var_13))));
                                arr_22 [i_0] = ((unsigned long long int) (!(arr_21 [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [(unsigned short)13])));
                                arr_23 [i_0] [(unsigned char)8] [i_2] [(unsigned char)8] [14ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_4)), (max(((unsigned short)444), (((/* implicit */unsigned short) (unsigned char)255))))))), (17930455153916840613ULL)));
                                var_23 = ((/* implicit */unsigned int) (signed char)73);
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)37);
                            }
                            for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) /* same iter space */
                            {
                                var_24 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0 - 4] [i_1 - 1] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0 + 1])))) ? ((((!(((/* implicit */_Bool) 516288919792710990ULL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)32356)))) ? (((/* implicit */long long int) var_17)) : (max((((/* implicit */long long int) arr_11 [i_2] [i_3] [i_7])), (var_11))))))));
                                var_25 *= ((/* implicit */int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-118)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_18 [i_0] [i_2] [i_2] [i_3] [i_7] [i_0])), (var_4))))))) || (((/* implicit */_Bool) (short)(-32767 - 1)))));
                            }
                            var_26 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [(short)7] [i_3]))));
                        }
                    } 
                } 
                arr_27 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_14 [i_0]), (((/* implicit */short) var_4))))) ? (((/* implicit */int) ((13423748694035599190ULL) < (((/* implicit */unsigned long long int) var_11))))) : (((/* implicit */int) arr_4 [i_0 + 2]))));
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_33 [i_1 - 1] [i_1] [i_9] [i_0] [i_1] = arr_20 [i_9];
                            arr_34 [i_0] [i_0] [i_8 - 1] [i_9] = ((/* implicit */long long int) arr_6 [i_0 + 1]);
                            arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 17930455153916840631ULL);
                            arr_36 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_32 [(unsigned char)13] [(unsigned char)13] [i_8 - 1])) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_31 [i_0] [i_0] [i_8] [i_0] [17])))))))));
                            /* LoopSeq 4 */
                            for (int i_10 = 2; i_10 < 20; i_10 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (short)2))));
                                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((var_14) ^ (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22368)))))) * (((/* implicit */int) arr_21 [i_0] [i_1 - 3] [(unsigned short)0] [i_9] [i_0] [i_10]))));
                            }
                            for (int i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
                            {
                                arr_41 [i_11] [i_9] [i_0] [i_8] [i_0] [i_1 - 2] [8] = ((/* implicit */int) min((max((4294967277U), (((/* implicit */unsigned int) -683693897)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_1 - 1] [i_8 - 1] [i_0] [i_11])))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_30 [i_0 + 4] [i_1 - 2] [i_8] [i_8 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9])))))) || (((/* implicit */_Bool) min((arr_20 [i_0 - 2]), (((/* implicit */unsigned short) arr_12 [i_0] [(short)12] [i_9])))))));
                            }
                            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                            {
                                arr_44 [i_0] [i_9] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)60)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_12] [i_1 - 3] [i_8 + 2] [i_0 + 1] [i_8 + 2])))))));
                                arr_45 [i_0] = arr_42 [i_0 + 3] [10];
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)65525)), ((((+(13423748694035599192ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_9] [i_0]))))))))));
                                arr_46 [i_0 + 2] [i_0] [i_8] [(short)6] [i_12] [(short)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_28 [11LL] [i_9])), (arr_39 [i_0] [i_8 - 1] [(_Bool)1] [(unsigned char)16] [i_12]))))));
                            }
                            /* vectorizable */
                            for (signed char i_13 = 1; i_13 < 17; i_13 += 4) 
                            {
                                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((arr_39 [i_1 - 1] [i_1] [i_8] [i_9] [i_13]) != (((/* implicit */int) arr_10 [i_9] [i_9])))))));
                                arr_51 [i_0 + 2] [i_9] [i_8] [i_9] [i_0] = ((/* implicit */signed char) ((short) var_7));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) (unsigned short)51406)), (max((-9223372036854775798LL), (((/* implicit */long long int) var_17)))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)112)) ^ (((/* implicit */int) var_2))))))));
}
