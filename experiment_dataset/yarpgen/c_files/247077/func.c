/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247077
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
    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (var_17) : (-2118966059))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (4076156591U)))))) : (0ULL)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (_Bool)1);
        var_22 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -2118966064))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(4076156572U)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_23 = ((/* implicit */signed char) var_8);
            var_24 = var_18;
            var_25 = ((/* implicit */signed char) 17ULL);
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_7 [i_2] = ((/* implicit */_Bool) arr_0 [i_2]);
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                arr_10 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0])))))));
                arr_11 [i_0] [(short)0] [i_2] [9U] = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_3]))))) : (((/* implicit */int) ((signed char) var_11)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) ^ (var_15))) / (((/* implicit */int) arr_0 [i_0]))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((int) var_3)) : (((/* implicit */int) ((signed char) 218810705U)))));
                        arr_19 [i_4] = ((/* implicit */unsigned char) ((arr_5 [i_3]) == (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_17)))))));
                    }
                    for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_0 [i_4]))));
                        arr_24 [i_3] [i_4] [i_2] [i_2] [0U] [i_3] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_21 [i_6] [i_6] [i_6])))));
                        arr_25 [i_0] [i_2] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) (~(((((-2118966029) + (2147483647))) << (((var_15) + (1889756475)))))));
                        arr_26 [i_0] [i_0] [(unsigned short)4] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_2] [i_0] [i_2] [i_4] [i_0] [i_6])) >> (((var_1) - (753675108)))))) ? (arr_8 [i_6] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 218810705U)) && (((/* implicit */_Bool) 13671789746903059927ULL))))))));
                        arr_27 [i_4] [i_2] [i_3] [i_3] [(signed char)6] = ((/* implicit */signed char) var_16);
                    }
                    for (unsigned short i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) (short)-23369)) ^ (((/* implicit */int) ((((/* implicit */long long int) var_17)) < (arr_4 [i_0] [i_0] [i_3]))))));
                        var_30 = 2118966064;
                        var_31 = ((/* implicit */_Bool) var_14);
                        var_32 += ((/* implicit */unsigned char) (_Bool)1);
                        arr_30 [i_0] [i_2] [i_2] [i_4] [i_7] = ((/* implicit */int) arr_16 [i_7 + 1] [i_7] [i_4] [i_7 + 1] [7ULL] [i_7]);
                    }
                    arr_31 [i_4] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_3] [i_2] [i_0]));
                    arr_32 [i_4] [i_3] [i_2] [8] [i_2] [i_4] = ((/* implicit */int) ((unsigned long long int) (signed char)8));
                }
                for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) arr_37 [i_2] [9U] [i_9])) / (var_3))));
                        var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_3] [i_8 + 1] [i_8] [i_3]))));
                        var_35 = ((/* implicit */unsigned char) (~((-(var_16)))));
                    }
                    arr_41 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0]) ^ (2118966048)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [7ULL] [i_2] [i_2])) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) var_14))))) : ((+(4076156609U)))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) >= (((unsigned int) var_2))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    arr_44 [i_10] = ((/* implicit */int) ((_Bool) arr_29 [i_3] [i_10] [i_3] [4ULL] [i_0]));
                    arr_45 [(short)9] [i_10] = ((/* implicit */unsigned char) ((unsigned short) 13671789746903059921ULL));
                }
                for (int i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1135074425)) ? (((/* implicit */unsigned long long int) -671177167)) : (17538201210232353179ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_2] [i_2] [i_0] [i_11])) ? (((/* implicit */int) (signed char)33)) : (-1))))));
                    var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1])) << (((((/* implicit */int) arr_29 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1])) - (44)))));
                }
                for (int i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                    var_40 = ((/* implicit */int) arr_16 [i_0] [i_2] [i_12] [i_0] [i_12] [i_2]);
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) var_9);
                        arr_56 [i_12] [i_2] [i_2] [i_3] [i_12] [i_13] = ((/* implicit */unsigned char) var_9);
                    }
                    for (signed char i_14 = 4; i_14 < 9; i_14 += 1) /* same iter space */
                    {
                        arr_59 [i_0] [i_12] [i_3] [i_12] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_0] [i_12 - 1] [i_3] [i_12] [i_14] [i_3])) - (var_8)));
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_5 [i_0])) : (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_12 + 1] [i_12 - 1]))) : (((long long int) -499789109304106986LL))));
                    }
                    for (signed char i_15 = 4; i_15 < 9; i_15 += 1) /* same iter space */
                    {
                        arr_64 [i_0] [i_12] [i_3] [i_3] [i_12 - 1] [i_15] = ((/* implicit */short) var_2);
                        arr_65 [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_12 - 1] [i_15])) : (((/* implicit */int) arr_39 [i_0] [9LL] [(signed char)2] [i_12] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) 1721756104)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) - (14520815231442565513ULL))));
                        arr_66 [i_3] [i_2] [i_3] [i_12] [i_15] [i_12] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_13 [i_3] [i_0] [i_0] [i_3] [i_3])) : (((long long int) var_4))));
                    }
                    for (signed char i_16 = 4; i_16 < 9; i_16 += 1) /* same iter space */
                    {
                        arr_69 [i_16 - 3] [i_3] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */signed char) arr_67 [i_3] [i_2] [i_12 + 1] [i_16 + 1]);
                        var_43 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_62 [i_0] [i_2] [i_3] [i_12] [i_16])) + (((/* implicit */int) (unsigned char)248)))));
                        var_44 = ((/* implicit */int) ((16140901064495857664ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (var_1))))));
                    }
                    arr_70 [i_0] [i_12] [i_3] [i_12] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) var_7)))));
                }
                for (int i_17 = 1; i_17 < 10; i_17 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) 13671789746903059927ULL)) ? (-499789109304106986LL) : (arr_40 [(short)0] [i_2] [i_18 + 1] [i_17 + 1] [i_18] [i_17 + 1]))))));
                        var_46 = ((/* implicit */int) (+(arr_4 [i_0] [(unsigned char)10] [i_0])));
                        arr_77 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_0] [i_0] [i_3] [i_0] [i_18 + 1]))) : (var_16)));
                    }
                    for (unsigned char i_19 = 1; i_19 < 9; i_19 += 2) 
                    {
                        var_47 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) - (arr_76 [i_0] [i_17 + 1] [i_17 + 1] [i_19 - 1] [i_17 + 1] [i_19] [i_19]));
                        var_48 = var_14;
                    }
                    /* LoopSeq 1 */
                    for (short i_20 = 1; i_20 < 9; i_20 += 4) 
                    {
                        var_49 = ((/* implicit */_Bool) ((unsigned char) var_10));
                        var_50 = ((/* implicit */unsigned char) ((unsigned long long int) arr_38 [i_2] [(_Bool)1] [i_2] [i_2]));
                        arr_85 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) + (2305843009213693951ULL)));
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) var_0))));
                    }
                    var_52 &= ((/* implicit */short) ((((var_5) + (2147483647))) << ((((((-(var_0))) + (626677411))) - (28)))));
                    arr_86 [i_0] = ((/* implicit */unsigned char) ((_Bool) var_14));
                }
            }
            for (unsigned char i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                var_53 = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2] [i_0]);
                arr_89 [i_0] [(unsigned short)10] [i_21] [i_21] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_16 [i_21] [i_21] [i_2] [i_2] [i_0] [i_0])))));
                var_54 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_33 [i_21] [i_2] [i_0] [i_0]))) != (arr_12 [i_0] [i_2] [i_21] [(unsigned char)2])));
                var_55 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_1)) + (4250268461U)))) - (var_3)));
            }
            for (signed char i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                var_56 &= ((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) var_5)) ? (4774954326806491688ULL) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_2] [i_2] [i_22])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1721756104)) || (((/* implicit */_Bool) var_4))))))));
                var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) (_Bool)1))));
                arr_92 [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_68 [i_0] [i_2] [i_2] [i_2] [i_22]))));
                var_58 = ((/* implicit */_Bool) ((var_16) - (arr_8 [i_0] [i_2] [i_0])));
            }
            var_59 &= ((/* implicit */unsigned char) (+(var_15)));
            arr_93 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
        }
        var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_91 [(unsigned char)10] [i_0] [(unsigned char)10]) ? (13671789746903059923ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_0] [i_0] [i_0] [i_0] [i_0]))) == (var_10)))) : (var_12)))) ? (((/* implicit */int) min((arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) ((arr_54 [i_0] [6U] [i_0] [i_0] [i_0] [i_0] [10]) <= (((/* implicit */long long int) var_5)))))))) : (((/* implicit */int) ((((unsigned long long int) 1721756104)) != (((/* implicit */unsigned long long int) ((arr_79 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0]) ? (6362081333483055384LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [(unsigned short)6])))))))))));
    }
    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 2) 
    {
        arr_98 [i_23] [i_23] = min((arr_95 [i_23]), ((+(var_1))));
        arr_99 [i_23] [i_23] = ((/* implicit */short) (((+(min((var_3), (((/* implicit */long long int) var_14)))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_95 [i_23]))) == (arr_97 [i_23])))))));
    }
}
