/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48710
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_13 [i_0] [4U] [i_2] [i_2]))));
                                var_17 = min(((~(((/* implicit */int) (unsigned short)34408)))), (((/* implicit */int) var_0)));
                                arr_15 [i_0 - 1] [i_0 - 1] [i_3] [i_0] [i_0 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) ((var_4) || (((/* implicit */_Bool) var_5))))), (var_14))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [(signed char)8] = ((/* implicit */signed char) arr_3 [i_2]);
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_0 [3U]))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((short) var_4)))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))) || ((!(var_1)))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) var_12);
                            arr_29 [12U] [i_6] [i_6] [i_7] [10ULL] [i_8] [i_6] &= ((/* implicit */unsigned long long int) var_13);
                            arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_5] [i_5])) + (((/* implicit */int) var_10))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_17 [3] [i_6])) : (var_5))) : (((/* implicit */unsigned long long int) arr_18 [i_7 - 1]))));
                            arr_31 [i_6] &= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_27 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) var_13)));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((((/* implicit */int) var_7)) >> (((8214035186414971660ULL) - (8214035186414971642ULL))))) : (641077376)));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((signed char) (+(var_8))));
        }
        arr_32 [i_5] = 4292870144U;
        var_24 = ((/* implicit */signed char) var_2);
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                {
                    arr_39 [i_5] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_35 [i_5]) : (((((/* implicit */_Bool) (+(arr_24 [0U] [i_5])))) ? ((+(3416908339U))) : (min((var_8), (var_11)))))));
                    var_25 = ((/* implicit */unsigned long long int) 1928843383U);
                    arr_40 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(_Bool)1]))) + (max((((/* implicit */unsigned long long int) min((1928843403U), (((/* implicit */unsigned int) 446386104))))), (min((((/* implicit */unsigned long long int) var_11)), (10232708887294579955ULL)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */int) (+(((((((/* implicit */int) (signed char)12)) != (((/* implicit */int) (unsigned short)62838)))) ? (arr_42 [i_5] [i_10] [i_5] [i_11] [i_12] [i_11]) : (((var_9) % (((/* implicit */unsigned long long int) var_6))))))));
                        /* LoopSeq 3 */
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            var_27 *= ((/* implicit */_Bool) arr_33 [i_5]);
                            var_28 = ((/* implicit */unsigned char) min((((((/* implicit */int) (signed char)127)) + (-641077377))), (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (signed char)74)))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (var_0)));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_43 [i_12] [(signed char)14] [i_11] [i_11] [i_14]))));
                        }
                        for (int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((815993493U) != (((/* implicit */unsigned int) 641077376)))))));
                            arr_52 [i_5] [i_5] [i_5] [i_5] [17ULL] = ((/* implicit */unsigned long long int) max((arr_20 [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_15])) || (((/* implicit */_Bool) arr_18 [i_5])))))));
                            var_32 = ((/* implicit */long long int) arr_50 [i_5] [(short)3] [9] [9] [i_5] [i_12] [i_15]);
                            var_33 ^= ((/* implicit */signed char) ((unsigned int) (~(var_8))));
                        }
                        arr_53 [i_5] [i_10] [i_11] [i_5] = ((/* implicit */long long int) max(((~(6587917929693311464ULL))), (((/* implicit */unsigned long long int) 4294967285U))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (((~((+(arr_33 [i_5]))))) != (((((/* implicit */_Bool) arr_27 [i_5] [7U])) ? (arr_46 [i_10] [i_11]) : (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    }
}
