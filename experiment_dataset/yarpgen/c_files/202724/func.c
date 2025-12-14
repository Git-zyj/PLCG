/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202724
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
    var_13 = ((/* implicit */short) var_11);
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_2 [i_0]) : (529236013U))), (3765731289U))) >= (((4184439447U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1])))))));
            arr_6 [i_0] [i_1 + 1] [10LL] = ((/* implicit */signed char) arr_0 [i_0] [(unsigned short)4]);
            arr_7 [i_0 - 3] [i_0] [i_0 - 1] = ((/* implicit */short) 110527848U);
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) + (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) ((signed char) arr_2 [i_0])))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_4 [i_1 - 1] [i_0] [i_0]))) ? (((((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0])) >> (((((/* implicit */int) arr_4 [i_1 - 1] [i_0] [8LL])) - (226))))) : (((/* implicit */int) max((arr_4 [i_1 + 2] [i_0] [9U]), (arr_4 [i_1 + 2] [i_0] [i_2]))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_18 ^= ((/* implicit */long long int) var_7);
                            arr_18 [i_4] [i_3] [i_0] [i_0] [i_1] [10U] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) | (((((/* implicit */_Bool) arr_8 [i_0 - 1] [(short)3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) (signed char)-111)), (4184439468U)))))));
                            var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2])) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)122)))) : (((/* implicit */int) arr_9 [i_0 - 3] [i_0] [i_0 - 2] [i_0]))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) (signed char)120))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0]))) : (110527848U)))))));
                            var_20 = ((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_1] [i_1])), ((~(((/* implicit */int) (unsigned char)61))))));
                        }
                        arr_19 [9ULL] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_0])) || (((/* implicit */_Bool) 331482844U))))))))), (((int) arr_9 [i_1 + 2] [i_0] [i_2] [i_0 + 1]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62467)))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 2] [i_0 + 1])) ? (362352942U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 280553024591993829ULL)) ? (110527848U) : (4184439447U)));
        }
        for (unsigned int i_6 = 4; i_6 < 7; i_6 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)6681)))))));
            arr_24 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_11 [i_0] [i_0] [(signed char)10] [i_0]), (((signed char) (signed char)-120))))) ^ ((-(((/* implicit */int) (signed char)64))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_0] [i_0] [i_6 - 4] [i_6 - 1] [i_6 - 4] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_6]))) : (((((/* implicit */_Bool) arr_5 [i_6 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 - 1]))) : (2541521624U))))))));
            arr_25 [i_0] [i_6 + 4] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0 - 1] [(_Bool)1] [(_Bool)1] [i_0])) + (((/* implicit */int) (signed char)88))))) == (((4244835981U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 + 1])))))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) arr_26 [i_8]))), (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)199)) & (((/* implicit */int) (signed char)124))))), (max((4184439447U), (((/* implicit */unsigned int) arr_22 [i_8] [i_6])))))))))));
                        var_27 = ((/* implicit */unsigned long long int) (unsigned short)36462);
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 4; i_9 < 7; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_28 -= ((/* implicit */short) arr_30 [i_0] [i_11] [i_11] [i_11] [0U]);
                        var_29 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_11 [i_9] [i_9 - 1] [i_9] [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [i_9 - 2] [i_9] [6ULL]))) : (4184439447U))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_12 [i_0 - 1] [(unsigned short)10])) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) arr_28 [i_0] [i_0] [5U] [i_10] [i_11])))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-41))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(short)10])) ? (arr_40 [i_0] [i_9 - 2] [i_12]) : (((/* implicit */long long int) arr_31 [(unsigned short)9] [i_9] [0])))) : (((/* implicit */long long int) 4184439447U))));
                arr_43 [i_0] [i_0] [i_0] = ((arr_13 [i_0 - 3] [i_9 + 1] [i_0] [i_9 - 4]) - (arr_13 [i_0] [i_9 + 1] [i_0] [i_9 + 1]));
                /* LoopSeq 3 */
                for (short i_13 = 1; i_13 < 9; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        arr_49 [i_9 - 1] [i_9 - 1] [2LL] [i_9 - 1] [i_0] = ((/* implicit */unsigned long long int) 1297233338U);
                        arr_50 [9ULL] [i_0] [i_12] [9ULL] = 4184439448U;
                    }
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        arr_53 [i_0] [i_15] [i_13 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_0] [i_9 + 1] [(unsigned short)6] [i_13 - 1] [i_15] [i_15])) ? (835116212055641983ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0 - 1] [i_9 - 4] [i_12] [i_13 + 2] [i_15])))));
                        arr_54 [i_0] [i_15] [i_0] [(_Bool)1] [i_15] = ((/* implicit */_Bool) arr_34 [i_13] [i_0]);
                    }
                    for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        arr_57 [i_0] [i_12] [i_12] [i_9 + 1] [i_0] = ((/* implicit */signed char) 11917997755937128885ULL);
                        var_31 = ((/* implicit */unsigned char) ((arr_13 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [(signed char)9] [i_13 + 1] [i_0 + 1])))));
                        var_32 = ((/* implicit */signed char) arr_34 [i_9 - 2] [i_0]);
                        var_33 = ((/* implicit */unsigned short) (+(3857981178U)));
                    }
                    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_13] [i_12] [i_13 + 1] [(unsigned char)10])) || (((/* implicit */_Bool) (short)21763))));
                    var_35 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_0] [i_0 - 1] [i_13 - 1]))));
                }
                for (short i_17 = 1; i_17 < 9; i_17 += 2) /* same iter space */
                {
                    arr_61 [i_0 - 2] [i_0] [i_12] [i_17 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_9 - 3] [i_9])) ? (2997733958U) : (2317415539U)));
                    var_36 = ((/* implicit */short) arr_44 [i_17] [i_0] [i_9 + 2] [0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_37 = ((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_0] [i_0]))));
                        arr_64 [i_0 - 3] [i_9 - 1] [i_0] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned long long int) 2317415539U);
                    }
                    var_38 = var_10;
                    arr_65 [i_0 - 2] [i_0] [i_12] [i_17 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_44 [i_0 - 1] [i_0] [i_17 - 1] [i_17 + 1] [i_0] [i_0 - 1])) >= (((/* implicit */int) (signed char)-121))));
                }
                for (short i_19 = 1; i_19 < 9; i_19 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        arr_71 [i_0 - 3] [1U] [i_0 - 3] [i_0] [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_20] [i_19 - 1] [i_9 + 2] [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) arr_59 [i_9 + 2] [i_9 - 1] [i_9 + 3] [i_9 - 4]))));
                        var_39 = ((/* implicit */short) ((unsigned int) arr_0 [(short)1] [(short)1]));
                        var_40 = ((/* implicit */short) 835116212055641983ULL);
                    }
                    var_41 += ((/* implicit */unsigned int) arr_22 [i_12] [i_12]);
                    arr_72 [i_0] [i_0] = ((short) 110527849U);
                }
            }
            for (signed char i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) max((min((((1977551771U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (arr_2 [(unsigned char)8]))), (((((/* implicit */_Bool) ((signed char) (signed char)64))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5635))) : (((unsigned int) arr_69 [i_0] [i_0] [i_0] [(short)6])))))))));
                /* LoopNest 2 */
                for (unsigned int i_22 = 2; i_22 < 7; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        {
                            arr_82 [i_0] [i_9 - 3] [(short)6] [i_21] [i_0] [i_22] [(signed char)1] = ((/* implicit */unsigned short) arr_27 [i_0 - 2] [i_0 - 2] [i_0 + 1]);
                            var_43 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (signed char)-88))) == (((/* implicit */int) arr_5 [i_9 + 2]))));
                            var_44 = ((/* implicit */unsigned char) arr_12 [i_23] [i_0]);
                        }
                    } 
                } 
                var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((791167597919907710ULL), (((/* implicit */unsigned long long int) (short)14800))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [(unsigned char)3] [i_9] [i_21] [(_Bool)1] [i_0 - 2]))) : (var_8)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)11082)) - (((/* implicit */int) (short)7169))))), ((~(2317415516U))))) : (((((/* implicit */_Bool) ((unsigned int) arr_37 [i_0] [i_0] [(_Bool)1]))) ? (((unsigned int) arr_51 [i_0] [i_9] [i_9] [(signed char)7])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [2ULL] [(unsigned char)9] [i_9] [i_0 + 1] [i_0 + 1])))))));
            }
            arr_83 [i_0 - 3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)49201), (((/* implicit */unsigned short) arr_73 [i_0 - 3] [i_0] [i_9 + 2])))))) * (((11917997755937128885ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0 + 1] [i_0 - 3] [(unsigned short)6])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0 - 1] [7LL] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_9] [i_9 + 4] [i_9 + 3] [i_0] [i_0]))))) : (max((((/* implicit */unsigned int) arr_17 [i_0 + 1] [(short)9] [i_9 + 1] [i_9] [i_9])), (((unsigned int) (_Bool)1))))));
        }
        var_46 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (short)3496)) : (((/* implicit */int) (short)5626))));
        arr_84 [3U] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_66 [i_0 - 1] [i_0 - 2] [i_0 - 2]) ? (((/* implicit */int) arr_66 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (short)14800))))) < (max((((/* implicit */unsigned long long int) arr_66 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (15304996537937932736ULL)))));
        arr_85 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_73 [i_0] [i_0] [i_0 - 1]), ((short)30426)))) < (((/* implicit */int) arr_73 [i_0 - 1] [i_0] [i_0 + 1]))));
        arr_86 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_80 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0] [(signed char)8]) <= (arr_80 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0] [i_0])))) >= (((/* implicit */int) ((3141747535771618867ULL) != (((/* implicit */unsigned long long int) 7729861198535771232LL)))))));
    }
}
