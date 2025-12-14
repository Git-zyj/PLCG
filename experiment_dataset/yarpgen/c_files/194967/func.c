/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194967
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((arr_0 [i_0]), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_0)))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-85)) + (2147483647))) << (((var_6) - (1397819591U)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) || (((/* implicit */_Bool) (short)-21389)))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) var_11);
                }
            } 
        } 
    }
    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        arr_17 [(short)22] = ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (122880LL) : (((/* implicit */long long int) var_6))))))) ? (((((/* implicit */_Bool) ((int) var_11))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) : (arr_16 [i_3 + 4] [i_4] [i_5 - 2] [i_5] [i_6] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))));
                        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((3268770477U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))))))) % (((/* implicit */int) ((unsigned char) (~(arr_8 [i_5])))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) arr_15 [i_3 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3 - 3])))))) : (((((/* implicit */_Bool) var_5)) ? (-19LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 + 4] [i_4 - 1])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            arr_20 [i_3] [i_3] = ((/* implicit */int) max((var_10), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_16 [i_7] [i_6] [i_6] [i_5] [i_3] [i_3]))))))));
                            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7742))) : (var_10))), (((unsigned int) arr_19 [i_3] [i_3] [(signed char)1] [i_3 + 2] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((arr_12 [i_4] [i_4 + 1]), (arr_12 [i_4 + 2] [i_4 - 2])))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) arr_12 [i_3] [i_3]);
    }
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_10))) && (((/* implicit */_Bool) max((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) var_1)))))))), (var_0)));
        arr_24 [i_8] [i_8] = ((long long int) ((_Bool) ((((/* implicit */_Bool) 823026882)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) : (arr_11 [i_8] [i_8]))));
    }
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_19 = ((/* implicit */signed char) var_11);
            arr_29 [i_9] [i_9] = ((/* implicit */unsigned int) arr_15 [i_9]);
        }
        for (unsigned short i_11 = 1; i_11 < 8; i_11 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_9])))))))), ((unsigned char)130))))));
            var_21 = min((((((/* implicit */_Bool) arr_32 [i_11 + 2] [i_11])) ? (arr_32 [i_11 - 1] [i_11]) : (arr_32 [i_11 - 1] [i_11]))), (arr_32 [i_11 + 2] [i_11]));
            arr_33 [4U] [i_11] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((-6834259268003585328LL), (((/* implicit */long long int) (short)25982))))))) ? (max((((((/* implicit */_Bool) var_11)) ? (arr_18 [i_9] [i_11] [21U] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)244))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 2147483643)))))))));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            arr_36 [i_9] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_8)))));
            arr_37 [i_9] [i_12] [(signed char)3] = ((/* implicit */short) ((((((/* implicit */_Bool) 1954514271U)) ? (3635445508U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))))) >> (((long long int) var_4))));
        }
        /* LoopSeq 1 */
        for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            var_22 = ((((/* implicit */int) (unsigned char)84)) == (((((/* implicit */_Bool) ((signed char) 14555903020342297269ULL))) ? (arr_34 [i_13] [i_13]) : ((~(((/* implicit */int) (unsigned short)6465)))))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_16 = 3; i_16 < 9; i_16 += 3) /* same iter space */
                        {
                            arr_49 [i_9] [i_13] [i_13] [i_15] [i_16] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_27 [i_14] [i_9])), (((unsigned int) 4156173407576491873LL))))));
                            arr_50 [i_9] [i_9] = ((/* implicit */short) max((arr_16 [i_9] [i_13] [i_16 - 2] [i_15] [(unsigned char)17] [i_16]), (((/* implicit */unsigned int) (!((_Bool)1))))));
                            var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) (-(((-2872646752350995602LL) - (((/* implicit */long long int) var_6))))))) ? (arr_8 [i_13]) : (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)25359))) / (arr_43 [i_9] [i_14] [i_15] [i_16 - 1]))), (((/* implicit */unsigned int) (unsigned char)0)))))))));
                            var_25 = var_11;
                        }
                        for (int i_17 = 3; i_17 < 9; i_17 += 3) /* same iter space */
                        {
                            arr_53 [i_9] [i_13] [i_17] [(unsigned short)1] [i_17 + 1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)20))))) ? ((-(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) arr_13 [i_9] [i_9]))))))), (arr_32 [i_9] [i_17])));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_6))));
                        }
                        arr_54 [i_9] [i_13] [i_14] [i_15] = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (var_10))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_14]))));
                    }
                } 
            } 
            arr_55 [i_9] [i_9] [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_13]), (((/* implicit */unsigned char) var_7)))))) < (((((/* implicit */_Bool) arr_25 [i_9])) ? (9088334458087446458LL) : (((/* implicit */long long int) var_10))))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) : (1307926569U)))));
            arr_56 [i_9] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) / ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) != (var_6))))))));
            arr_57 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)204)))) / (max((arr_10 [i_9]), (((/* implicit */long long int) -658515189)))))) == (((/* implicit */long long int) var_6))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_18 = 3; i_18 < 9; i_18 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) ((unsigned long long int) max((arr_59 [i_18 - 3] [i_18 - 3]), (((/* implicit */int) ((signed char) arr_42 [i_9] [i_18] [i_9] [i_18 - 1]))))));
            arr_60 [i_18] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) -6386931624328317442LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3201456930048346139LL)) ? (198890540143149167LL) : (arr_35 [i_9]))))))));
            arr_61 [i_18] [5U] = ((/* implicit */short) ((((long long int) ((((/* implicit */int) (unsigned char)231)) <= (-657149310)))) / (-847620822868251130LL)));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_29 = var_4;
            arr_65 [i_9] [i_9] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_10)))) ? (max((((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned int) arr_34 [i_9] [i_19])) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) <= (4294967279U)))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) 4294967273U)) ? (982526635U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_9])))))))));
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_6 [i_9] [i_19]))))));
            arr_66 [i_9] [i_19] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)146));
        }
    }
    var_31 = ((/* implicit */unsigned char) var_8);
}
