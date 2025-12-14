/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27530
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_7)))) ? (((((/* implicit */_Bool) var_9)) ? (var_7) : (var_8))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_6)))))))) : (((((/* implicit */_Bool) max((var_1), (var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
    var_12 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned long long int) (signed char)29)), (11938804589192918156ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) var_2)), (var_8))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [13]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((var_0) && (((/* implicit */_Bool) var_9))))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [(unsigned short)12] [17LL] = var_1;
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_10 [10U] [i_3 + 1] [i_3] [i_3 - 2]) < (((/* implicit */int) arr_5 [i_3] [i_3 + 2] [8ULL] [i_3 + 2]))))) <= (((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 2] [i_3] [i_3 - 2])) ? (((/* implicit */int) arr_5 [i_3] [i_3 - 2] [i_3] [i_3 - 1])) : (((/* implicit */int) var_6)))))))));
                            var_15 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)158)) - (((/* implicit */int) ((((3208633045U) - (3208633045U))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)32748))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */int) min((var_16), (min((min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2 - 3] [i_3 - 1] [i_3 + 2]))) <= (min((var_7), (((/* implicit */unsigned int) var_6)))))))))));
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) min((var_3), (((/* implicit */signed char) var_4))))) : (((/* implicit */int) arr_8 [i_3 + 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)936)), ((unsigned short)41661)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)15))))) : (((((/* implicit */_Bool) (unsigned short)56382)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))))))) : (((/* implicit */long long int) (-((+(((/* implicit */int) arr_15 [(unsigned short)13] [i_0] [i_2] [0U])))))))));
                            var_18 = ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_4)), (arr_14 [i_0] [i_1] [i_2] [i_3] [i_5]))), (((/* implicit */long long int) var_5))))) ? ((~(arr_14 [7ULL] [i_1] [i_2 - 4] [i_3] [i_3 - 1]))) : (((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((((arr_9 [i_0] [i_2] [i_3] [0]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (89))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_0 [i_5] [(_Bool)1]))))));
                            var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_1] [(short)13] [i_2 - 4] [i_3] [i_5]) & (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_0)))))))), (arr_2 [i_0])));
                        }
                        var_20 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_0])), (max((arr_14 [i_3 - 1] [i_0] [i_2 - 2] [i_3] [i_3]), (arr_9 [i_3 - 1] [7LL] [i_2 - 2] [i_2 - 2])))));
                        arr_17 [i_1] [(signed char)12] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_0])), (((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (var_8) : (var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_5))))) ? (arr_4 [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_9))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_25 [i_6] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                        var_21 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_3)), (arr_7 [(_Bool)1] [i_1] [i_0]))))), (((/* implicit */long long int) (((((+(((/* implicit */int) arr_3 [i_1])))) + (2147483647))) << ((((~(var_7))) - (3063951260U))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) max((var_22), ((~(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [14U] [14U]))))), (max((((/* implicit */unsigned int) var_10)), (arr_19 [i_0] [i_0] [(signed char)4] [i_0])))))))));
        }
        for (int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            var_23 = ((/* implicit */int) max((var_23), ((~(((((/* implicit */_Bool) var_8)) ? (arr_10 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8]) : (((/* implicit */int) var_0))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))), ((-(((/* implicit */int) var_4))))))) * (((((((/* implicit */_Bool) arr_20 [i_0] [i_8 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))) / (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [2] [i_0])) ? (((/* implicit */unsigned int) arr_16 [i_8] [0LL] [i_0] [i_0] [(_Bool)1] [(signed char)15])) : (arr_1 [i_0])))))));
            var_25 = ((/* implicit */short) ((max((((arr_19 [i_0] [i_8] [(_Bool)1] [i_8]) | (var_7))), (((/* implicit */unsigned int) ((var_1) - (((/* implicit */int) var_2))))))) / (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [(unsigned char)7])) ? (((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8] [i_0] [(signed char)9])) : (((/* implicit */int) arr_13 [i_0] [2ULL])))), (((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_2)))))))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            {
                                arr_42 [i_9] [i_12] [i_9] = ((/* implicit */unsigned short) var_7);
                                arr_43 [i_9] [i_10] [i_9] [i_12] [i_9] = ((/* implicit */signed char) ((max((((/* implicit */long long int) 692475732U)), (2290645448863142551LL))) / (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_9] [i_11] [i_13])) | (((/* implicit */int) (short)32748)))))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_40 [i_10] [0ULL] [(unsigned char)12] [i_9] [i_10]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_12 - 2] [i_12 - 2] [i_12 + 3] [i_12 + 1]))) : (min((((/* implicit */unsigned int) var_2)), (arr_35 [i_13] [i_13] [i_13]))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_9), (((/* implicit */short) var_5)))))))))))));
                                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (min((max((arr_35 [i_10] [i_10] [i_9]), (((/* implicit */unsigned int) arr_32 [i_12] [i_12] [i_12])))), (((/* implicit */unsigned int) arr_38 [i_9] [9]))))));
                            }
                        } 
                    } 
                    arr_44 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) + (((((/* implicit */int) arr_40 [i_11] [i_11] [(signed char)5] [i_11] [i_9])) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_35 [i_9] [i_10] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_33 [i_9])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_31 [i_10] [i_9])), (arr_38 [(unsigned short)9] [(unsigned char)2]))))))) : (var_7)));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), (((arr_32 [i_9] [i_15] [i_11]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_34 [(short)10] [i_11] [i_9])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_40 [i_15] [i_10] [i_11] [i_15] [i_9])) : (((/* implicit */int) arr_36 [i_9] [i_9] [9U] [i_9]))))))) : (((arr_36 [i_15] [i_15] [i_15] [i_15]) ? (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (arr_36 [i_9] [i_10] [i_14] [i_15])))))))));
                                var_29 -= ((/* implicit */_Bool) ((max((arr_45 [i_11] [i_11]), (arr_45 [i_15] [i_15]))) / (((((/* implicit */_Bool) arr_45 [i_9] [i_14])) ? (arr_45 [i_10] [i_9]) : (arr_45 [i_9] [i_11])))));
                                arr_52 [i_9] [(unsigned short)11] [i_11] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_41 [i_9] [i_9] [11U] [i_9] [i_9]) - (arr_41 [i_9] [i_10] [i_11] [i_14] [i_9])))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (arr_29 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_35 [i_9] [i_10] [i_9])) : (arr_50 [i_15] [i_14] [i_11] [i_10] [i_9])))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)41658)))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (arr_35 [i_11] [i_10] [i_9])))) || (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_11] [i_10])) ? (var_1) : (((/* implicit */int) var_0))))) >= (max((arr_30 [i_9]), (((/* implicit */unsigned int) var_0))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (var_8)))) ? (((/* implicit */unsigned int) ((arr_40 [16LL] [i_9] [16] [i_9] [16LL]) ? (var_1) : (((/* implicit */int) var_3))))) : (((arr_32 [i_9] [i_9] [i_9]) ? (arr_45 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_31 [i_9] [6U])), (var_5)))) ? (arr_35 [i_9] [i_9] [i_9]) : (((((/* implicit */_Bool) var_2)) ? (arr_48 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) (-(((arr_41 [i_9] [i_9] [i_9] [i_9] [(unsigned short)1]) / (((/* implicit */int) arr_32 [i_9] [i_9] [(short)10]))))))))))));
    }
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) var_9))))) : ((-(var_8)))))) ? (max((((/* implicit */unsigned int) max((var_4), (var_0)))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_10)) - (63)))))))))))));
}
