/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3064
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 677213344200915767ULL)) ? (677213344200915767ULL) : (677213344200915767ULL)))) ? ((~(arr_0 [i_0] [i_0 - 4]))) : ((-(((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_11 [i_3] [i_2 + 1] [i_1] [i_0 - 4]))));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)16466)) ? (17769530729508635848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3425))))))));
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(1514488540294686814LL))), (((/* implicit */long long int) var_10))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(signed char)15] [(signed char)15] [(signed char)15]))))) ? (min((var_6), (((/* implicit */unsigned long long int) arr_13 [i_2] [(unsigned short)9] [i_1 - 3] [i_3] [i_4 + 1] [4U] [i_1 - 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(short)4] [i_0] [i_0])) << (((arr_1 [(_Bool)1]) - (3182398526317420240ULL)))))))) : ((~(arr_1 [i_0])))));
                            var_22 = ((/* implicit */unsigned long long int) ((int) arr_3 [i_4 - 1] [i_2 + 1] [i_1]));
                        }
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_1] [i_6] [i_0] [i_6] [i_1]))) ? ((+(((/* implicit */int) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])))) : (((/* implicit */int) arr_8 [i_6 + 1] [i_5 - 1] [i_2 + 1] [i_1 + 1] [i_0 - 2]))))) && (((/* implicit */_Bool) arr_6 [14] [i_2] [14])));
                            arr_20 [i_1] [i_1] [i_5 - 1] = ((/* implicit */int) arr_13 [i_6] [i_6] [i_2 + 1] [(unsigned char)16] [i_2 + 1] [i_1 - 4] [i_0]);
                        }
                        var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [7ULL] [i_1] [i_2 + 1] [7ULL] [7ULL] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) + (arr_4 [i_2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    }
                    for (unsigned int i_7 = 4; i_7 < 18; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4096)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_4 [i_7] [i_2])))))));
                            arr_27 [i_7] [12U] [i_7] = ((/* implicit */long long int) max((arr_23 [i_7 - 4] [i_0] [i_1 - 2] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 3] [i_2] [i_2] [i_8])) ? (((/* implicit */unsigned long long int) -685942543)) : (arr_23 [i_0] [i_0] [i_7] [i_8])))) || (((/* implicit */_Bool) min((6512828417600306498ULL), (((/* implicit */unsigned long long int) (short)29430))))))))));
                            arr_28 [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_15 [i_8] [i_0] [i_2] [9U] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_8 + 3] [i_8] [i_2 + 1] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8 + 3] [i_8]))) / (5462283744705050489LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8 - 1] [i_7 - 4] [i_1] [i_1] [i_0]))) : (arr_16 [i_0 - 3] [i_1 + 1] [i_2 + 1] [i_7 - 1])))));
                            var_25 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)147))));
                            arr_29 [i_1 - 2] [i_2] [i_7 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 1] [i_2 + 1] [i_7] [i_8])), (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_7 - 2] [i_7 - 2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]))))), (arr_4 [(short)6] [(short)6])))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_2 + 1] [i_2] [i_7 + 1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 - 2] [i_1])) + (((/* implicit */int) arr_32 [i_7 - 2] [i_2 + 1] [i_1 + 2] [i_0] [i_0 - 4]))));
                            var_26 ^= arr_24 [i_1] [i_0] [i_1] [i_9];
                        }
                        for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (unsigned short)12362))));
                            arr_37 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_7 - 3] [(_Bool)1]);
                            arr_38 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50862))) ^ ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_14)))))));
                        }
                        arr_39 [i_2] [i_1] [i_0 + 1] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27196)) ? (((/* implicit */int) (short)-27208)) : (((/* implicit */int) (_Bool)0))))), (((arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_2 + 1] [i_2] [i_7 - 4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */short) arr_26 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1] [i_7]))))))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (unsigned short)50862)) <= (((/* implicit */int) arr_18 [(unsigned char)17] [i_7 - 1] [i_7] [11U] [i_7])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (arr_0 [(_Bool)1] [i_1 - 1])))) : (arr_4 [i_7 - 3] [i_0]))))))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_3 [i_7 - 2] [i_2 + 1] [i_1 + 3]))) & (((/* implicit */int) min(((unsigned short)61439), (((/* implicit */unsigned short) (short)-27850)))))));
                    }
                    for (unsigned int i_11 = 4; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)3679))))) == (((((/* implicit */_Bool) arr_15 [i_11] [i_2] [i_1] [i_0] [i_0])) ? (var_18) : (arr_22 [i_11 - 2] [i_2] [i_2 + 1] [i_1 + 3] [i_1] [13ULL])))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)4102)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (short)27196)))))))));
                        arr_43 [i_0 - 1] = ((/* implicit */int) arr_7 [i_0] [i_0]);
                        var_31 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) ((short) var_0))), (((unsigned short) var_14)))), (((/* implicit */unsigned short) ((short) (unsigned short)61433)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_12] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */_Bool) 677213344200915767ULL)) ? (max((arr_25 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_12] [i_2] [i_0 - 3]), (arr_25 [i_2] [i_2] [i_2] [3] [i_2] [i_2]))) : (arr_30 [i_0] [i_0 - 4] [i_1 + 3] [(_Bool)1] [i_2 + 1] [i_2 + 1])))));
                        var_32 = ((/* implicit */unsigned short) var_18);
                        arr_48 [7LL] [i_2 + 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) min((arr_24 [i_0] [i_0] [i_1 - 3] [i_0]), (((/* implicit */short) (signed char)1)))))));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_1 - 3] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_1 - 3] [i_0 - 3]))) : (arr_50 [i_0 - 4])))) ? (min((arr_50 [i_0 - 1]), (arr_50 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0 - 1]) >= (((/* implicit */unsigned long long int) 4274528117U))))))));
                        var_34 = ((/* implicit */_Bool) (((_Bool)1) ? (17769530729508635848ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)62789)))))));
                        arr_51 [i_13] [i_2] = ((/* implicit */int) var_17);
                    }
                }
            } 
        } 
        arr_52 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 2])))) ? ((((((~(((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_50 [i_0])) ? (((/* implicit */int) (unsigned short)2403)) : (((/* implicit */int) (short)32)))) - (2402))))) : (((/* implicit */int) (((~(var_15))) <= ((~(arr_34 [i_0] [i_0] [i_0 - 2] [11ULL] [i_0 - 2]))))))));
    }
    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)61419))))), (arr_4 [i_14] [i_14])))), ((~(((((/* implicit */_Bool) (unsigned short)2896)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [(_Bool)1] [i_14] [i_14] [i_14]))) : (17769530729508635840ULL))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            for (unsigned short i_16 = 2; i_16 < 9; i_16 += 2) 
            {
                {
                    arr_59 [i_14] [i_15] [i_16 - 2] = ((/* implicit */short) (((+(((/* implicit */int) arr_57 [i_15] [i_16 - 1] [i_15] [11ULL])))) >> (((((/* implicit */int) arr_45 [16U] [i_15] [i_14] [i_14])) + (1608)))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) (~(min((max((5611650289877704968ULL), (((/* implicit */unsigned long long int) arr_56 [(unsigned char)0] [(unsigned char)0] [i_15])))), (((/* implicit */unsigned long long int) ((117440512) > (((/* implicit */int) (short)5187)))))))));
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (((~((+(arr_22 [i_14] [i_15] [i_16 + 2] [i_16] [i_15] [i_18]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28057)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3909013502U)))))))));
                                arr_65 [i_14] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(short)3] [i_16] [i_15]))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_16] [i_18] [i_17])), ((-(((/* implicit */int) (unsigned char)26))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_19 = 2; i_19 < 9; i_19 += 2) 
                    {
                        for (short i_20 = 1; i_20 < 11; i_20 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) 1874631653974325410ULL);
                                arr_70 [i_19] [i_16] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) arr_45 [i_16] [i_19 + 3] [i_20 + 2] [i_20 + 1])), (arr_10 [i_15] [i_15] [i_20 + 2] [18U] [i_14] [i_19 - 2])))));
                            }
                        } 
                    } 
                    var_39 ^= ((/* implicit */signed char) max(((~(arr_22 [i_15] [i_16 - 2] [9ULL] [i_14] [i_15] [i_15]))), (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_21 = 3; i_21 < 11; i_21 += 2) 
    {
        arr_74 [i_21] = ((/* implicit */short) (~((~(((/* implicit */int) arr_41 [i_21 - 2] [i_21 - 1]))))));
        var_40 = ((/* implicit */signed char) arr_35 [i_21] [i_21]);
        var_41 = ((/* implicit */_Bool) arr_24 [i_21] [16ULL] [i_21] [i_21]);
    }
}
