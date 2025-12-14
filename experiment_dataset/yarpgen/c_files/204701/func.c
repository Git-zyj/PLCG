/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204701
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_17))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) != (((arr_0 [(_Bool)1] [i_0]) & (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((arr_0 [i_0] [i_0]) > (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30793))) : (arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) (-(arr_0 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_3 [i_1])))));
        var_23 = ((/* implicit */signed char) var_8);
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_4 [i_1]))));
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_25 = 18446744073709551615ULL;
                            arr_13 [i_5] [i_2] [i_4] [i_3] [i_3] [i_2] [i_1] = arr_9 [i_1] [i_2] [i_3] [i_4];
                        }
                    } 
                } 
            } 
            arr_14 [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 1] [i_2 + 2]))) * (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2] [i_2 + 1]))));
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_17 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_10 [i_1] [i_1] [(short)18] [i_1])), (max((((/* implicit */unsigned short) arr_5 [i_1] [i_6])), (arr_3 [i_1])))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        {
                            arr_25 [i_1] [i_6] [i_6] [i_8] [i_8] [i_1] [i_9] = ((/* implicit */int) ((((/* implicit */int) ((0ULL) < (18446744073709551615ULL)))) > (((/* implicit */int) arr_10 [18U] [18U] [i_7] [i_8]))));
                            var_26 -= ((/* implicit */long long int) arr_23 [i_1] [i_6] [i_6] [i_6] [i_9]);
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 1873334896U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1] [8LL] [i_6] [i_7])), (arr_7 [4LL] [i_6] [4LL])))) ? (195246004U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)39)))))))));
            }
            arr_26 [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(_Bool)1] [i_1]))) : (0U)))))))) > (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)40441)), (3580703794U))))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 21; i_10 += 2) 
            {
                for (short i_11 = 2; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_28 -= ((/* implicit */signed char) min((((/* implicit */int) max((arr_7 [i_11 - 2] [(_Bool)1] [i_10 - 1]), (((/* implicit */unsigned short) arr_24 [i_11 - 2] [(unsigned short)16] [i_10] [i_10 + 3] [i_10 + 2] [(unsigned short)16] [i_10]))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_7 [i_11 - 2] [i_11 - 2] [i_10 + 2]))))));
                        var_29 = arr_30 [i_1] [i_6] [13U] [i_6];
                        var_30 += ((/* implicit */long long int) (((~(((/* implicit */int) arr_19 [i_10 + 1])))) & (((((/* implicit */_Bool) arr_19 [i_10 + 2])) ? (((/* implicit */int) arr_19 [i_10 + 2])) : (((/* implicit */int) arr_19 [i_10 - 1]))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_31 -= ((/* implicit */unsigned int) arr_10 [i_10 + 2] [i_10] [i_10 + 2] [i_11 + 1]);
                            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (arr_22 [i_1] [i_1] [i_6] [i_6]) : (arr_34 [i_6] [i_12] [i_10] [i_10] [i_10 - 1])));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_10] [i_10 + 2] [i_11 + 2] [i_10])) ? (((/* implicit */int) (signed char)39)) : ((+(((/* implicit */int) (unsigned short)65520))))));
                        }
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_34 -= ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)107)), (var_13)));
                            var_35 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) arr_9 [i_1] [i_10 + 1] [i_10 - 1] [i_11 - 2])))));
                            var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((var_4), (((/* implicit */unsigned int) arr_4 [i_13]))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_36 [i_10] [i_10 - 1] [i_10 + 3] [i_10 + 1] [(short)14])) - (((/* implicit */int) var_1)))) & (((/* implicit */int) max(((signed char)99), ((signed char)-116))))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-108)), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_13]))) : (max((arr_22 [i_10] [i_1] [i_10] [i_1]), (((/* implicit */long long int) 4294967295U))))))));
                        }
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_40 [i_1] [i_6] [(short)13] [i_6] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_10] [i_11] [i_14])) ? (((/* implicit */int) arr_15 [i_1] [(signed char)17])) : (-1)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_22 [i_6] [i_6] [i_11] [16U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                            arr_41 [i_1] [i_1] [i_6] [i_6] [i_11] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10 + 2] [i_10 + 1] [i_10 - 1] [i_10 + 3] [i_6]))) - (((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))))));
                            var_37 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                            arr_42 [i_1] [i_6] [i_10] [i_1] [i_11] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) 2923023759U)) < (-5785675773158728324LL))))));
                        }
                        for (unsigned short i_15 = 4; i_15 < 22; i_15 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) 4294967295U);
                            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            var_40 -= ((/* implicit */unsigned short) arr_43 [i_1] [i_6] [i_1] [i_11] [i_15]);
                        }
                    }
                } 
            } 
            var_41 = ((/* implicit */short) ((var_8) >> ((((~(((/* implicit */int) (signed char)-77)))) - (61)))));
        }
        for (long long int i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            arr_48 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_37 [i_1] [i_1] [i_1] [(unsigned short)20] [i_16] [i_16] [i_16]), (((/* implicit */unsigned short) min((var_1), (((/* implicit */short) (signed char)92))))))))) ^ (min(((+(1090715534753792ULL))), (((/* implicit */unsigned long long int) arr_43 [i_1] [i_1] [i_1] [i_16] [i_16]))))));
            arr_49 [i_1] [i_1] = ((/* implicit */unsigned int) (+(min((min((442206472), (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) arr_28 [i_16]))))));
        }
    }
}
