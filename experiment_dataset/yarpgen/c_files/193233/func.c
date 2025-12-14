/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193233
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
    var_17 = ((/* implicit */signed char) min((-1270841795679685963LL), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 3660858U)) ? (67108863) : (((/* implicit */int) (signed char)-17)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (3383438374U)))) ? (((long long int) var_4)) : (min((var_1), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (arr_8 [i_2] [i_2] [i_2] [(_Bool)1])));
                    arr_10 [i_2] [i_2] [13LL] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 += (_Bool)1;
                                arr_15 [i_2] [i_1] [i_4 - 1] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) 911528922U)) : (arr_13 [i_4] [i_3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0]))), (((/* implicit */long long int) ((unsigned int) 12288LL))))) + (((/* implicit */long long int) ((((int) var_15)) + (((/* implicit */int) ((_Bool) (signed char)85))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_4 - 1]))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (var_15)))) || (((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (arr_14 [i_0] [i_1] [10ULL] [i_1 - 1] [i_0] [i_1 - 1]))))))));
                    var_22 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) < (min((((/* implicit */unsigned int) (short)32761)), (3383438374U)))));
                }
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((1621161463) << (min((951374025), (0)))))) >= (((min(((_Bool)1), ((_Bool)1))) ? (arr_17 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)78))) != (var_1)))))))));
                    var_23 = ((/* implicit */_Bool) ((signed char) min(((+(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (signed char)78)))))));
                }
                for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) == (((long long int) arr_18 [i_8] [i_1] [i_1]))));
                            var_25 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_6]))));
                            var_26 += ((long long int) arr_7 [i_1 + 1] [i_8 - 1]);
                            arr_28 [i_0] [i_0] [i_6] [i_7 - 1] [i_7] [i_8] = ((/* implicit */unsigned int) ((int) 1383536933811442705ULL));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6])) && (((/* implicit */_Bool) (signed char)-106)))))) ^ (arr_7 [i_1] [i_7]));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_31 [i_6] [i_7 - 1] [i_6] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (short)(-32767 - 1));
                        }
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_36 [1ULL] [1ULL] [i_6] [1LL] [i_7] [i_10] [i_10] = ((/* implicit */unsigned char) var_5);
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((arr_18 [i_1 + 1] [i_1 + 1] [i_1 - 1]) * (((/* implicit */long long int) 0U)))))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (~(arr_21 [i_0] [i_1] [i_0]))))));
                    }
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        var_31 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (240106334U) : (911528921U))), (min((((/* implicit */unsigned int) (_Bool)1)), (911528921U))))))));
                        arr_41 [i_11] [2ULL] [(_Bool)1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (911528941U)));
                    }
                    var_32 = ((/* implicit */signed char) (+(((long long int) arr_34 [i_1 + 1] [i_1] [i_1] [i_0] [i_1 + 1] [i_1]))));
                }
                arr_42 [i_0] [i_0] = ((/* implicit */int) 1224402420U);
                arr_43 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3677591619U)) ? (arr_24 [i_0] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((arr_21 [i_1] [i_0] [i_0]) - (((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [8LL] [i_0] [i_0])))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))), (arr_37 [i_1] [i_0])))) : (((long long int) min((arr_20 [i_0] [i_0] [i_0]), (arr_33 [i_1] [i_1 + 1] [i_1 - 1] [(unsigned char)0] [i_0] [0ULL]))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (unsigned short)46312)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (-8379669599935860066LL))) ^ (((/* implicit */long long int) ((var_15) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32792)))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) (_Bool)1))), (((((/* implicit */_Bool) (signed char)-86)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
}
