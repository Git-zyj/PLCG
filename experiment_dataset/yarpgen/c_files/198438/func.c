/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198438
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            var_14 = ((/* implicit */long long int) 3066825164U);
            var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-103)) || (((/* implicit */_Bool) var_13)))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_1 + 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) && (var_9))))) : (1228142151U)));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_15 [4] [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [(unsigned char)6] = ((/* implicit */int) ((((/* implicit */int) (signed char)118)) > (((/* implicit */int) arr_1 [i_1 - 1] [i_4 - 1]))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (signed char)103))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */short) (signed char)107);
                var_17 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
            }
            for (signed char i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                arr_20 [i_0] [i_0] = ((/* implicit */long long int) (signed char)114);
                var_18 = ((/* implicit */short) (-(((unsigned int) var_10))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 4; i_6 < 23; i_6 += 2) 
                {
                    arr_25 [i_0] [i_1 - 1] [i_5] [i_5] = ((/* implicit */long long int) (((((~(((/* implicit */int) (unsigned char)35)))) + (2147483647))) >> ((((+(((/* implicit */int) (unsigned char)166)))) - (141)))));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 1; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (var_13)));
                        arr_30 [i_0] [(signed char)20] [i_0] [(signed char)5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_6] [i_1 + 2] [i_5] [i_6] [i_7] [i_7 + 1]))))) && (((/* implicit */_Bool) var_1))));
                    }
                    for (long long int i_8 = 1; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        arr_33 [i_0] [9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_6 + 1])) && (((/* implicit */_Bool) arr_19 [i_0] [i_6 + 2]))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_8] [i_5] [i_6] [i_8] [i_6 + 1] [i_5])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_28 [10U] [i_1 + 2] [(signed char)10] [i_1 + 2] [i_0] [i_6 - 4] [6LL]))));
                        var_21 = ((/* implicit */unsigned int) var_11);
                        var_22 = ((/* implicit */signed char) var_8);
                        arr_34 [i_0] [i_6] [i_6 - 1] [i_6 + 1] [i_0] = ((/* implicit */long long int) 3066825177U);
                    }
                    for (long long int i_9 = 1; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) var_1);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-3352622422660501322LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-111)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (1523469726121579814ULL)));
                        arr_39 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_5 - 1])) <= (((/* implicit */int) var_2))));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) -3234160803076004845LL))));
                    }
                    var_26 = ((/* implicit */signed char) ((arr_13 [i_0] [i_5 + 1] [i_6 - 1] [i_1 + 1]) ? (((/* implicit */unsigned int) var_11)) : (2727312605U)));
                }
                for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2727312600U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_7)))))) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-3352622422660501322LL)))));
                    var_28 = ((((/* implicit */int) arr_35 [i_0] [i_5 - 2] [i_1 - 1] [i_1] [i_0])) <= (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)69))))));
                }
            }
            var_29 = ((/* implicit */signed char) ((((-146629975) & (var_11))) != (((/* implicit */int) arr_26 [i_0] [12U]))));
        }
        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_30 *= ((/* implicit */signed char) (~(26U)));
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 24; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) == (831408031U)));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-29740)) ? (arr_36 [i_0] [i_12] [24LL] [i_13] [i_0] [(signed char)24]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_12 - 2] [i_12 - 2])) && (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_33 = ((/* implicit */short) ((arr_54 [i_0] [i_14] [i_14]) ? (((/* implicit */long long int) min((3040827590U), (((/* implicit */unsigned int) var_4))))) : (((((/* implicit */long long int) arr_38 [(short)20] [(_Bool)1])) / (arr_24 [i_0] [i_0] [i_14] [i_14] [i_14])))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14U)) ? (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) && (((/* implicit */_Bool) ((var_3) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) + (222146168554576623LL))))))));
            var_35 = ((/* implicit */signed char) (short)-30590);
        }
    }
    var_36 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 1) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            {
                var_37 = ((/* implicit */_Bool) max((var_8), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-29525)) / (((/* implicit */int) (signed char)-116))))))))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 2; i_17 < 18; i_17 += 4) 
                {
                    for (short i_18 = 2; i_18 < 18; i_18 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_17] [i_18 + 1] [i_17 + 1])) && (((/* implicit */_Bool) (unsigned char)51)))))) : (min((((/* implicit */long long int) var_8)), (var_5))))))));
                            var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-105)), (146629975)));
                            arr_64 [15] [i_16] [i_17] [i_18 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
