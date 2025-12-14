/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195399
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_1] [i_2] [4LL] = ((/* implicit */unsigned int) ((((-1103218147436721483LL) + (9223372036854775807LL))) >> (((arr_10 [i_0] [i_0] [i_0]) - (969474515U)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_14 [i_1] [19LL] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_6)))) && (((((/* implicit */unsigned long long int) 3436689372U)) >= (10593408366123376498ULL)))));
                            arr_15 [i_0] [17ULL] [5LL] [i_3] [i_4] [i_4] = ((/* implicit */long long int) 3436689372U);
                            var_18 = ((long long int) (-(13976581353264469293ULL)));
                            var_19 = ((/* implicit */unsigned long long int) (-((+(3436689372U)))));
                        }
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7853335707586175117ULL)) ? (((/* implicit */unsigned long long int) 858277924U)) : (7853335707586175117ULL)));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_5 [i_0] [11LL] [11U])) : (0LL)))) ? (arr_8 [i_0] [i_1] [i_2] [i_5]) : (var_15)));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_21 = ((((var_8) & (5466116777857673086LL))) << ((((((-(arr_22 [17U] [i_7] [i_7] [i_7] [i_7]))) + (4272784542828424335LL))) - (5LL))));
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [1U] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) : (11509987726105772004ULL))) : (((/* implicit */unsigned long long int) (+(arr_22 [i_0] [i_1] [i_2] [8ULL] [i_1]))))));
                            var_23 ^= (+(arr_9 [i_0] [i_1] [i_2] [i_0] [i_7] [i_6]));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 7853335707586175120ULL)))) < (((2078994307469513847LL) >> (((14299072856699416762ULL) - (14299072856699416717ULL)))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_6] = ((arr_4 [i_0] [i_0] [i_0]) | (((long long int) var_17)));
                            var_25 -= (+(arr_10 [i_0] [i_6] [i_8]));
                            var_26 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)117)) << (((517617041U) - (517617021U)))))) | (0U)));
                        }
                        for (unsigned char i_9 = 3; i_9 < 18; i_9 += 1) 
                        {
                            var_27 *= ((/* implicit */unsigned int) arr_21 [i_9 - 3] [i_9 + 1] [i_9 + 1]);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (-(((unsigned long long int) arr_2 [i_1] [i_2] [i_6])))))));
                            arr_29 [11U] [i_1] [(unsigned char)17] [i_6] [i_9] [i_9 - 1] [11U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6431606514189948411LL)) ? (arr_21 [12ULL] [i_9] [i_9]) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */long long int) (-(2084730823U)))) : (var_2)));
                            arr_30 [i_9 + 1] [i_6] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) 14558811260443138973ULL);
                        }
                        arr_31 [19U] = ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_6])) ? (arr_19 [i_0] [(unsigned char)17] [i_2] [i_6]) : (arr_19 [i_0] [i_1] [i_2] [i_6]));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) max((var_29), (3436689369U)));
                                arr_37 [i_2] [i_2] = ((long long int) arr_8 [i_0] [i_1] [i_2] [i_11 - 1]);
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_11 - 1] [i_10] [(unsigned char)0] [i_1] [i_1] [2U] [i_0])) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [16LL])) ? (arr_13 [i_0]) : (var_14))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) : (arr_3 [i_11] [i_11 + 1] [i_11 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_0] = ((/* implicit */unsigned long long int) (((+(var_9))) >> (((((((/* implicit */_Bool) 3436689374U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (2084730823U))) - (21U)))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 2; i_14 < 19; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            {
                                arr_49 [i_14] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */signed char) (-(arr_47 [i_15] [i_14] [i_13] [i_0])));
                                var_31 = ((/* implicit */signed char) 3887932813266412663ULL);
                            }
                        } 
                    } 
                    arr_50 [13LL] [i_13] [i_13] = ((/* implicit */long long int) arr_40 [i_0] [i_12]);
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_56 [5LL] [i_13] = ((/* implicit */signed char) (+((-(1040004398U)))));
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0LL)))))));
                            }
                        } 
                    } 
                    arr_57 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_0 [i_12]);
                    var_33 = ((/* implicit */signed char) ((unsigned int) 10932294U));
                }
            } 
        } 
    }
    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
    {
        arr_60 [i_18] [1U] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)84)) >> (((arr_22 [17U] [i_18] [i_18] [(signed char)17] [i_18]) - (4272784542828424294LL)))));
        arr_61 [i_18] |= 1826580962U;
    }
    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned long long int) 4294967267U);
        arr_66 [i_19] = ((unsigned char) max(((+(arr_3 [i_19] [i_19] [i_19]))), (min((-2965639771749229804LL), (((/* implicit */long long int) arr_8 [16LL] [13U] [i_19] [i_19]))))));
    }
    var_35 = ((/* implicit */unsigned int) var_9);
    var_36 = ((/* implicit */unsigned int) 268435455ULL);
}
