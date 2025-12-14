/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224057
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
    var_20 += ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) min((var_10), (((/* implicit */long long int) var_3)))))), (min((((/* implicit */int) ((_Bool) (short)-4311))), ((-(var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)30391)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [3LL] [i_2 - 1] [i_2] [i_1 - 2]))) : (((arr_2 [i_0]) >> (((arr_2 [i_1 - 2]) - (696975908916517485ULL)))))));
                    var_22 = ((/* implicit */unsigned int) max((((long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0]))))), (((/* implicit */long long int) (unsigned short)50028))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 3; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            arr_18 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (167550687) : ((-(((/* implicit */int) (unsigned short)40147))))))) ? (((/* implicit */int) ((max(((_Bool)1), ((_Bool)1))) || (((/* implicit */_Bool) max((arr_8 [i_1] [i_0]), (((/* implicit */unsigned char) var_7)))))))) : (((((/* implicit */_Bool) (unsigned short)40747)) ? ((~(((/* implicit */int) arr_8 [14ULL] [i_0])))) : (((/* implicit */int) ((unsigned short) (unsigned short)24789)))))));
                            var_23 = ((/* implicit */unsigned int) (-(var_10)));
                        }
                        for (short i_5 = 3; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            arr_22 [i_5] [7U] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_0] [i_0])))))));
                            var_24 = ((/* implicit */unsigned char) 1791274871U);
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_27 [i_2] [i_0] [i_2 - 1] [18] [i_2] [i_6] = ((/* implicit */unsigned short) var_11);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (((/* implicit */int) (unsigned short)62484))));
                        }
                        arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_25 [i_3 + 3] [i_0] [(_Bool)1])), (arr_15 [i_0] [(_Bool)1] [i_2] [i_2] [i_0] [17U]))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_27 &= max((((/* implicit */int) ((unsigned short) arr_8 [(_Bool)0] [(_Bool)0]))), (((arr_12 [i_1 - 1] [i_2] [i_2] [i_2 + 1]) ? (((/* implicit */int) arr_8 [14] [14])) : (((/* implicit */int) arr_8 [16LL] [16LL])))));
                            var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_24 [i_0] [i_0] [i_0] [i_1] [i_2 + 2])))));
                        }
                        var_29 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_1])) : (((/* implicit */int) var_16)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        arr_35 [i_0] [(signed char)7] [i_2 + 2] [i_0] [i_2] = ((/* implicit */short) ((int) 595473387U));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_30 += ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_9]))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : ((~(2147483647)))));
                            var_32 = ((/* implicit */long long int) arr_21 [(_Bool)1] [i_0] [i_0] [i_0] [14]);
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_1 - 1] [i_2 + 1] [i_2] [(signed char)15])) : ((-(((/* implicit */int) var_2))))));
                            arr_43 [i_0] [i_0] [(unsigned char)12] [i_9] [i_11] [i_2 + 1] = ((/* implicit */unsigned char) (~(3699493908U)));
                            var_34 = ((/* implicit */_Bool) arr_21 [i_11] [i_11] [i_11 - 2] [i_11 + 1] [i_11]);
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))));
                            var_35 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_8 [i_1] [i_0])));
                        }
                        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_0] [i_1] [i_1 - 1] [i_0] [i_1 + 1])) ? (arr_20 [i_2 + 1] [i_0] [i_1] [i_1 - 1] [i_0] [i_0]) : (arr_20 [i_2 + 1] [i_0] [i_1] [i_1 - 2] [i_0] [i_0])));
                            var_36 = ((((/* implicit */_Bool) arr_36 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_2 - 1])) ? (((/* implicit */int) arr_36 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_2 + 2])) : (((/* implicit */int) arr_36 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2 - 1])));
                            arr_49 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)24794)) > (((/* implicit */int) arr_17 [16] [i_0] [i_2] [i_1] [i_0] [i_0])))))));
                            arr_50 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)48766));
                        }
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_10 [i_1] [i_1] [i_0] [i_9]))) != (((/* implicit */int) ((unsigned char) arr_41 [i_2] [i_2])))));
                    }
                    for (short i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_1] [i_2] [i_13] = ((/* implicit */unsigned char) ((signed char) max((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_13 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-5)))), (((/* implicit */int) arr_45 [i_0] [i_1] [i_13])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_14 = 1; i_14 < 17; i_14 += 1) 
                        {
                            arr_58 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_54 [i_0] [i_0] [i_2] [i_1 - 1]))));
                            var_38 = (-(((/* implicit */int) arr_51 [i_13 + 1] [i_14 + 1] [i_1 - 2] [i_13] [i_14 + 2])));
                            arr_59 [i_0] [i_0] [i_1] = ((/* implicit */int) arr_26 [i_2] [i_1] [i_0]);
                            arr_60 [i_0] [i_0] [i_2] [i_13] [i_14] = ((/* implicit */unsigned short) ((_Bool) arr_31 [i_14 + 2] [i_14] [i_13 - 1] [i_2 + 1]));
                        }
                        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            arr_65 [13] [(unsigned short)16] [i_0] [i_1] [13] = ((/* implicit */unsigned long long int) var_18);
                            arr_66 [i_0] [i_1] [i_0] [i_13 - 1] [i_0] = ((/* implicit */long long int) var_16);
                            var_39 += ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [0ULL] [i_15])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483647)) ? ((+(((/* implicit */int) arr_61 [i_0] [i_0] [i_15])))) : (min((0), (arr_16 [i_13] [i_0] [i_1] [i_0])))))) : (((arr_47 [(unsigned char)14] [i_13 + 1] [i_2 - 1] [i_13] [i_1 - 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_15])) ? (((/* implicit */int) arr_46 [i_13] [i_1] [i_1 + 1] [i_0] [i_15])) : (((/* implicit */int) (unsigned char)94)))))))));
                            var_40 -= ((/* implicit */unsigned short) var_7);
                            var_41 ^= ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_56 [i_15] [0ULL] [i_2 + 1] [(signed char)16] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83)))))) : (max((arr_9 [i_15] [i_2] [i_2] [i_1]), (((/* implicit */unsigned int) var_2)))))));
                        }
                    }
                    var_42 ^= ((/* implicit */signed char) ((unsigned int) (((!(((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_2] [i_2])))) ? (max((((/* implicit */long long int) arr_9 [i_2] [i_2] [i_1] [i_0])), (arr_57 [i_0] [i_1] [i_2] [i_1] [18LL]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_38 [i_0] [(unsigned short)10] [9U] [i_1] [i_1 + 1] [i_2]))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    arr_70 [i_0] [i_0] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)22174)) : (3)));
                    arr_71 [i_0] = (~(arr_4 [i_1 - 2] [i_0]));
                }
            }
        } 
    } 
}
