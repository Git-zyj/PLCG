/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191649
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2 + 3] = ((long long int) (~((~(var_10)))));
                    var_13 ^= min((arr_1 [i_1]), ((+(arr_2 [i_0] [i_1] [4LL]))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1] [i_3] = -5159837642911825696LL;
                            arr_16 [i_1] [i_1] [i_2 - 3] [i_3] [i_4] [i_4] = min((-2776553565331945709LL), (((long long int) 9223372036854775789LL)));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((9223372036854775780LL) ^ (4318005195070377924LL))))));
                            var_14 = ((/* implicit */long long int) ((((((arr_10 [i_3] [i_2] [i_0]) + (9223372036854775807LL))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775793LL))) + (30LL))))) < (-9223372036854775788LL)));
                            var_15 = ((((/* implicit */_Bool) var_7)) ? (var_0) : (var_8));
                        }
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), ((-(9223372036854775792LL)))));
                            var_17 &= (-((-(-5312347122528361959LL))));
                            arr_22 [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((((((arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1]) + (9223372036854775807LL))) >> (((-4318005195070377939LL) + (4318005195070377988LL))))) < (min((1LL), (var_10)))));
                        }
                        for (long long int i_7 = 4; i_7 < 15; i_7 += 3) 
                        {
                            var_18 = -9223372036854775792LL;
                            var_19 -= (((-(arr_18 [i_7 - 3] [i_7 - 3] [i_7 - 4] [i_7] [i_7]))) / ((~(-9223372036854775796LL))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_20 = (-9223372036854775807LL - 1LL);
                            var_21 = min(((~(min((arr_4 [i_0] [i_0] [i_0]), (6450858374935926655LL))))), (arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_8]));
                            var_22 = (-(min((2727673620573729663LL), (8LL))));
                        }
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] [i_9] = ((((((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (arr_21 [i_9] [i_1] [i_2] [i_3] [i_9] [i_3]) : (var_12))) + (9223372036854775807LL))) >> (min((((long long int) arr_14 [i_1])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] [i_2 - 3])) || (((/* implicit */_Bool) 9223372036854775807LL))))))));
                            arr_30 [i_0] [i_1] [i_2 - 2] [i_1] [i_9] [i_3] [i_1] = ((/* implicit */long long int) ((((long long int) (-(-1LL)))) > ((-(((arr_2 [i_0] [i_0] [i_1]) / (arr_5 [i_0 - 1] [i_1] [i_3] [i_9])))))));
                            var_23 = ((/* implicit */long long int) max(((((+(arr_0 [i_0]))) > ((-9223372036854775807LL - 1LL)))), (((((long long int) var_4)) != (3LL)))));
                            arr_31 [i_9] [i_1] [i_1] [i_0 + 2] = ((long long int) -6LL);
                        }
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            var_24 = ((((/* implicit */_Bool) ((long long int) -1LL))) ? (70368744177663LL) : (min((arr_32 [i_3] [i_3]), (arr_32 [i_2 + 3] [i_0 - 1]))));
                            arr_35 [i_0] [i_1] [i_2] [i_1] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((1953649314390403253LL), (15LL)))) || (((/* implicit */_Bool) max((5772156247847893190LL), (arr_3 [i_1] [i_10])))))))));
                        }
                        var_25 = (-(-6860140433978762458LL));
                    }
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_1] [2LL] [i_2] [i_11] |= ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921367167893504LL)) ? (-15LL) : (-100664721430570735LL)))) ? (((((/* implicit */_Bool) -1LL)) ? (-5415230924466676687LL) : (9223372036854775793LL))) : (var_1)));
                        var_26 ^= arr_12 [4LL] [i_1] [i_2 - 3] [i_11 - 1];
                        arr_40 [i_0] [i_1] [i_2 - 3] [i_11 - 1] = 4446692952700520376LL;
                    }
                    for (long long int i_12 = 1; i_12 < 14; i_12 += 2) /* same iter space */
                    {
                        arr_43 [i_12] [i_1] [i_0] = ((long long int) (-(arr_37 [i_12] [i_0 + 1] [i_12 + 2] [i_2 - 1])));
                        arr_44 [i_0] [i_1] [i_2] [i_12 + 2] [i_1] = var_12;
                        /* LoopSeq 4 */
                        for (long long int i_13 = 3; i_13 < 12; i_13 += 1) 
                        {
                            var_27 = ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((15108320117967332LL) & (5312347122528361961LL))) : (9223372036854775792LL));
                            arr_49 [i_0] [4LL] [i_2 + 2] |= min((9223372036854775807LL), (arr_24 [i_0] [i_0] [10LL] [i_0] [i_0] [i_0] [i_0 + 1]));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            arr_53 [i_0 + 2] [i_1] [i_1] [i_2 + 3] [i_14] [i_2] = (((!(((/* implicit */_Bool) arr_23 [i_0 - 1] [i_1] [i_2] [i_12 + 1] [i_14])))) ? (arr_21 [i_0 + 2] [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 2]) : (arr_34 [i_0 + 1] [i_0 + 2] [i_1] [i_0] [i_2 + 2] [i_2 - 2] [i_2]));
                            arr_54 [i_14] [i_1] [i_1] [i_1] [i_14] [i_0 + 2] [i_12] = ((long long int) arr_34 [i_12 + 2] [i_12 + 1] [i_1] [i_12 + 2] [i_12] [i_12] [i_12 + 1]);
                            var_28 = (~(((((/* implicit */_Bool) arr_52 [i_14] [i_1])) ? (arr_48 [i_14] [i_12 + 2] [i_2 + 2] [i_0 - 1]) : (var_2))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((((((((/* implicit */_Bool) 7336517396060306245LL)) ? (-125642436329641705LL) : (4294959104LL))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 3425801653842822156LL)) ? (2419294722360847818LL) : (14LL))) - (2419294722360847818LL)))))));
                            arr_55 [i_14] [i_12 + 1] [i_1] [i_1] [i_0] = ((long long int) arr_28 [i_0 + 2] [i_0 - 1] [i_1] [i_0] [i_0] [i_2 + 2] [i_2]);
                        }
                        for (long long int i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                        {
                            var_30 = ((long long int) (-(max((4642805045119051792LL), (arr_3 [i_1] [i_1])))));
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0 - 1]) / (arr_0 [i_0 - 1]))))));
                            var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6754371670246298006LL)) ? (arr_57 [i_12 - 1] [i_12] [i_12]) : (2251799780130816LL)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_57 [i_0] [i_0 + 1] [i_0 - 1]))));
                            var_34 = ((long long int) arr_18 [i_0 - 1] [i_0 + 2] [i_2] [i_12 - 1] [i_16]);
                        }
                    }
                }
            } 
        } 
        arr_61 [i_0 - 1] = ((max((((((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0])) ? (-6177553710739012246LL) : (-1501431824695014737LL))), (((long long int) arr_25 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_50 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1]), (8811777163740143755LL)))))))));
    }
    var_35 = var_4;
    /* LoopNest 3 */
    for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
    {
        for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                {
                    arr_72 [i_17] [i_18] [i_19] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 9223372036854775807LL))))))));
                    var_36 = (-(arr_27 [i_17] [i_17] [i_17] [i_18] [i_18] [i_19] [i_19]));
                }
            } 
        } 
    } 
}
