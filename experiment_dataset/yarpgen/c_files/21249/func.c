/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21249
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
    var_17 = max((var_16), (((/* implicit */long long int) ((unsigned char) max((var_4), (((/* implicit */unsigned short) (short)127)))))));
    var_18 = ((/* implicit */unsigned int) ((var_10) >= (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (357188843593544040LL))))))));
    var_19 = min((max((((/* implicit */long long int) var_14)), (var_10))), (min((min((((/* implicit */long long int) var_1)), (var_16))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (4294967040U)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = min((((unsigned short) 9223372036854775807LL)), (((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_20 ^= min(((-(-6776375215621794899LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (arr_0 [i_0] [(short)8])))) ? (((/* implicit */long long int) var_1)) : (max((((/* implicit */long long int) var_3)), (1099511627775LL))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2])) == (((/* implicit */int) arr_4 [i_2]))))), (258U))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                arr_14 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) ((min((((/* implicit */long long int) var_12)), (arr_13 [i_3 + 1] [i_1] [i_3 + 2] [i_3]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_1] [i_3 + 1] [(_Bool)1])))))));
                arr_15 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1]))))) ? (max((((/* implicit */long long int) (unsigned char)227)), (1099511627775LL))) : ((-(-6776375215621794899LL)))))) ? (6776375215621794898LL) : (((/* implicit */long long int) 3173216796U))));
            }
            for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_20 [i_1] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned int) (+(min((var_16), (((long long int) var_14))))));
                var_22 = ((/* implicit */unsigned char) var_0);
            }
        }
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) 
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(var_11)))) : (1099511627775LL)))));
                var_24 = ((/* implicit */long long int) ((_Bool) arr_10 [i_1] [i_1]));
            }
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                arr_29 [i_1] [i_5 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_1] [i_1]))));
                arr_30 [i_1] [i_1] = ((long long int) (_Bool)1);
            }
            var_25 = ((((/* implicit */_Bool) arr_17 [i_1] [i_5] [i_1])) ? ((+(arr_13 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_8 [i_5] [9LL])))));
        }
        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            arr_35 [i_1] = ((/* implicit */unsigned short) arr_33 [i_1] [i_1]);
            arr_36 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [(_Bool)1] [i_1] [i_1]))) : (var_13))))) ? (max((((/* implicit */long long int) var_5)), ((-(-1099511627798LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            arr_39 [i_1] [i_9] [i_1] = ((/* implicit */unsigned short) var_3);
            arr_40 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1])) ? (arr_27 [i_9] [i_1] [i_1]) : (arr_27 [i_1] [i_1] [i_9])));
            var_27 &= ((/* implicit */long long int) var_5);
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            arr_45 [i_1] [i_10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_10]))) : ((+(var_2)))));
            arr_46 [i_1] [i_10] = ((/* implicit */long long int) ((unsigned char) (unsigned char)28));
        }
        /* LoopNest 2 */
        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 16; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_53 [i_11] [i_12] [(short)14] [i_14]))));
                                var_29 = ((/* implicit */short) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 127LL)) ? (((/* implicit */int) arr_28 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_47 [i_1] [i_11] [i_12]))))) ? (234U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_1] [i_1] [i_12])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        arr_62 [i_15] [i_12] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_23 [i_1] [i_1] [i_1]);
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!((((!(var_15))) && (arr_22 [i_15] [i_12] [i_1]))))))));
                        arr_63 [i_1] [i_1] [i_12] [i_15] = (_Bool)1;
                    }
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        arr_66 [i_1] = ((/* implicit */unsigned char) (+((+(((long long int) arr_3 [i_1]))))));
                        arr_67 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_16);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            arr_71 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(arr_48 [i_16] [i_11 - 1] [i_11 - 1])));
                            var_31 = ((/* implicit */unsigned char) ((long long int) arr_34 [i_17] [i_16] [(unsigned char)17]));
                            var_32 = ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5771129077129427254LL)))));
                            var_33 = ((/* implicit */unsigned short) arr_26 [i_17]);
                        }
                        arr_72 [i_1] [i_11 + 1] [(unsigned char)11] [i_1] = ((/* implicit */short) arr_13 [i_1] [i_1] [i_1] [i_1]);
                        var_34 = ((/* implicit */long long int) ((unsigned int) ((short) ((((/* implicit */_Bool) arr_26 [i_1])) ? (-5406153836928906603LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_16])))))));
                    }
                }
            } 
        } 
    }
}
