/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35316
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (signed char)-101)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))))))), (min((((/* implicit */long long int) var_3)), (max((1116892707587883008LL), (var_0)))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_8 [9LL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
        var_13 = (!(((/* implicit */_Bool) 18446744073709551615ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_14 *= ((/* implicit */unsigned long long int) (+((-(var_2)))));
                        arr_20 [i_1] [i_2] [12ULL] [6LL] [i_2] = ((/* implicit */_Bool) ((unsigned int) var_1));
                        arr_21 [7ULL] [i_2] [3ULL] [i_2] [1ULL] = ((/* implicit */long long int) ((unsigned long long int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                    }
                } 
            } 
            var_15 += ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
        }
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_30 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((18446744073709551592ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        var_16 |= ((/* implicit */unsigned int) ((short) var_9));
                        var_17 = ((((/* implicit */_Bool) var_4)) ? (18446744073709551608ULL) : (3460415860593463684ULL));
                        var_18 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (126100789566373888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_6) : ((-9223372036854775807LL - 1LL))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned long long int) (~(var_2)))))));
                            var_21 &= ((((/* implicit */unsigned long long int) var_9)) & (var_5));
                            var_22 ^= ((/* implicit */long long int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            arr_38 [8U] [1] [17] [i_9] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
                        }
                        arr_39 [10LL] [15ULL] = ((/* implicit */unsigned long long int) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (8390090295424693490ULL)))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1116892707587883040LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 4; i_11 < 23; i_11 += 3) 
                        {
                            arr_43 [i_5] [i_6] [20LL] [i_9] [20LL] [20LL] = ((/* implicit */short) ((8586366381904060542LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))));
                            var_24 &= ((/* implicit */long long int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))));
                        }
                        var_25 -= ((/* implicit */unsigned long long int) ((10026108296222703122ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    }
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        arr_46 [i_5] [18U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (var_1)));
                        arr_47 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    }
                    for (unsigned long long int i_13 = 3; i_13 < 23; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            arr_52 [i_14] [i_14] [i_13] [14U] [i_13] [i_5] [i_5] = (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */unsigned long long int) var_6)) : (136339441844224ULL));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (126100789566373888ULL))))));
                            var_27 = ((/* implicit */unsigned long long int) ((var_7) % ((-9223372036854775807LL - 1LL))));
                        }
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            var_28 = ((unsigned long long int) var_9);
                            arr_55 [i_13] [i_13] = ((/* implicit */long long int) (((((_Bool)1) ? (18446744073709551615ULL) : (var_8))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18320643284143177731ULL)) && (((/* implicit */_Bool) var_6))))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((var_10) / (((/* implicit */unsigned long long int) var_6))))));
                        }
                        arr_56 [i_5] [i_5] [12LL] [(short)6] [i_5] [i_13] = ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (var_12) : (var_8));
                    }
                    var_30 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8190LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 4; i_16 < 23; i_16 += 4) 
                    {
                        arr_60 [7] [7] [17U] [i_16 + 1] = 18446744073709551591ULL;
                        var_31 = ((/* implicit */long long int) ((((17141019616022811398ULL) % (((/* implicit */unsigned long long int) 8586366381904060525LL)))) | (((/* implicit */unsigned long long int) 1116892707587883008LL))));
                        arr_61 [13U] [12ULL] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_2)))) / (var_8)));
                        var_32 = ((/* implicit */_Bool) (-(var_5)));
                        arr_62 [(signed char)3] [i_6] [i_7] [(short)23] [(short)23] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
    }
    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
    var_35 = min((((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) (signed char)21)), (65011712ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 504403158265495552ULL)))))))), (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) % (18446744073709551593ULL))));
}
