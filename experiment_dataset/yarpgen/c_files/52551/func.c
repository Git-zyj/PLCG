/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52551
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
    var_13 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) 2199023255551LL)) ? (min((((7003801U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16208))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1160598819591859189LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_4)))) + (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_11 [i_0] [(unsigned short)3] [i_0] [i_3])))))))));
                                arr_12 [i_0] [i_2] [16LL] [16LL] [(short)23] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_4] [i_2 + 1] [i_2] [i_3]) ? (((/* implicit */int) arr_9 [i_1] [i_2 + 1] [i_1] [i_1] [i_4] [i_4] [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_0] [(signed char)8] [i_4] [i_2 + 1] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2848110223591626307LL))))) : (((arr_11 [i_0] [i_2 + 1] [i_2 + 1] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_3] [i_2 + 1] [12LL] [(signed char)20] [i_2])) : (((/* implicit */int) (short)-4720))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_15 -= ((/* implicit */short) min((((((/* implicit */_Bool) max(((unsigned short)19), (((/* implicit */unsigned short) (short)13764))))) ? (arr_1 [i_0] [8LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))))), (((/* implicit */unsigned int) min((arr_2 [i_0 - 1]), (((/* implicit */unsigned char) var_8)))))));
                    var_16 = ((/* implicit */unsigned short) ((short) (signed char)0));
                    arr_15 [i_0] [i_1] [i_0] [i_1] = ((long long int) 4287963494U);
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    arr_18 [2LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_0 + 1])) : (1006632960)));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        arr_22 [i_0 - 1] [i_7] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_6])))) == (((/* implicit */int) arr_2 [i_0 - 1]))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 4287963494U)) ? (76842589U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 2; i_8 < 24; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_19 [i_6] [i_6] [i_7] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_8 + 1] [i_8]))));
                            arr_25 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)4064)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23029))) : (7003825U)));
                            var_19 -= ((/* implicit */short) ((((((/* implicit */_Bool) 8917286237922483556LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)126)))) + (((/* implicit */int) var_4))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14555))) : (-8207296890447290949LL)));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) (unsigned short)4096);
                            arr_30 [i_0] [i_0] [i_7] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_0] [i_7] [i_0])))) : (((/* implicit */int) (short)0))));
                            var_22 |= ((/* implicit */unsigned short) -8917286237922483557LL);
                            arr_31 [i_0] [i_1] [i_7] [(unsigned short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (unsigned short)19983)) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-8917286237922483557LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1))))) : (((/* implicit */long long int) arr_27 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]))));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            arr_35 [i_7] [i_1] [i_6] [i_7] [i_1] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (1006632958)));
                            var_23 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-19774))) | (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (short)14667))));
                            var_24 -= ((/* implicit */short) ((signed char) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_10] [i_0]));
                            arr_36 [i_7] [i_1] [i_6] [(short)5] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(short)2] [i_0] [(short)2] [i_0 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-23716))));
                        }
                    }
                }
                /* vectorizable */
                for (unsigned short i_11 = 1; i_11 < 24; i_11 += 1) 
                {
                    arr_39 [i_11] = ((/* implicit */long long int) ((((((/* implicit */int) arr_34 [i_11] [i_0] [i_0] [i_0] [i_11] [i_11])) == (((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_0] [i_1] [i_1] [i_1] [i_11])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 7003801U)) && (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) var_5))));
                    var_25 = ((/* implicit */_Bool) (signed char)-14);
                    arr_40 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1241726733)) && (((/* implicit */_Bool) (short)240)))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [(unsigned short)6] [i_11 - 1] [i_0 - 1])) ? (4287963495U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_11 + 1] [i_11] [i_1] [i_11])))));
                }
                /* vectorizable */
                for (long long int i_12 = 3; i_12 < 24; i_12 += 3) 
                {
                    var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0])) ? (0LL) : (4305352897667125727LL)))) ? (((((/* implicit */_Bool) 8289799997766961574LL)) ? (-8289799997766961575LL) : (8917286237922483556LL))) : (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) var_12)))))));
                    var_28 = ((/* implicit */long long int) arr_13 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 4; i_14 < 24; i_14 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_14 + 1] [i_14] [(unsigned char)4] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) arr_7 [i_14] [i_13 + 1] [i_1] [i_0 + 1] [i_0]))));
                                var_30 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (4305352897667125727LL)));
                                arr_49 [i_0] [i_0] [15LL] [i_12] [i_12] [i_13] [i_14] = ((unsigned short) arr_14 [i_0] [i_1] [i_13] [i_1]);
                            }
                        } 
                    } 
                    arr_50 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(arr_43 [i_0] [i_0] [i_0] [i_1])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 2; i_15 < 15; i_15 += 1) 
    {
        for (short i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    var_31 = ((/* implicit */short) max(((~(((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_29 [i_16] [i_16] [(unsigned short)10]))))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_57 [i_15] [i_15] [i_15] [i_16])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_37 [i_17] [i_16] [i_15])))))))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        for (long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                        {
                            {
                                arr_65 [i_18] [i_15] = ((/* implicit */unsigned char) ((short) min((-6559148348262045970LL), (8994521767129347851LL))));
                                var_32 = ((/* implicit */unsigned int) arr_32 [i_15 - 1] [i_16] [i_16] [i_16] [i_16]);
                                arr_66 [(short)15] [i_15] [(unsigned short)7] [i_15] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                var_33 ^= ((/* implicit */_Bool) ((long long int) (~(-1124667058))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48598))));
}
