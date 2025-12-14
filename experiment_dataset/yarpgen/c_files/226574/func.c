/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226574
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
    var_12 |= ((/* implicit */unsigned short) (-((~(var_2)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
        arr_4 [i_0] [(_Bool)0] |= ((/* implicit */signed char) var_11);
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)9008))))))) ? (((/* implicit */int) ((unsigned short) max((arr_2 [i_0] [i_0]), (arr_0 [i_0]))))) : (((/* implicit */int) min((((signed char) arr_0 [i_0])), (((signed char) (unsigned short)56528)))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 1) 
            {
                arr_12 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_13 ^= ((/* implicit */unsigned int) min(((+(max((((/* implicit */unsigned long long int) var_6)), (var_2))))), (((/* implicit */unsigned long long int) var_3))));
                    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_10 [i_1] [i_1] [i_3 - 2])) * (((((/* implicit */int) var_5)) % (((/* implicit */int) var_0)))))), ((~((~(((/* implicit */int) arr_11 [i_1] [i_2] [i_2]))))))));
                    arr_15 [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_4]))))) >= (((/* implicit */int) arr_9 [i_1] [i_1] [i_2])))))));
                    var_15 ^= ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (unsigned short)9004)) != (var_3))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4])) || (((/* implicit */_Bool) arr_8 [i_1] [i_3 - 1]))))) : (((/* implicit */int) ((signed char) arr_9 [i_1] [i_2] [i_1]))))), (((/* implicit */int) ((unsigned short) max((var_5), (var_5)))))));
                    arr_16 [17ULL] [i_4] [i_2] [17ULL] [17ULL] = ((max((max((var_4), (var_3))), ((+(((/* implicit */int) arr_9 [21LL] [14ULL] [i_2])))))) + (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [2] [i_2] [i_2] [(signed char)16])))) - (((/* implicit */int) var_0)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) min((var_9), (((/* implicit */unsigned short) arr_10 [i_3 - 2] [i_3 + 1] [i_3 - 1])))));
                    var_16 = (~(((((((/* implicit */_Bool) -4984351083184310487LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) : (1554213816U))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)9008), (((/* implicit */unsigned short) arr_17 [i_2])))))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) var_0)) - (5373))))))));
                    arr_24 [i_1] [i_1] [i_2] [7U] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (arr_18 [i_2] [(unsigned char)4] [(signed char)4] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                }
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((min((((/* implicit */int) var_9)), (var_4))) << (((((((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_10 [i_1] [i_2] [i_3])))) + (26044))))) | (((((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 3] [i_3 - 2])))))))));
                arr_25 [i_1] [i_2] = ((/* implicit */short) arr_9 [i_1] [i_1] [i_2]);
            }
            var_18 = ((/* implicit */signed char) (+(arr_22 [i_2] [i_2] [i_2] [i_2])));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) (-(max((((/* implicit */long long int) arr_9 [i_2] [i_7] [i_2])), (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))));
                        var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((arr_11 [0U] [i_7] [i_2]), (((/* implicit */unsigned short) var_1))))) ? (max((var_2), (((/* implicit */unsigned long long int) arr_17 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2]))) > (var_10)))))))));
                    }
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) var_7);
            arr_34 [i_9] [(short)12] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_29 [i_1] [i_9] [(short)21])))) | (((/* implicit */int) arr_29 [i_1] [i_1] [i_9]))));
            arr_35 [i_1] [i_1] |= ((/* implicit */long long int) arr_6 [i_9]);
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (signed char i_12 = 2; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) (((+(arr_41 [i_1] [i_10] [11LL] [i_12 + 2]))) * (((((/* implicit */_Bool) var_1)) ? (arr_41 [i_11] [i_11] [i_10] [(signed char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            arr_43 [i_9] [i_1] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                arr_44 [i_1] [i_9] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_29 [0U] [i_9] [i_1]))))) ? (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_7)))))))) ? (((/* implicit */int) ((unsigned short) arr_31 [i_9] [i_9] [i_9]))) : (((min((arr_31 [i_9] [2] [i_10]), (((/* implicit */int) var_5)))) & (((/* implicit */int) min((arr_17 [i_9]), (((/* implicit */unsigned char) var_7)))))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 1; i_13 < 22; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            arr_50 [i_9] [i_9] [i_10] [i_10] [(signed char)11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)8)))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_40 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_13 + 1] [i_13 - 1] [i_13 - 1]))))), (-3227685170413109293LL))) : (((/* implicit */long long int) var_10))));
                            arr_51 [i_9] [i_9] [18LL] [i_9] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_2))))));
                            arr_52 [i_1] [i_9] [20LL] [(signed char)21] [i_14] = ((/* implicit */unsigned short) arr_39 [i_1] [i_1] [i_9] [i_1] [i_9] [i_1]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) /* same iter space */
            {
                arr_55 [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                var_23 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_6 [i_1])))));
            }
        }
        for (unsigned int i_16 = 1; i_16 < 22; i_16 += 2) 
        {
            var_24 = ((unsigned char) ((arr_27 [i_1] [i_16]) ? (((/* implicit */int) arr_27 [i_16] [i_16])) : (((/* implicit */int) arr_27 [i_1] [i_16]))));
            var_25 = ((/* implicit */_Bool) arr_38 [(short)11] [20U] [(_Bool)1] [(_Bool)1] [i_16] [(_Bool)1]);
            var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_54 [i_16] [i_16] [(unsigned short)10] [i_16]))) ? (((((/* implicit */_Bool) arr_47 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [i_16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32764)))) : ((-(((/* implicit */int) arr_39 [i_1] [i_1] [i_16] [i_1] [i_1] [i_16 - 1]))))))), (min((arr_21 [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 + 1]), (((/* implicit */long long int) var_6))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((min((((/* implicit */int) arr_36 [i_1] [i_16])), (var_4))), (((/* implicit */int) max((arr_14 [i_1] [i_16] [i_16] [i_16 + 1]), (((/* implicit */unsigned short) var_7)))))))) | (max((((/* implicit */unsigned int) var_3)), (arr_18 [i_16] [16] [i_16 + 1] [i_16 + 1])))));
        }
        /* LoopSeq 2 */
        for (long long int i_17 = 3; i_17 < 21; i_17 += 3) 
        {
            arr_61 [i_17] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1])) ? (arr_41 [i_1] [i_1] [7] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_17] [i_17] [i_17]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_17 + 2] [i_17 + 2] [(short)7] [i_17] [i_17] [4])))))) | (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_10))))));
            /* LoopNest 2 */
            for (signed char i_18 = 2; i_18 < 22; i_18 += 4) 
            {
                for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_38 [i_17] [i_17 - 3] [i_17 + 2] [i_17 + 1] [i_17] [i_17]))))));
                        var_29 = ((/* implicit */unsigned long long int) ((unsigned int) var_2));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+((-(arr_41 [i_18 + 1] [i_18 + 1] [i_18 - 2] [i_18 - 1]))))))));
                    }
                } 
            } 
            arr_67 [i_17] = ((/* implicit */long long int) ((signed char) var_10));
            var_31 += ((/* implicit */unsigned int) ((((((var_2) / (((/* implicit */unsigned long long int) 3003297418U)))) >> (((arr_26 [i_17 + 2] [i_17 - 2] [i_17 - 3] [i_17 - 2]) - (6395349114505884978ULL))))) << (((((var_11) | (((/* implicit */unsigned long long int) var_3)))) - (15207900330109919088ULL)))));
        }
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) ((unsigned short) ((((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) + (2147483647))) << (((var_2) - (2606923811249273940ULL))))) >= (((/* implicit */int) var_7)))));
            arr_71 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [i_1] [16U])) << (((((((/* implicit */int) arr_63 [i_1] [i_20] [i_20])) + (120))) - (17))))), (((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))), (max((((/* implicit */unsigned int) arr_27 [i_1] [i_1])), (max((arr_42 [i_1] [4ULL] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) var_3))))))));
        }
    }
    for (long long int i_21 = 0; i_21 < 20; i_21 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_22 = 3; i_22 < 19; i_22 += 4) 
        {
            for (long long int i_23 = 1; i_23 < 18; i_23 += 2) 
            {
                for (unsigned short i_24 = 1; i_24 < 19; i_24 += 3) 
                {
                    {
                        arr_84 [(_Bool)1] [i_22 - 3] [i_22 + 1] |= ((/* implicit */_Bool) var_7);
                        var_33 |= ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)56521))))));
                        var_34 = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)14001)))), ((!(((/* implicit */_Bool) var_5))))));
        var_36 = ((/* implicit */long long int) (((-(((((/* implicit */int) var_8)) | (((/* implicit */int) arr_63 [(_Bool)1] [i_21] [i_21])))))) | (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1)) ? (-13) : (-15)))))));
        var_37 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_21] [i_21]))))))));
    }
}
