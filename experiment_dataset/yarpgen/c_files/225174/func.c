/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225174
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((~(336977406))) : (min((1172757987), (((/* implicit */int) var_3))))))) ? ((~(((/* implicit */int) (unsigned short)60900)))) : (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (signed char)-15))))) : (((/* implicit */int) var_6))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)14))))) : (max((var_4), (((/* implicit */unsigned long long int) (-(-2312058205022856607LL))))))));
    var_21 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)-51))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */int) (short)-1))));
        var_23 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2312058205022856610LL)) ? (500477610) : (336977410)))) ? (((/* implicit */int) ((500477628) <= (-1748468170)))) : (((/* implicit */int) (signed char)109))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                arr_11 [i_1 + 1] [i_2] [i_3] = ((/* implicit */signed char) ((int) (signed char)38));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_25 -= ((/* implicit */short) ((((arr_16 [i_3] [i_5 + 2] [i_4] [i_4] [i_5]) + (9223372036854775807LL))) << (((((arr_16 [i_4] [i_5 + 2] [i_4] [i_5 + 1] [i_5]) + (6694688285786255863LL))) - (27LL)))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-55)))))));
                    }
                    for (int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) var_5);
                        arr_20 [2] [i_1] [i_2] [i_1] [i_3] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_18))) ? (((/* implicit */int) arr_14 [i_1 + 1] [i_2])) : (((/* implicit */int) var_18))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 500477610)) ? (var_9) : (((/* implicit */unsigned long long int) 500477609))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) : (((((/* implicit */_Bool) var_11)) ? (arr_9 [i_1] [i_1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        var_29 = ((/* implicit */signed char) var_8);
                    }
                    for (int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) -1))));
                        arr_23 [i_2] [i_2] [i_3] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_3])) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    arr_24 [i_2] [i_2] [i_3] [i_4] = arr_13 [i_1] [i_1 - 1] [i_1] [i_1 + 1];
                    var_31 -= ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 1] [i_4]))) : (arr_7 [i_4] [i_1 + 1]));
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 1) 
                    {
                        arr_30 [i_2] [i_8] [i_2] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                        arr_31 [i_2] = ((/* implicit */unsigned long long int) ((short) -1));
                        var_32 -= arr_6 [i_1 + 1] [i_8] [i_1 + 1];
                    }
                    arr_32 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                    var_33 = ((/* implicit */long long int) (+((+(1372592765)))));
                    arr_33 [i_2] [(short)8] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_2] [i_3] [i_3] [i_2]);
                }
                for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    arr_36 [i_10] [i_10 + 2] [i_2] [i_10] = (~(((/* implicit */int) arr_26 [i_10 + 3] [i_10 - 1] [i_10 - 1] [i_2])));
                    arr_37 [i_2] [i_2] [i_2] [(unsigned char)7] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_10 - 1])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))))) : (((((/* implicit */_Bool) -167874494812294031LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)79))) : (-9223372036854775784LL)))));
                }
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_17 [(unsigned short)6] [i_2] [i_1 + 1] [i_1] [i_1 - 1]))));
                var_35 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [4] [i_1 + 1] [i_1 + 1] [i_1 - 1] [4])) * (((/* implicit */int) arr_12 [i_3] [i_2] [i_1 + 1] [i_2]))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 12; i_12 += 1) 
                {
                    {
                        var_36 ^= ((/* implicit */int) (signed char)-1);
                        var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_27 [i_1 - 1] [i_1 - 1] [i_2] [i_2]) : (((/* implicit */int) var_1))))) ? (arr_19 [(unsigned char)5] [i_1] [i_1] [i_2] [i_11] [i_1] [i_11]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_2] [i_12 - 1] [i_12])))))))));
                    }
                } 
            } 
        }
        arr_42 [i_1] = ((/* implicit */long long int) (-((-(arr_18 [i_1 + 1] [(signed char)2] [6] [(short)6] [i_1] [i_1 - 1] [i_1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            var_38 ^= ((/* implicit */signed char) (unsigned char)68);
            var_39 = ((/* implicit */signed char) min((var_39), (var_2)));
            arr_45 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_13] [i_1 - 1]))) : (7390158162693475441LL)));
            var_40 = ((/* implicit */short) ((signed char) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]));
            arr_46 [i_1] [i_1] = ((/* implicit */long long int) -910597905);
        }
        for (short i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            arr_50 [i_1] [i_14] = ((/* implicit */unsigned long long int) var_18);
            var_41 = arr_21 [i_14] [3] [i_14] [i_1] [i_1];
            /* LoopSeq 1 */
            for (signed char i_15 = 3; i_15 < 10; i_15 += 4) 
            {
                arr_54 [i_1 + 1] [i_15] [i_15 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_14] [3ULL])))) : ((~(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) arr_25 [i_1] [i_14] [i_15])) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_15] [i_14]))))) ? (min((var_4), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12311896418934122158ULL)) ? (((/* implicit */int) (short)-13231)) : (((/* implicit */int) (short)-28292)))))))));
                var_42 = ((/* implicit */unsigned long long int) (signed char)-95);
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    for (short i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        {
                            var_43 -= ((/* implicit */long long int) var_13);
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)(-127 - 1))))) * (((/* implicit */int) arr_10 [i_15] [i_15 + 2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) max(((signed char)-20), ((signed char)-36)))), (arr_34 [i_1 - 1] [i_15] [i_15 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-100)) + (((/* implicit */int) (unsigned short)59974))))) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (short)63))))));
                        }
                    } 
                } 
                arr_61 [i_15] = var_16;
            }
        }
    }
    for (int i_18 = 1; i_18 < 12; i_18 += 2) /* same iter space */
    {
        var_45 = arr_13 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18 - 1];
        var_46 = arr_56 [(signed char)4] [(signed char)4] [(signed char)4] [i_18 - 1];
        var_47 = (unsigned char)68;
        arr_64 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_48 [i_18] [i_18 + 1] [i_18])) : (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (short)49)) : (((/* implicit */int) (signed char)38))))))) ? (((/* implicit */int) arr_8 [i_18] [i_18 + 1] [i_18 + 1])) : (((/* implicit */int) arr_21 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_18] [i_18 - 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 13; i_19 += 4) 
        {
            var_48 = ((/* implicit */int) arr_26 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18 - 1]);
            arr_69 [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_18] [i_18 - 1] [i_18] [i_18 + 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-108)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
        }
    }
}
