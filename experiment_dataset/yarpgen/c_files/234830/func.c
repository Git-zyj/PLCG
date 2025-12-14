/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234830
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned short)3] [i_1] = min((min((((/* implicit */long long int) max((var_12), (((/* implicit */signed char) var_10))))), (var_0))), (((/* implicit */long long int) var_10)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((short) (unsigned short)65532));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                        {
                            arr_15 [(unsigned short)8] [i_1] [i_3] [6] [i_4] [6] = ((/* implicit */unsigned char) var_2);
                            arr_16 [i_0] [i_1] = ((/* implicit */unsigned short) ((short) var_7));
                            arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_3] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) var_8);
                            arr_22 [0U] [(_Bool)1] [i_3] [i_2] [i_3] [i_0] [i_0] |= ((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_2 - 1] [i_1] [i_1] [i_2 - 1] [i_2 - 1]))) : (arr_3 [(unsigned char)2] [i_2 - 1] [i_3])));
                            arr_23 [(unsigned short)0] [i_1] [i_2 - 1] [i_2 - 1] [i_1] = ((/* implicit */_Bool) var_6);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_27 [i_0] [i_3] [i_2] [i_0] [i_6] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [(signed char)6])) ? (arr_2 [i_0] [(short)6]) : (arr_2 [i_1] [i_1])));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */unsigned long long int) ((int) var_14));
                        }
                        arr_29 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                    }
                    arr_30 [(_Bool)1] [(_Bool)0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-73))));
                }
                /* vectorizable */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                    {
                        arr_37 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */long long int) ((var_3) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))));
                        arr_38 [i_0] [0] [0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-72))))) ? (((/* implicit */int) arr_18 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) ((short) var_2)))));
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            arr_41 [i_9] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_9))))));
                            arr_42 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] [(short)2] = ((/* implicit */_Bool) arr_5 [i_7 - 1] [i_8 + 1]);
                            arr_43 [i_0] [i_1] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) var_12);
                            arr_44 [i_0] [1] [i_7] [i_8] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                        }
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            arr_47 [i_1] [i_1] [i_7 - 1] [i_7] = ((/* implicit */long long int) ((var_3) ? (((/* implicit */int) arr_34 [i_0] [i_1] [i_7] [i_1] [i_10] [i_10])) : (((/* implicit */int) var_12))));
                            arr_48 [i_0] [i_10] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
                            arr_49 [4LL] [i_1] [i_1] [i_8] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [(short)8] [(_Bool)1]))) + (((unsigned int) var_4))));
                            arr_50 [i_0] [6] [0U] [i_10] = ((/* implicit */short) ((signed char) (_Bool)1));
                        }
                        for (short i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                        {
                            arr_55 [i_0] [i_1] [i_1] [(short)7] [i_11] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_7 - 1] [i_1] [i_11] [i_7])))));
                            arr_56 [4LL] [i_1] = ((/* implicit */int) (~(((long long int) arr_53 [i_0] [(unsigned char)9] [i_7] [i_7] [i_11]))));
                            arr_57 [8ULL] [i_7] [i_7] [i_1] [8ULL] = ((/* implicit */_Bool) var_12);
                            arr_58 [i_0] [8LL] [i_7 - 1] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_7 - 1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)69)) > (((/* implicit */int) var_10)))))));
                        }
                        for (short i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                        {
                            arr_62 [i_0] [i_1] [i_1] [i_8] [i_12] [i_8] [i_12] = ((/* implicit */int) var_0);
                            arr_63 [i_0] [i_1] [i_7] [i_8] [(short)3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-19048))));
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                    {
                        arr_68 [i_1] [3] = ((/* implicit */short) arr_35 [i_7 - 1]);
                        arr_69 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_3);
                        arr_70 [i_0] [i_1] [i_7 - 1] [i_1] = ((/* implicit */short) var_11);
                    }
                    arr_71 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)127);
                    arr_72 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65533))));
                    arr_73 [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
                }
                /* vectorizable */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_77 [1ULL] [i_0] [i_1] = ((/* implicit */unsigned char) arr_4 [i_14] [i_14]);
                    arr_78 [i_0] [i_0] [i_1] [i_1] = (-(((/* implicit */int) var_12)));
                }
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            arr_83 [i_0] [i_1] [i_1] [i_1] [4] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7737722414770141002LL)), (max((var_14), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) max((((/* implicit */short) arr_11 [i_15] [i_1] [i_15] [i_15] [i_0] [(_Bool)1])), ((short)19048)))) : (arr_79 [i_1]));
                            arr_84 [(unsigned short)6] [i_1] [i_15] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7737722414770141001LL)))))))) ? (((((/* implicit */_Bool) ((int) (unsigned short)49299))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16236))) : (-7737722414770140990LL))))) : (max((((/* implicit */long long int) (short)5496)), (5640131907566180170LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = var_11;
}
