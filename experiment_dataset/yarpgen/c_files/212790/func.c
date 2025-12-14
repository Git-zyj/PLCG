/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212790
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)32767)) - (arr_0 [i_2 + 1] [i_2 + 1])));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                    var_17 = ((/* implicit */signed char) arr_2 [i_0]);
                }
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (min((min((arr_2 [i_0]), (((/* implicit */long long int) (unsigned char)19)))), (min((((/* implicit */long long int) var_1)), (9223372036854775801LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)237)) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)13)) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                var_19 = ((/* implicit */long long int) (unsigned char)42);
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    arr_10 [14ULL] [i_1] [i_1] [i_3] |= ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_3]);
                    var_20 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_3] [i_1] [i_0])) - (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_3 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_3 - 1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_4] [i_5] [i_6] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) ^ (-5104312716301832019LL)));
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23906)) ? (-8101262359138880558LL) : (((/* implicit */long long int) -2104537672))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_6 - 2] [i_0])) ? (arr_5 [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5])))));
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_0]);
                            arr_21 [i_0] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_5]))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_5])) || (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_8])) || (((/* implicit */_Bool) (short)1340))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5104312716301832019LL)) ? (((((/* implicit */_Bool) -162867704)) ? (14637437821730968022ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_8] [i_1] [i_8])))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */int) arr_23 [i_0] [i_1] [i_4] [i_5] [i_9] [i_0]);
                            var_27 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_0] [i_9] [i_4] [i_4 + 1]))));
                            arr_28 [i_0] [i_1] [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) ((var_13) ? (((/* implicit */long long int) arr_0 [i_0] [i_4 - 1])) : (((long long int) arr_17 [i_0] [i_0] [i_0]))));
                            arr_29 [i_4] [i_0] [i_4] [i_9] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4 + 1] [i_1] [i_4]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_28 ^= ((/* implicit */_Bool) ((arr_11 [i_4 + 1] [i_4 - 1] [i_10]) & (((/* implicit */int) arr_16 [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_4 - 2]))));
                            arr_34 [i_0] [i_10] |= ((/* implicit */long long int) ((unsigned int) arr_13 [i_10] [i_5] [i_0]));
                        }
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_1 [i_0] [i_1]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((unsigned int) arr_3 [i_4] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 1; i_12 < 12; i_12 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) (+((~(var_11)))));
                            arr_41 [i_0] [i_1] [i_4] [i_11] [i_12] [i_1] = ((/* implicit */int) (unsigned char)218);
                            arr_42 [i_0] [i_4] [i_11] [i_12] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_14 [i_12 + 1] [i_4] [i_4 - 1]) : (arr_14 [i_12 + 1] [i_11] [i_4 - 1])));
                        }
                        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_32 &= ((/* implicit */unsigned short) arr_26 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 - 2] [i_4] [i_13]);
                            var_33 = ((/* implicit */unsigned short) (unsigned char)252);
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6089469992308333779ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (short)32767)) : (-199641333)));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_13] [2LL] [2LL] [i_0])) ? (arr_43 [i_0] [i_4] [i_13]) : (((/* implicit */int) arr_1 [i_13] [i_0])))))));
                            arr_45 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_25 [i_11] [i_4] [i_0])) ? (((/* implicit */int) var_1)) : (arr_0 [i_0] [i_11])))));
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) 4206954165U))));
                        arr_48 [i_0] [i_0] [i_4] [i_14] [i_1] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) : (arr_25 [i_4] [i_4] [i_4 + 1])));
                    }
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_0] [i_0] [i_4] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_4] [i_4 - 2])) + (((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 2] [i_4]))));
                        var_37 = ((/* implicit */unsigned long long int) arr_46 [i_15] [i_4] [i_1] [i_1] [i_0]);
                        var_38 = (i_0 % 2 == zero) ? (((/* implicit */int) ((arr_44 [i_0] [i_0] [i_4 - 2] [i_15] [i_1] [i_0] [i_1]) >> (((arr_44 [i_0] [i_0] [i_4 - 2] [i_15] [i_1] [i_4] [i_15]) - (3268749934U)))))) : (((/* implicit */int) ((arr_44 [i_0] [i_0] [i_4 - 2] [i_15] [i_1] [i_0] [i_1]) >> (((((arr_44 [i_0] [i_0] [i_4 - 2] [i_15] [i_1] [i_4] [i_15]) - (3268749934U))) - (3901868762U))))));
                    }
                    arr_52 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_14 [i_4] [i_1] [i_4]);
                    var_39 &= ((/* implicit */int) arr_8 [i_0] [i_1] [i_4]);
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned char) (_Bool)0);
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_1] [i_0])) ? (((-2419557136744390550LL) ^ (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1573781353))))));
                        var_42 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)187))));
                    }
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                    {
                        var_43 = ((arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_17] [i_1] [i_1])) : (((/* implicit */int) (signed char)-36)));
                        arr_60 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 + 1] [i_0] [i_4 - 2]))) + (arr_53 [i_4 + 1] [i_1] [i_4] [i_17])));
                    }
                    for (signed char i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 16; i_19 += 4) 
                        {
                            var_44 = arr_43 [i_0] [i_18] [i_4 - 1];
                            var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_40 [i_0] [i_0] [i_1] [i_4] [i_4] [i_18] [i_19])))));
                        }
                        var_46 |= ((/* implicit */unsigned char) var_8);
                        arr_67 [i_0] [i_0] [i_4] [i_18] [i_18] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_15 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_18] [i_18] [i_18])) & (var_15)));
                    }
                    arr_68 [i_0] = ((_Bool) -4838512544213452637LL);
                }
            }
        } 
    } 
    var_47 = -4838512544213452637LL;
}
