/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39506
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (signed char)-127);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_11 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_1 [17U])))) == (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1] [i_2] [(unsigned char)6])))))) ? (max((((arr_0 [i_0] [i_0]) - (((/* implicit */int) var_6)))), ((+(((/* implicit */int) arr_8 [i_0] [2ULL] [i_0] [i_3])))))) : ((((+(((/* implicit */int) (signed char)67)))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) % (63ULL)))))));
                        arr_12 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2]))), (max((arr_6 [i_2]), (((/* implicit */int) var_7))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (3567393434U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245)))));
                            var_20 = ((/* implicit */unsigned int) var_8);
                            arr_15 [i_2] [i_0] [i_1 - 3] [i_2] [i_3 - 1] [i_4] [i_4] = arr_13 [i_1 - 2] [i_2] [i_3 - 2] [i_3 - 2] [i_4 + 2];
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_5] [i_1 - 3] [i_2] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 267417973)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_3])) : (var_0)))))))));
                            arr_20 [i_0] [i_2] [i_2] = ((/* implicit */long long int) arr_14 [i_0] [i_0]);
                        }
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_0] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1 + 1] [i_0]), (arr_4 [i_0] [i_1 - 4] [i_1 - 4])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_1 - 2] [i_2]), (((/* implicit */unsigned char) var_18)))))) : (max((9223372036854775807LL), (9223372036854775795LL)))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (var_4)));
                        }
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_2 [(unsigned char)7] [2] [i_7]))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) * (((((/* implicit */unsigned long long int) 2044541089)) / (arr_9 [i_1] [i_1 - 3] [i_0]))))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_8 = 3; i_8 < 21; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) var_6);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_8] [(_Bool)1] [i_10] [i_10] [(unsigned char)17]))));
                        var_27 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_8 - 3] [i_8 - 3] [i_0] [i_8 - 2] [i_8] [i_0]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_8] [(unsigned char)22])) ? (((/* implicit */int) arr_33 [i_0] [17U] [i_8] [i_0] [i_8])) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) 9223372036854775807LL)) : (((/* implicit */unsigned long long int) arr_35 [i_0] [i_8] [i_8]))));
                arr_37 [i_8] [i_8] [i_8 - 3] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) arr_36 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_4 [i_11] [i_8] [i_0]))));
            }
            for (int i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 2; i_13 < 22; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) - (arr_38 [i_8] [i_0] [(signed char)22] [i_13])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (arr_35 [i_8 - 2] [i_13 - 1] [i_0]))))));
                        arr_45 [i_8] [i_12] [(unsigned char)2] [i_8] = ((((/* implicit */_Bool) var_3)) ? (arr_22 [i_8] [i_13 - 1]) : (arr_22 [i_8] [i_13 - 2]));
                    }
                    arr_46 [i_8] [i_8] [i_12] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_12] [i_8]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0] [3ULL] [i_12])) : (((/* implicit */int) arr_10 [i_0] [i_8] [i_12] [i_13])))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_21 [i_0] [i_8 + 2] [i_12] [i_12] [i_13 + 1]))))));
                    arr_47 [i_8 - 1] [i_8] [i_0] [i_13 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_16 [i_13] [i_13 + 1] [i_12] [i_8] [i_8] [i_0])) : (((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8] [9] [i_12]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) arr_16 [i_13 - 1] [i_8 + 2] [i_12] [i_13 - 1] [i_13 - 1] [i_13 + 1]);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)116))));
                    }
                    arr_50 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)59))));
                }
                for (unsigned int i_16 = 2; i_16 < 22; i_16 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_27 [i_12])) ? (arr_6 [i_0]) : (((/* implicit */int) arr_49 [i_0] [i_8 + 1] [i_0])))) : (((arr_19 [i_16 - 2] [8ULL] [i_0] [i_0] [i_8 - 3] [22]) ? (((/* implicit */int) arr_43 [(_Bool)1] [i_8 - 2] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_29 [i_0])))))))));
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_16 - 1] [18ULL] [i_8 - 2] [i_0])) ? (((/* implicit */int) arr_40 [i_16 - 2] [i_8] [i_8 - 2] [i_0])) : (((/* implicit */int) arr_40 [i_16 + 1] [i_16 + 1] [i_8 - 1] [i_0])))))));
                    arr_55 [i_8] [i_12] [i_12] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)255))));
                }
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_41 [i_8 - 2] [i_12] [i_12] [i_12] [i_8 - 2])) + (111)))));
                arr_56 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_8 + 1] [i_8 - 3] [i_8])) ? (((/* implicit */int) arr_7 [i_8])) : (((/* implicit */int) arr_31 [i_8 + 1] [(unsigned char)4] [i_0] [i_0]))));
            }
            var_35 = ((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_8]);
            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_8]))));
        }
        arr_57 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (unsigned char)248))));
        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) (unsigned char)67)))))));
        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_13 [(signed char)16] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) var_18)) >> (((var_17) - (42720300528992759LL)))))));
        var_39 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_40 [i_0] [8U] [i_0] [i_0]), (max(((unsigned char)227), (((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0] [18U]))))))), (min((max((3184141037U), (((/* implicit */unsigned int) (unsigned char)76)))), (((/* implicit */unsigned int) (unsigned char)126))))));
    }
    for (signed char i_17 = 2; i_17 < 22; i_17 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            arr_63 [i_18] = ((/* implicit */unsigned char) max((arr_61 [i_17] [i_18]), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (unsigned char)232)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_62 [7] [i_18] [i_18])) ? (var_15) : (((/* implicit */int) arr_62 [(signed char)9] [i_18] [i_18])))))))));
        }
        for (unsigned char i_19 = 2; i_19 < 22; i_19 += 3) 
        {
            var_41 = ((/* implicit */_Bool) (unsigned char)1);
            var_42 = ((/* implicit */long long int) ((((min(((~(((/* implicit */int) arr_58 [(unsigned char)6] [i_17])))), ((-(((/* implicit */int) arr_58 [i_19] [i_19])))))) + (2147483647))) >> (((((/* implicit */int) max((max(((unsigned char)248), (((/* implicit */unsigned char) (_Bool)1)))), (arr_62 [i_17 - 2] [16LL] [i_19 + 1])))) - (243)))));
            var_43 = ((/* implicit */int) var_6);
        }
        arr_66 [i_17] = ((/* implicit */unsigned int) min(((unsigned char)251), ((unsigned char)10)));
    }
    var_44 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)6))))) : (var_17)))));
    var_45 = ((((/* implicit */_Bool) ((unsigned long long int) 125829120ULL))) ? (((((/* implicit */_Bool) ((var_3) << (((var_10) - (17003259001003341779ULL)))))) ? (((((/* implicit */_Bool) 4115771055U)) ? (var_8) : (var_8))) : (max((((/* implicit */int) var_4)), (var_15))))) : (((/* implicit */int) (unsigned char)250)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_20 = 2; i_20 < 16; i_20 += 4) 
    {
        var_46 = ((/* implicit */unsigned char) arr_53 [i_20 - 1] [i_20 + 1] [i_20] [i_20]);
        arr_69 [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) 65536LL)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (_Bool)1))));
        arr_70 [i_20] [1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_20] [15U] [(unsigned char)4] [i_20 + 1])) ? (((/* implicit */int) arr_52 [i_20] [i_20] [i_20] [i_20 + 1])) : (((/* implicit */int) arr_52 [14] [14] [i_20] [i_20 - 1]))));
        arr_71 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)8] [i_20] [i_20])) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) - (arr_25 [i_20] [i_20 - 2] [i_20] [(signed char)4] [i_20] [i_20] [i_20]))) - (2363742440U)))));
    }
}
