/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229610
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_0 [(short)12]) : (((/* implicit */unsigned long long int) ((int) 9223372036854775807LL)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((unsigned long long int) arr_0 [16U]))));
            var_17 -= ((/* implicit */unsigned long long int) (unsigned char)226);
            arr_5 [17U] = ((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0]);
            var_18 = var_6;
            var_19 = ((signed char) (~((~((-9223372036854775807LL - 1LL))))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_8 [i_0] = arr_0 [i_0];
            arr_9 [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_0] [i_2] [i_2])) + (arr_3 [i_2])))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)63)))))))), (arr_3 [i_0])));
        }
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_12 [12] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_11 [i_0] [i_0] [i_3]))), (max((9223372036854775807LL), (((/* implicit */long long int) var_7))))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))));
            var_20 = ((/* implicit */unsigned char) 9223372036854775807LL);
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_21 += ((/* implicit */short) var_3);
            var_22 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(9223372036854775807LL))))))), (((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) >= (3472728051855516470ULL)))) : (((/* implicit */int) arr_14 [i_4] [i_0] [i_0]))))));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_18 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_0]), (arr_14 [i_5] [i_5] [i_5]))))) : (max((((/* implicit */unsigned int) arr_4 [i_0] [i_5] [i_0])), (arr_1 [i_0]))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1365774894)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_0]))) : (669553112U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0]))))) : ((-(((/* implicit */int) var_4)))))))));
            var_23 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-14))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), ((~(arr_0 [i_6])))));
            arr_21 [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
        }
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            arr_24 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3472728051855516485ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_7])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (arr_19 [i_0] [i_0]) : (arr_19 [i_0] [i_7])))));
            arr_25 [i_0] [(signed char)21] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 1828366156362872818ULL))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 33292288)) <= (3297855885077074213ULL)))) : (((/* implicit */int) min((var_3), ((signed char)-28))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3472728051855516470ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (0ULL)))) && (((/* implicit */_Bool) (~(-161725354)))))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [17LL])))));
            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_7] [i_0])), (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])), (18446744073709551600ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_19 [i_0] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [16] [16] [i_0])))))) ? (max((18446744073709551615ULL), (18446744073709551610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))));
            arr_27 [i_0] [10ULL] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) var_7)) ? (arr_11 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0]))))), ((~(arr_19 [i_7] [i_0]))))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_17 [i_0])), (arr_22 [i_0]))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            var_25 = (~(((/* implicit */int) var_10)));
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))));
            var_26 = ((/* implicit */unsigned char) (~(arr_23 [i_0])));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        arr_34 [i_9] [i_9] = (+(((((/* implicit */_Bool) arr_33 [i_9])) ? (arr_11 [i_9] [16U] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))));
        var_27 = ((/* implicit */int) (+(arr_1 [i_9])));
    }
    for (int i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_10]))))) ? (((/* implicit */unsigned long long int) min((2147483645), (((/* implicit */int) (unsigned char)180))))) : ((((!(((/* implicit */_Bool) arr_15 [i_10])))) ? (((((/* implicit */_Bool) arr_30 [i_10])) ? (arr_23 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_10] [(unsigned char)6] [i_10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            arr_40 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_3 [i_10]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-75)))))) << (((max((((/* implicit */long long int) (signed char)-1)), (arr_3 [i_10]))) - (3739298874681782736LL)))));
            arr_41 [i_10] [i_11] = ((/* implicit */signed char) max((min((((long long int) var_0)), (((/* implicit */long long int) (unsigned char)16)))), (((/* implicit */long long int) arr_4 [i_10] [i_10] [i_10]))));
        }
        var_29 = ((/* implicit */signed char) ((unsigned char) min((arr_16 [i_10] [(signed char)13] [i_10]), (((/* implicit */unsigned char) (_Bool)1)))));
    }
    var_30 = ((/* implicit */short) 11612547930110879826ULL);
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            {
                                arr_55 [i_12] [(unsigned char)4] [i_14] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_16])) ? (((long long int) arr_47 [(unsigned char)4])) : (((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_12])), (arr_7 [i_12] [i_13] [i_15]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))), (arr_15 [i_12])))) : (((unsigned long long int) ((unsigned int) (short)-13661)))));
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)29)) ? (((((/* implicit */_Bool) ((arr_42 [i_12]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_16])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (max((((/* implicit */unsigned long long int) arr_10 [i_16])), (arr_23 [i_12]))))) : ((((-(0ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12]))))))))));
                                var_32 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) 3037368166U))) / ((-(((/* implicit */int) ((_Bool) (unsigned char)56)))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_12] [i_12] [19LL] [i_13] [i_14])) ? ((-(arr_7 [i_12] [i_12] [i_12]))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_45 [i_14] [i_13] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) : (255ULL)))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_15)))) / (((/* implicit */int) ((255ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) ? (max((((/* implicit */int) min((((/* implicit */short) (signed char)10)), ((short)32767)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (2147483647))))) : (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (short)-31958)) : (((/* implicit */int) (signed char)0))))));
}
