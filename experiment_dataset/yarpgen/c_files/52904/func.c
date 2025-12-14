/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52904
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 &= ((/* implicit */int) ((0LL) * (((0LL) - (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (short)32767);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                var_17 = (-(((/* implicit */int) arr_10 [(_Bool)1])));
                arr_12 [i_1] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(signed char)8]))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_17 [(signed char)12] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [15]))) - (-1993553368401449228LL))))));
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1]))));
                }
                var_18 = ((/* implicit */short) (~(9223372036854775807LL)));
            }
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-32767))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 262143))));
                var_21 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
            }
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_22 *= ((/* implicit */_Bool) ((5931830965445523372LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6])))));
            arr_26 [i_6] [10] = ((/* implicit */short) (~(-1993553368401449223LL)));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
            {
                var_23 *= ((/* implicit */int) (((~(((/* implicit */int) arr_24 [10LL])))) == (((/* implicit */int) arr_23 [i_7]))));
                var_24 = ((/* implicit */signed char) 2111797810U);
            }
            for (short i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
            {
                var_25 *= ((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_1]);
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_14 [i_1] [i_1] [i_7] [3]))));
            }
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 16; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            arr_44 [i_1] [i_7] [i_10] [i_11] [i_7] = ((/* implicit */signed char) (unsigned char)200);
                            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) (+(2147483647)));
            }
            /* LoopNest 3 */
            for (unsigned short i_13 = 3; i_13 < 17; i_13 += 1) 
            {
                for (signed char i_14 = 2; i_14 < 15; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) -1719206995);
                            arr_53 [i_1] [i_1] [i_1] [i_13] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            } 
            var_30 -= ((/* implicit */short) 1719206999);
        }
        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) arr_6 [i_16]);
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_52 [i_16] [(signed char)14] [i_1] [i_1] [(signed char)14] [i_1]))));
        }
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((arr_36 [i_1] [i_1]) << (((((/* implicit */int) (short)-24481)) + (24532))))))));
        arr_56 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3984091842734956055ULL))));
    }
    var_34 = ((/* implicit */unsigned char) 0LL);
}
