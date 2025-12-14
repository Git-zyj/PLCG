/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32346
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
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_8);
                    /* LoopSeq 4 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        var_13 ^= ((/* implicit */short) ((((/* implicit */int) var_1)) & (((((/* implicit */int) var_2)) << (((/* implicit */int) var_11))))));
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((signed char) arr_7 [i_0] [i_1] [i_3] [i_0])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        arr_15 [(unsigned char)8] [i_0] [i_2] [i_2] [i_2] [(unsigned char)17] = ((/* implicit */unsigned long long int) ((max((((long long int) arr_5 [i_1] [i_1] [i_0 - 1])), (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) > (((long long int) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) var_6)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)104))))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (arr_12 [9ULL] [i_1] [i_2 - 1] [i_5]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_5])))))))));
                            var_16 = ((/* implicit */long long int) min((var_16), ((+(arr_5 [i_0 + 1] [i_2 - 1] [i_4])))));
                            arr_18 [i_0] [(unsigned char)3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((var_3) ? ((-(((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
                            arr_19 [i_0] [i_1] [i_1] [(signed char)8] [i_0] [4LL] &= ((/* implicit */short) var_8);
                        }
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)109))))))));
                            var_17 -= ((/* implicit */signed char) min((((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))))), ((-(((/* implicit */int) var_6))))));
                            arr_23 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((unsigned char) var_4))))));
                        }
                        for (long long int i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_12 [i_0 - 1] [i_0 + 2] [i_2 - 1] [i_2 - 1]))) > (((/* implicit */int) var_7))));
                            arr_27 [i_0] [i_7 + 1] [i_4] [i_2] [(unsigned short)10] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_25 [i_7 - 1])), (arr_16 [i_4] [i_7])))) ? (var_8) : (((/* implicit */int) ((_Bool) (+(arr_1 [i_0])))))));
                        }
                        arr_28 [i_0] [i_0] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)-13271)))));
                        arr_29 [i_0] = (-(((((/* implicit */_Bool) 6883671438824982611ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (3631598318756651909LL))));
                        arr_30 [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0] = ((/* implicit */signed char) (~(min((arr_16 [i_2 - 1] [i_2 - 1]), (((/* implicit */int) var_6))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        arr_34 [i_0] [16ULL] [8] [(unsigned short)16] |= ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) arr_4 [i_8])))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) <= (8680487410268381717ULL))))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [i_0] [i_1] [i_2] [i_9] [i_10 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                            arr_41 [i_0] [(unsigned char)10] [(_Bool)1] [i_0] [(unsigned char)10] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2]);
                        }
                    }
                    arr_42 [i_0] [2LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (short)10317)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (signed char i_11 = 4; i_11 < 16; i_11 += 1) 
                    {
                        arr_45 [(signed char)10] [i_1] [i_0] [i_11] [i_1] = ((/* implicit */signed char) max(((!(arr_3 [i_0]))), ((!(((/* implicit */_Bool) var_4))))));
                        arr_46 [i_0] [(unsigned char)0] [(signed char)5] [i_11 - 3] = ((/* implicit */unsigned char) ((_Bool) max(((+(((/* implicit */int) (unsigned char)212)))), (((/* implicit */int) max(((signed char)-99), (((/* implicit */signed char) (_Bool)1))))))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 3; i_12 < 17; i_12 += 1) 
                    {
                        arr_50 [i_0] [i_0] [i_2] [i_12] [8ULL] = ((/* implicit */signed char) arr_32 [i_0] [i_1] [i_2] [i_1] [i_2] [i_12 + 1]);
                        var_21 = ((/* implicit */unsigned char) var_11);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                        {
                            arr_53 [i_0] [i_1] [i_2] [i_12 - 3] [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)98))))));
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_9))))));
                            arr_54 [i_0] [i_1] [i_0] [i_0] [i_13 - 1] = ((/* implicit */_Bool) ((var_9) >> (((arr_6 [i_0 - 1]) + (5539590532560988878LL)))));
                        }
                    }
                    for (signed char i_14 = 3; i_14 < 16; i_14 += 1) 
                    {
                        arr_59 [i_14] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_11)), (var_10)))));
                        arr_60 [i_0 + 2] [6ULL] [6ULL] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (2013777861U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                        arr_61 [i_0] = ((/* implicit */unsigned char) ((signed char) (((+(15427910585453583065ULL))) | (arr_43 [i_0 + 1] [i_2 - 1] [i_14 + 1] [i_14 - 1] [i_14]))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_10))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 17; i_16 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_2 - 1] [i_2] [i_2 - 1] [(unsigned char)10] [12LL] [i_2 - 1] [i_2 - 1])))))));
                            var_25 &= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            arr_66 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) arr_24 [i_0] [i_1])) ? (3202101536369474645ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~(((unsigned int) arr_8 [9] [i_1] [i_1])))))));
                            arr_67 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((_Bool) var_9)) ? (9365803568318818707ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_15] [i_2 - 1] [i_2])))));
                        }
                    }
                }
            } 
        } 
        arr_68 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (_Bool)1)) : (((((var_5) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) > (2281189443U))))))));
        var_27 = ((/* implicit */unsigned int) max((var_27), ((((~(3048994532U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        var_28 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_0 - 1] [i_0 + 1] [i_0] [i_0])) && (((/* implicit */_Bool) var_6)))))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [(signed char)6] [i_0 + 2])) ? (arr_49 [(signed char)0] [i_0 - 2]) : (arr_49 [0U] [i_0 - 3])))) && (((/* implicit */_Bool) arr_57 [(short)2] [(_Bool)0] [(short)2])))))));
    }
    for (unsigned char i_17 = 3; i_17 < 16; i_17 += 1) /* same iter space */
    {
        var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [2U])) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_64 [(unsigned char)16]), (((/* implicit */unsigned short) var_5)))))))) : (((/* implicit */int) max((arr_0 [i_17] [i_17 - 2]), (((/* implicit */signed char) var_3)))))));
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_31 = (!(((/* implicit */_Bool) ((unsigned char) 0LL))));
            var_32 = ((/* implicit */unsigned long long int) var_10);
        }
        for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
        {
            arr_77 [i_17] [i_17] [6] = ((/* implicit */short) ((signed char) var_6));
            var_33 *= ((unsigned long long int) 939524096);
        }
    }
}
