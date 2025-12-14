/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211065
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57401))) + (2928341165175089104LL)))) + (((7872418305424898474ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8139))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((-(((/* implicit */int) (signed char)67))))));
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1]))));
                    }
                } 
            } 
            var_18 -= ((/* implicit */signed char) (~(arr_5 [i_1])));
            arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [3LL] [i_1 - 2] [3LL] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2] [(signed char)16] [i_1]))) : (arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1])));
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_7 [i_4]))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                for (long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((10574325768284653141ULL) != (0ULL))))) ^ (arr_18 [i_7] [i_4] [(unsigned short)0])));
                            var_21 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_6] [(short)12] [i_6 + 1] [(short)10] [i_6]))));
                            arr_26 [i_0] [i_0] [i_4] [(unsigned short)11] [i_6] [i_4] [10ULL] = ((/* implicit */short) arr_5 [(unsigned short)19]);
                            arr_27 [4ULL] [(_Bool)1] [i_4] [i_6] [i_7] = ((/* implicit */int) (-(arr_22 [i_4] [i_5 + 2] [i_5] [i_4])));
                            arr_28 [(_Bool)1] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_4]))));
                        }
                    } 
                } 
            } 
            arr_29 [i_0] [i_4] [17LL] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)148))));
        }
        for (unsigned int i_8 = 3; i_8 < 19; i_8 += 1) 
        {
            arr_33 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_25 [(signed char)9] [i_0] [i_8 - 1] [(signed char)9])) * (var_15)));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10574325768284653141ULL)) ? (arr_21 [i_8] [i_8] [i_8 - 3] [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_23 += ((/* implicit */long long int) ((short) arr_21 [(unsigned short)14] [i_8 - 3] [i_8 + 1] [i_9]));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_8] [i_8 - 3] [i_8]))));
                        var_25 = ((/* implicit */signed char) var_9);
                        arr_39 [(unsigned short)6] [(unsigned char)20] [18U] [i_8 + 2] [(unsigned char)20] [6U] |= ((/* implicit */unsigned int) (unsigned short)57401);
                        arr_40 [(unsigned short)14] [(unsigned short)18] [i_8] [i_10] [(unsigned short)18] = ((/* implicit */signed char) arr_35 [i_0] [i_8] [i_8] [i_0]);
                    }
                } 
            } 
        }
    }
    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
        {
            for (unsigned int i_13 = 3; i_13 < 21; i_13 += 3) 
            {
                {
                    var_26 = min((((((/* implicit */_Bool) arr_42 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_12])) || (((/* implicit */_Bool) arr_46 [0] [4] [i_13])))))) : (arr_43 [i_11]))), (((/* implicit */unsigned long long int) ((long long int) (-(10574325768284653148ULL))))));
                    arr_48 [i_12] = 10574325768284653142ULL;
                    /* LoopNest 2 */
                    for (long long int i_14 = 3; i_14 < 20; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7872418305424898474ULL)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (_Bool)1))))), (((10574325768284653142ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (7872418305424898474ULL) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_54 [i_11] [i_12 - 1] [0LL] [i_15] [(unsigned char)8]), (((/* implicit */unsigned short) arr_45 [i_12] [i_12] [i_12])))))) : (var_6))))));
                                arr_55 [i_11] [i_11] [18LL] [i_12] [18U] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_0))))) ^ (arr_43 [i_11])))) ? (((((/* implicit */_Bool) 11973497584353480673ULL)) ? ((+(((/* implicit */int) (signed char)15)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5))))))) : (((/* implicit */int) max((arr_45 [i_12 + 1] [i_13 - 1] [i_14 + 2]), (arr_45 [i_12 + 1] [i_13 - 1] [i_14 + 2]))))));
                                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(10574325768284653142ULL)))) ? (10574325768284653134ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_41 [i_14 - 1] [i_12 - 1]), (((/* implicit */unsigned short) (signed char)108)))))))))));
                                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_12 + 1] [i_12])) ? (((/* implicit */int) arr_53 [i_11] [i_12 - 1] [i_12])) : (((/* implicit */int) ((arr_46 [(signed char)14] [i_12] [i_12]) == (((/* implicit */long long int) ((/* implicit */int) arr_47 [16LL] [i_12]))))))))) ? (((((/* implicit */_Bool) (unsigned short)44892)) ? (7872418305424898474ULL) : (7872418305424898474ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned short)25420), (((/* implicit */unsigned short) (unsigned char)167))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 3; i_16 < 19; i_16 += 4) 
        {
            for (signed char i_17 = 3; i_17 < 21; i_17 += 2) 
            {
                {
                    arr_62 [i_16] [i_16] [i_17] [(unsigned short)19] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)31074))));
                    arr_63 [(signed char)18] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_11] [i_11] [i_16])) ? ((+(min((((/* implicit */long long int) arr_54 [i_17] [i_16] [i_11] [i_16] [i_11])), (arr_57 [7LL] [i_11]))))) : (((long long int) max((((/* implicit */long long int) arr_53 [(unsigned short)6] [i_16] [i_16])), (6218138035725282147LL))))));
                }
            } 
        } 
        arr_64 [i_11] [i_11] = ((/* implicit */unsigned long long int) var_8);
    }
    for (unsigned char i_18 = 3; i_18 < 22; i_18 += 3) 
    {
        arr_68 [i_18] [i_18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(min((-8724894039507307131LL), (((/* implicit */long long int) (short)-32746)))))))));
        arr_69 [9LL] [i_18 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((arr_65 [i_18]), (((/* implicit */long long int) var_3))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_6)))), (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_67 [i_18])) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) 10574325768284653141ULL)) ? (7872418305424898475ULL) : (((/* implicit */unsigned long long int) 571115592U))))));
        arr_70 [i_18] = ((/* implicit */signed char) (+(((max((((/* implicit */unsigned long long int) var_5)), (var_10))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (long long int i_19 = 1; i_19 < 20; i_19 += 1) 
        {
            for (long long int i_20 = 1; i_20 < 22; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 23; i_22 += 2) 
                        {
                            {
                                arr_84 [i_18] [i_21] [i_21] [i_21] [20LL] = arr_83 [i_21];
                                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (-1921483422472478688LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) 579179374)) : (4294967285U))))));
                            }
                        } 
                    } 
                    arr_85 [i_18] [(unsigned short)6] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_82 [(signed char)20]))));
                    arr_86 [(unsigned short)21] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) - (((/* implicit */int) (unsigned short)8151))));
                    var_31 ^= ((/* implicit */unsigned char) max((max((4003559230U), (((/* implicit */unsigned int) (unsigned short)41582)))), (((/* implicit */unsigned int) arr_66 [i_20 + 1]))));
                    arr_87 [i_20] [i_19] [i_20 + 1] [i_20] &= ((/* implicit */long long int) arr_82 [2]);
                }
            } 
        } 
    }
    var_32 = var_6;
}
