/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191247
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
    /* vectorizable */
    for (int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) 7965559600413855710LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        var_17 = ((/* implicit */unsigned int) ((_Bool) 18285609872581578554ULL));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */long long int) (-(min((var_8), (((/* implicit */unsigned long long int) var_12))))));
        var_18 = ((/* implicit */unsigned long long int) ((unsigned int) min((var_1), (((/* implicit */unsigned char) var_14)))));
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_19 = (+(((/* implicit */int) (unsigned char)235)));
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_20 -= ((/* implicit */long long int) ((int) ((unsigned long long int) ((unsigned short) var_9))));
                arr_14 [i_1] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned short) (+((-(((var_8) << (((((/* implicit */int) arr_9 [i_3])) + (123)))))))));
                arr_15 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65513)) << (((((/* implicit */int) (signed char)94)) - (87)))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) (!((_Bool)1))))));
            }
            /* vectorizable */
            for (short i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) var_10));
                arr_19 [i_1 + 2] [1] [i_1] = ((/* implicit */signed char) (~(arr_3 [i_1 + 3])));
                arr_20 [i_1 + 3] [i_1 + 3] [i_1] [(unsigned short)9] |= ((/* implicit */int) ((signed char) 536870896));
            }
            for (short i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 3611266946U))));
                    var_23 = (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_10)))));
                }
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    var_24 -= ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */long long int) var_1)))) == (((((/* implicit */_Bool) (short)1939)) ? (((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */long long int) arr_26 [i_7] [i_7 + 2] [i_5 + 4] [15] [i_2] [i_1])) : (-6057579639121750953LL))) : (((/* implicit */long long int) (+(arr_24 [i_1] [(short)15] [i_5] [i_7]))))))));
                    arr_28 [i_1] [i_1] [i_2] [i_2] [(unsigned short)1] [i_7] = ((/* implicit */_Bool) min((((unsigned char) 5898188142591634638LL)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1])))))));
                }
                var_25 = ((unsigned int) (-(((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 - 1]))));
            }
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 22; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (max((((long long int) arr_32 [i_1 - 1] [i_1] [i_1 + 1] [i_9 - 2])), (((/* implicit */long long int) (~(arr_32 [i_1 + 2] [i_1] [i_1 + 1] [i_9 - 2]))))))));
                            var_27 -= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-63)), (arr_12 [i_1] [i_1] [i_10])))) << (((((((/* implicit */int) var_13)) + (40))) - (13))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_10)))) ^ (((/* implicit */int) min((arr_12 [i_1 + 3] [i_1 + 1] [i_1 + 3]), (arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))))));
                arr_36 [i_1] [i_2] [i_8] = ((/* implicit */long long int) -374132202);
            }
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 20; i_11 += 1) 
            {
                for (signed char i_12 = 3; i_12 < 20; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */int) min((var_29), (var_4)));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_8))))))));
                        var_31 = ((/* implicit */unsigned short) var_5);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_13 = 1; i_13 < 21; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                arr_48 [i_13] = ((/* implicit */int) (+(var_7)));
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (arr_29 [i_14 + 4] [i_13 + 1] [i_1]) : (var_11))))));
                var_33 = ((/* implicit */long long int) max((var_33), (arr_23 [i_1])));
                var_34 = ((/* implicit */signed char) (-(((var_5) - (((/* implicit */int) (unsigned char)255))))));
                arr_49 [i_1] [i_13] [i_13 - 1] [i_14] = ((/* implicit */unsigned char) -1);
            }
            for (signed char i_15 = 1; i_15 < 19; i_15 += 1) 
            {
                var_35 *= ((/* implicit */unsigned char) var_7);
                var_36 |= ((((/* implicit */_Bool) var_14)) ? ((~(var_6))) : (((((/* implicit */_Bool) 1073741823LL)) ? (var_4) : (-206001636))));
            }
            for (long long int i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 3; i_17 < 21; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) ((arr_54 [i_1 + 1] [i_1 + 1]) >= (5898188142591634638LL)));
                            arr_61 [i_17] [i_17] [i_17] [i_17] [i_18] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) 65504)) > (3652549825989890483LL))))));
                            var_38 = ((/* implicit */int) ((long long int) arr_44 [i_13 - 1] [i_13 - 1] [i_13 - 1]));
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-22562)) ? (((/* implicit */long long int) -1410637049)) : ((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-107)) < (var_4)));
                var_41 = ((/* implicit */unsigned int) ((unsigned long long int) ((short) var_11)));
            }
            arr_62 [i_1] [(unsigned short)20] &= var_0;
        }
    }
    var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) var_13))));
    var_43 |= ((/* implicit */int) var_15);
}
