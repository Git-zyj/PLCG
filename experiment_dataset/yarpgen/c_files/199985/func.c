/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199985
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
    var_15 -= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) var_2);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) -8634401934376791715LL);
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)254)), ((short)-9740))))) : (3559822928484019213LL)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3865257181U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3582094140U)))) : (((unsigned long long int) 3865257181U))))));
                        arr_15 [0ULL] [i_2 + 1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_4))))), (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2 + 1] [i_0] [i_2 + 1] [i_4]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)84)))))))))));
                        var_18 = ((/* implicit */long long int) (unsigned char)0);
                        var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_11 [i_3] [i_3] [i_3] [i_3] [i_3])), (var_6)));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_2 - 1] [i_0] [i_3] [7U] [i_6] [i_6] = ((/* implicit */signed char) var_1);
                            var_21 = ((/* implicit */unsigned int) ((short) 1258975220U));
                        }
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_24 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_24 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                            var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 68719476735LL)) ? (389005760U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) (_Bool)1))));
                            arr_25 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [1] = ((/* implicit */short) 68719476727LL);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) max(((short)-27334), (((/* implicit */short) (unsigned char)85))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) 1514908209U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_11)))))));
                            var_25 = ((/* implicit */unsigned long long int) (signed char)-9);
                        }
                        arr_30 [i_0] [i_0] [i_0] [12ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_5]))));
                        arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                        arr_32 [i_0] [i_0] = ((/* implicit */_Bool) (-(((18268245743663213826ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)224)), (((((/* implicit */_Bool) arr_13 [i_10] [i_3] [i_0] [i_0])) ? (3080678320U) : (max((((/* implicit */unsigned int) (unsigned short)4)), (429710114U)))))));
                            arr_39 [i_0] [i_2] [i_0] [i_9] [i_10] = ((/* implicit */long long int) var_8);
                            var_27 = ((/* implicit */_Bool) arr_38 [i_0] [i_2] [i_0] [i_3] [i_0] [i_9] [i_10]);
                        }
                        var_28 = ((/* implicit */unsigned short) ((unsigned long long int) (short)32752));
                        /* LoopSeq 4 */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            arr_42 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_0])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (var_6)))) : (var_5)))));
                            var_29 ^= ((/* implicit */_Bool) var_6);
                            var_30 = ((/* implicit */unsigned char) 15247689281151303390ULL);
                        }
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                        {
                            arr_47 [i_0] [i_2] [i_3] [i_0] [i_12] = ((/* implicit */unsigned short) 148526319212440168ULL);
                            var_31 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 13250079208175185228ULL)))) : (18446744073709551615ULL)));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5196664865534366387ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967291U))))));
                            arr_50 [i_2] [i_3] [i_0] = ((/* implicit */signed char) arr_13 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]);
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (short)12189))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_3)), (arr_28 [i_0] [i_2] [i_3] [i_0] [i_2])))), (var_6))))));
                            var_35 = ((/* implicit */_Bool) min(((short)9618), (((short) arr_37 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (short i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        var_36 -= ((/* implicit */unsigned short) arr_44 [i_0] [i_0] [i_2] [i_3] [i_0]);
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            arr_59 [i_0] [i_0] [i_3] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 553822520092396404ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_29 [i_0] [i_15 - 1] [i_15 + 2] [i_0] [i_16]))))) : (var_0)));
                            var_37 = arr_23 [i_0] [i_0] [i_0] [i_15 - 2] [i_16] [i_3];
                            arr_60 [i_0] [i_0] [i_0] [i_15 + 1] [i_3] = max((max((((/* implicit */unsigned long long int) -2034213084)), (18298217754497111428ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)9160), (arr_10 [i_2 - 1] [i_2 + 1] [i_15 - 1])))));
                            var_38 ^= ((/* implicit */unsigned short) var_7);
                        }
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            arr_63 [6ULL] [i_17] [i_17] [i_17] [6ULL] &= ((9250035311756505151ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13619))));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) max((((((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_10))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))))), (max((67108848LL), (((/* implicit */long long int) 3431796890U)))))))));
                            arr_64 [19ULL] [i_0] [19ULL] [19ULL] [i_17] = (~(((((/* implicit */_Bool) (unsigned short)55777)) ? (2230319012695632204ULL) : (18298217754497111447ULL))));
                            var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_57 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_15 + 1] [i_17])))) ? (max((var_0), (18298217754497111461ULL))) : (((/* implicit */unsigned long long int) ((min((arr_43 [i_0] [i_2] [i_3] [i_0] [i_0] [i_0] [i_17]), (((/* implicit */unsigned int) var_8)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                            var_41 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-80))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_5))) : (((/* implicit */unsigned long long int) arr_35 [i_0] [i_2] [i_3] [i_3] [i_3])));
                        }
                        var_42 = ((/* implicit */unsigned long long int) max((min((arr_43 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]), (((/* implicit */unsigned int) var_12)))), (((((/* implicit */_Bool) var_3)) ? (arr_43 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2]) : (arr_43 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1])))));
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (min((var_6), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)54807))))))), (((/* implicit */long long int) (short)9)))))));
                    }
                    arr_65 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    }
}
