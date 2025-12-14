/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241602
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
    var_18 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [(unsigned char)5] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) var_10);
                        arr_11 [i_0] [i_2] [(short)4] [i_2] [i_3] = ((/* implicit */short) var_1);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~((~(((/* implicit */int) var_13)))))))));
                        var_21 += ((/* implicit */unsigned int) (-((+(((((/* implicit */int) var_13)) * (((/* implicit */int) var_9))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) var_10)))))) > (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-31852)) && (((/* implicit */_Bool) (signed char)-111)))) || (((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_7))))));
                            arr_18 [i_2] [i_1] [i_1] [i_1] = (-(((((/* implicit */int) var_10)) - (((/* implicit */int) var_8)))));
                            arr_19 [i_0] [i_1] [i_2] [7] = ((/* implicit */unsigned int) var_13);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) > ((+(((/* implicit */int) var_8))))));
                        }
                    }
                    for (unsigned int i_6 = 4; i_6 < 12; i_6 += 3) 
                    {
                        arr_22 [4ULL] [i_1] [i_2] [i_2] = ((/* implicit */short) min((((((/* implicit */int) var_6)) + (((/* implicit */int) var_2)))), (((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 4; i_7 < 11; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)102)))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_1))))))))));
                            var_24 = ((/* implicit */_Bool) min((((((/* implicit */int) var_2)) << (((((/* implicit */int) var_2)) - (7109))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (signed char)126)))))));
                            arr_26 [i_0] [i_1] [i_2] [(short)5] [i_7 + 1] = (+((((~(((/* implicit */int) var_0)))) | (((/* implicit */int) var_3)))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            arr_30 [i_2] [i_2] [2ULL] [i_6 - 1] [(unsigned char)6] = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned short)38923), (((/* implicit */unsigned short) (short)-31834)))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_1)))))))));
                            arr_31 [i_0] [i_1] [i_2] [i_6] [i_2] = ((min((var_4), (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_17)))))));
                            arr_32 [i_6] [i_6] [i_6] [i_6 - 2] [i_6] [i_1] [i_6] &= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)117))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 312950756)) && (((/* implicit */_Bool) 0))));
                            arr_38 [i_0] [i_2] [i_1] [i_9] [i_10] = var_0;
                            arr_39 [i_0] [i_1] [i_2] [i_2] [i_10] [(signed char)0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_14)));
                            arr_40 [i_2] [i_1] [i_2] [i_2] [i_9] [i_10] [10LL] = ((/* implicit */short) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_15))));
                        }
                        arr_41 [5] [5] [1ULL] [i_9] [i_2] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_14)));
                    }
                    arr_42 [i_2] [i_2] [i_2] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */int) var_13)) ^ ((~(((/* implicit */int) var_17))))));
                }
                /* vectorizable */
                for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 4; i_12 < 11; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_13 = 2; i_13 < 9; i_13 += 4) 
                        {
                            arr_51 [i_0] [i_1] [i_11 - 1] [i_12] [i_13 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_7))));
                            arr_52 [i_0] [i_12] [i_11] [i_12] [i_13] [i_13] = ((/* implicit */signed char) var_1);
                            var_27 = ((/* implicit */unsigned long long int) var_2);
                            var_28 ^= ((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                        }
                        arr_53 [i_12] [i_12 - 2] = ((/* implicit */unsigned char) (-(var_5)));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 2; i_14 < 12; i_14 += 3) 
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_12] [7] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)26334))));
                            arr_58 [i_12] [i_12] = ((/* implicit */unsigned short) (-(-1074636054)));
                        }
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_61 [(signed char)8] [i_0] [i_0] [i_0] = (-(var_4));
                        var_29 = ((/* implicit */long long int) var_14);
                        arr_62 [8] [i_1] [i_11] [2U] = ((/* implicit */int) var_13);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
                        {
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_17] = ((/* implicit */signed char) var_5);
                            arr_69 [0U] [0U] [i_11] [i_16] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) var_9);
                            var_30 *= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                            arr_70 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) var_14);
                        }
                        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) /* same iter space */
                        {
                            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_17))));
                            arr_73 [i_18] [i_16] [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                            var_32 = ((/* implicit */unsigned char) var_0);
                        }
                        arr_74 [i_0] [6ULL] [i_11] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (var_17)));
                        var_33 = ((/* implicit */unsigned char) var_11);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_19 = 3; i_19 < 12; i_19 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_14))));
                            arr_78 [i_0] [i_19] [i_11 - 1] [i_19] [i_11 - 1] [i_16] [i_19] = ((/* implicit */long long int) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_35 += ((/* implicit */unsigned int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        }
                        for (unsigned int i_20 = 3; i_20 < 9; i_20 += 1) /* same iter space */
                        {
                            arr_83 [i_11 - 1] [i_1] [i_11] [(signed char)12] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                            arr_84 [i_0] [i_1] [i_11] [i_16] [i_1] [i_16] = ((/* implicit */long long int) var_12);
                            arr_85 [i_0] [i_20] [i_11] [i_16] [i_20] [i_20 + 3] [i_16] = ((/* implicit */signed char) var_2);
                        }
                        for (unsigned int i_21 = 3; i_21 < 9; i_21 += 1) /* same iter space */
                        {
                            arr_88 [i_16] [i_21] [i_0] = ((/* implicit */unsigned int) var_8);
                            var_36 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                        }
                    }
                    arr_89 [10LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_17))));
                }
                var_37 |= ((/* implicit */short) (+((+(((/* implicit */int) var_0))))));
                arr_90 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)19)), ((unsigned short)26613)));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned short) (~(16449134847795726463ULL)));
    var_39 |= (+(((/* implicit */int) var_12)));
}
