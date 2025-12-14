/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246401
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
    var_19 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) max((var_16), (((/* implicit */unsigned int) var_14))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) var_5);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (var_11)));
                var_22 = arr_2 [i_0];
                arr_7 [i_1] [i_1] [i_1] [i_1] = arr_5 [i_0];
                /* LoopSeq 1 */
                for (unsigned int i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    var_23 = ((/* implicit */short) (+(((/* implicit */int) var_18))));
                    /* LoopSeq 2 */
                    for (int i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3] [i_4] = ((((/* implicit */int) var_17)) * (((/* implicit */int) arr_2 [i_3 - 2])));
                        arr_14 [i_1] [i_0] [i_1] [12U] [i_3] [i_4] &= ((/* implicit */unsigned int) ((((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0])))) << (((((((/* implicit */_Bool) (unsigned char)242)) ? (5846988981866877926LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))))) - (5846988981866877914LL)))));
                        arr_15 [i_3] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)217)))));
                        arr_16 [i_3] [i_2] = ((/* implicit */short) (+(var_16)));
                        var_24 = ((11946479308723752924ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5] [i_5 + 2] [i_5 + 1] [(_Bool)1] [i_5])) == (((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5] [i_5 + 2] [i_5 - 1] [i_5] [i_5])))))));
                        arr_20 [i_3] [2ULL] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (arr_12 [i_0])))) ? (((/* implicit */int) ((var_8) >= (var_8)))) : (((/* implicit */int) arr_6 [i_5 + 1] [i_3 + 1] [i_3] [i_1]))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned short)32374))));
                        var_27 = ((/* implicit */unsigned int) ((short) arr_4 [i_5 + 1] [i_5] [i_5 + 1] [i_3 + 1]));
                    }
                }
            }
            for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 2) 
            {
                var_28 = ((/* implicit */long long int) var_16);
                var_29 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
            }
            /* vectorizable */
            for (unsigned char i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 104746182)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [(_Bool)1] [i_7 - 1] [i_7] [i_1]))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 295802646U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-23226)) % (((/* implicit */int) var_0))))) : (((arr_3 [(signed char)3]) | (var_9)))));
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 16; i_8 += 2) 
                {
                    arr_28 [i_0] [(_Bool)1] [2] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_7] [i_8] [8] [i_0])) / (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) arr_19 [i_0] [9U] [i_7] [9U] [i_8] [i_0] [i_7]))));
                    var_32 = ((/* implicit */int) var_17);
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                arr_31 [i_0] [i_1] [i_9] &= ((/* implicit */unsigned short) (unsigned char)214);
                var_33 = ((/* implicit */unsigned int) ((min((arr_3 [i_1]), (arr_3 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (var_15)));
                    var_35 ^= ((/* implicit */signed char) max((((833198422U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-12322))))), (((var_16) == (var_11)))));
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                {
                    var_36 = ((((/* implicit */_Bool) 11460008495969959308ULL)) ? (((/* implicit */int) (_Bool)0)) : (-1564437875));
                    var_37 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_10]);
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (_Bool)0))));
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [10LL] [i_1] [(short)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(signed char)10]))) : (var_4)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                    var_40 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_12])) * (((/* implicit */int) var_12))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) ((unsigned char) var_8));
                        var_42 ^= ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) == (4019251074U)))), (min((var_17), (((/* implicit */signed char) (_Bool)1))))));
                        arr_45 [i_0] [i_10] = ((((unsigned long long int) var_5)) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_10] [i_14 - 1] [i_10] [i_14] [i_10] [i_10]), (arr_9 [i_10] [i_14 - 1] [(signed char)10] [(signed char)11] [i_0] [13U]))))));
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (+(2031131622)))) || (((/* implicit */_Bool) (((~(var_6))) ^ (((/* implicit */int) arr_9 [i_10] [i_0] [11LL] [i_13] [i_14 - 1] [i_14])))))));
                    }
                    arr_46 [i_1] [i_10] [i_13] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) arr_36 [i_13] [i_10] [i_10] [i_0])), (var_11))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_12))))))));
                }
                var_44 = ((/* implicit */unsigned short) (((~(var_8))) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_10] [i_10])) - (19434))))))));
            }
            var_45 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_4))) == (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) var_11)))))));
        }
        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
        {
            var_46 &= ((/* implicit */int) max((arr_47 [12LL] [i_15]), (((/* implicit */unsigned short) (_Bool)1))));
            arr_51 [i_0] = ((/* implicit */unsigned long long int) var_10);
        }
        arr_52 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -5457897548557076176LL)) ? (((unsigned long long int) var_9)) : (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) arr_1 [i_0]))))));
        arr_53 [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]);
    }
    var_47 = ((/* implicit */int) max((((/* implicit */long long int) var_16)), (var_8)));
    var_48 = ((/* implicit */long long int) var_6);
}
