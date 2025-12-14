/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249196
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) (short)0);
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-75))))) : ((~(arr_2 [(signed char)0] [i_1]))))));
                    arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_2] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((short) var_1))) : (max((arr_3 [i_1] [i_1] [i_2 + 2]), (arr_3 [i_0] [i_0] [i_2 - 1]))));
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */short) min((((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (0ULL))) < (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))))), ((signed char)-75)));
                        arr_13 [i_0] [7] [i_0] [i_0] [i_0] = ((/* implicit */int) min(((signed char)74), ((signed char)-38)));
                        var_22 = ((int) arr_7 [i_0] [i_2 + 1] [i_0] [i_0]);
                        arr_14 [i_3] [i_2] [i_1] [4] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-66)), ((short)-13784)));
                    }
                    for (int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((-3206694012824923272LL) <= (((/* implicit */long long int) ((int) -744170917)))));
                        var_23 = ((/* implicit */long long int) arr_6 [i_0] [3]);
                        arr_19 [i_0] [i_1 + 1] [i_2 - 1] [5] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) min((max((((unsigned long long int) var_18)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (517819910629969972LL)))))), (((/* implicit */unsigned long long int) max((arr_1 [i_1 + 1]), (((/* implicit */unsigned int) ((2097608351) < (arr_3 [i_1 + 2] [i_2] [7])))))))));
                        var_25 = ((/* implicit */unsigned long long int) 53517996);
                        var_26 = (+((+(((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 3] [(short)6] [i_2 - 2])))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_26 [i_2] = var_15;
                            var_27 = ((/* implicit */unsigned int) (+(((unsigned long long int) (signed char)114))));
                        }
                        var_28 = ((/* implicit */unsigned long long int) (+((+(arr_20 [i_1 + 1] [i_0])))));
                    }
                    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_29 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6091))) + (4294967274U)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_1] [i_1] [i_1 - 3]) : (arr_4 [i_1] [7] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)105)) : (arr_4 [8U] [i_1] [i_1 - 3])))));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_33 [i_8] [i_7] [i_8] [i_8] [i_1 - 2] [1] = ((/* implicit */unsigned long long int) (+(arr_31 [i_0] [10] [10] [i_0] [(short)7] [i_0] [i_0])));
                            arr_34 [i_0] [i_0] [i_8] [i_0] [i_0] = min((((/* implicit */unsigned int) arr_24 [i_0] [i_7] [i_0] [i_2] [i_0] [i_1 - 2] [i_0])), (262016U));
                            var_29 = ((/* implicit */unsigned int) arr_30 [i_1 + 2] [i_1 - 2] [i_2] [i_8] [1ULL] [i_7]);
                        }
                        arr_35 [i_0] [i_0] = ((/* implicit */int) 4294967295U);
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) 504)) ? (((/* implicit */unsigned long long int) 1952407135)) : (3575337357437084914ULL))))));
                        arr_36 [i_0] [i_0] [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(32704U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -4612774590721635140LL)))) : (((4612774590721635136LL) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [4U] [1] [4U] [1])))))))));
                    }
                }
                for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 1) 
                {
                    arr_40 [i_0] [i_0] = ((/* implicit */unsigned long long int) 1220546386);
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        arr_43 [4] [i_1 - 2] [i_10] [2U] = ((/* implicit */long long int) var_19);
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            var_31 = var_3;
                            var_32 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) min(((signed char)-84), ((signed char)105)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_24 [i_11] [i_10] [(short)7] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)0)) : (1952407152)))))), (((unsigned long long int) (-(arr_44 [i_11] [i_0] [i_0] [i_1] [i_1 + 3] [i_0]))))));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            arr_49 [i_0] [i_0] [i_0] [6U] [i_0] [i_12] [i_12] = ((/* implicit */signed char) arr_46 [(short)10] [i_1 + 2] [i_9] [(short)10] [i_12]);
                            arr_50 [i_0] [i_0] [i_0] = ((/* implicit */short) -4612774590721635143LL);
                            arr_51 [i_0] [i_1] [i_9] [i_10] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_9 + 1] [i_9 + 1] [i_1 - 3])) ? (var_10) : (((/* implicit */int) arr_10 [(short)1] [i_9 + 2] [i_9 + 2] [i_1 + 1]))));
                        }
                        arr_52 [i_0] = ((/* implicit */int) arr_42 [i_0] [i_0] [i_9] [5] [i_10]);
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 4) 
                    {
                        arr_55 [(signed char)1] [(short)9] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_44 [i_1 + 2] [i_9 + 2] [i_9 + 2] [i_1 + 2] [i_1] [i_1 + 2])) ? (arr_44 [i_13] [i_9] [i_9 - 2] [i_1 + 1] [i_0] [i_0]) : (arr_44 [i_0] [i_0] [i_9 - 2] [i_1 + 3] [1U] [i_0]))), ((+(arr_44 [i_1] [i_13] [i_9 + 3] [i_1 - 1] [i_1] [i_1])))));
                        arr_56 [i_0] [i_1] [2] [i_13 + 1] [i_9 + 2] = arr_12 [i_0] [i_0] [i_1] [i_9 + 3] [i_1] [i_1];
                    }
                    var_33 = ((/* implicit */unsigned long long int) ((var_18) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (-1717315477) : (((/* implicit */int) (short)13784)))))));
                }
                for (int i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) max((max((min((32704U), (((/* implicit */unsigned int) (signed char)-108)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))))), (var_18))))));
                    var_35 = ((/* implicit */unsigned long long int) 67092480U);
                }
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_24 [i_0] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1 - 2])) ? (arr_24 [i_1] [i_1] [i_1 - 3] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1]) : (arr_24 [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_1 - 1]))), (max((arr_24 [i_0] [i_0] [i_0] [i_1 - 3] [i_1 - 3] [i_1] [i_1 + 2]), (arr_24 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 3]))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((int) var_17))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_12)) : (var_13)))))));
    /* LoopNest 3 */
    for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
    {
        for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                {
                    arr_68 [i_16] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 3160147158U))))), ((+(((((/* implicit */_Bool) (short)13794)) ? (arr_66 [2ULL] [i_16] [i_16]) : (var_12)))))));
                    arr_69 [i_16] [i_16] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_65 [i_16 + 1] [5] [8] [i_16])) ? (((/* implicit */long long int) arr_62 [i_16] [i_16])) : (arr_65 [i_16 + 1] [i_16] [(signed char)3] [i_16]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
                    var_38 = ((/* implicit */short) min((((/* implicit */long long int) -1)), (717049989543362514LL)));
                }
            } 
        } 
    } 
}
