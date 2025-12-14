/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52394
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 4; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(signed char)8] [(signed char)8] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (arr_6 [i_1] [i_2] [i_3 - 4])));
                        var_18 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1]);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((arr_10 [i_0 + 1] [10U] [i_0 - 1] [i_0 + 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) (~(arr_1 [i_0 + 2] [i_0 + 2])));
                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || ((_Bool)0)));
            }
        }
        arr_14 [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? ((+(6613713157172736732LL))) : (((long long int) arr_8 [i_0] [4] [4LL]))));
        var_22 = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0] [(unsigned char)10]))) + (arr_1 [i_0 + 3] [i_0 + 1])))) + (((((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)0]))) + (var_3))));
    }
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 35184363700224LL)) ? (min((-6613713157172736733LL), (((/* implicit */long long int) 4294967292U)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-31256))))))) / (((/* implicit */long long int) arr_15 [i_5] [(unsigned char)16]))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (long long int i_7 = 3; i_7 < 24; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_15 [i_5] [i_5])))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-19))))), (max((2959784539511227048LL), (6613713157172736740LL))))) : (min((((/* implicit */long long int) var_4)), (arr_19 [i_5] [i_6] [i_7 - 2])))));
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 24; i_8 += 4) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_6)))));
                                var_26 = ((/* implicit */short) arr_22 [i_5]);
                                var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(unsigned short)3] [i_7] [i_8] [i_7] [(signed char)3] [i_6] [i_5])) ? (arr_22 [(unsigned char)10]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_7 - 1] [i_7 - 1])))))) ? (((/* implicit */int) arr_21 [21LL] [i_9] [20LL] [i_6 + 1])) : ((-(((/* implicit */int) (short)31262))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (-35184363700211LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((long long int) ((long long int) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (arr_19 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) 0U)))));
        /* LoopNest 2 */
        for (short i_10 = 1; i_10 < 22; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */short) (+(max((((var_13) & (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_12]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)60627)))))))));
                                var_30 = ((/* implicit */unsigned short) (-((+(arr_29 [i_5] [i_10 + 1] [i_5])))));
                                var_31 &= 7000022927857345494LL;
                                arr_37 [6U] [i_5] [i_11] [6U] [6U] = ((unsigned short) min((arr_15 [i_5] [i_5]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))) < (2408886835U))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_20 [i_5] [i_5] [(unsigned short)24] [i_11]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            for (short i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (unsigned char i_17 = 2; i_17 < 24; i_17 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) arr_31 [i_15] [i_15] [i_17]);
                        arr_48 [20LL] [i_15] [i_16] [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (949146630752345055LL) : (((/* implicit */long long int) var_8)))) * (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_17 - 1])))));
                        var_34 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)4975)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (short)-31264))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            var_35 = ((/* implicit */unsigned char) min((var_35), (((unsigned char) var_13))));
            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) (short)28672)) & (((/* implicit */int) arr_41 [(short)9] [i_18]))));
            /* LoopNest 3 */
            for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    for (signed char i_21 = 3; i_21 < 24; i_21 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8881)) ? (((arr_44 [(unsigned char)8] [i_20] [i_14] [(_Bool)1]) - (((/* implicit */long long int) 32767U)))) : (arr_19 [i_14] [i_21] [i_21 - 3])));
                            var_38 += ((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_21 - 1])) << (((/* implicit */int) arr_58 [i_14] [i_18] [12LL] [i_18] [i_20] [i_21 + 1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                var_39 = (~(arr_16 [i_14] [i_14]));
                var_40 = ((/* implicit */unsigned int) min((var_40), ((+(4294967295U)))));
                var_41 = ((/* implicit */_Bool) ((arr_20 [i_14] [i_14] [i_22] [i_22]) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14] [i_14] [i_23]))) : (var_15)));
                arr_65 [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_28 [i_14]))));
            }
            for (short i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                var_42 = ((/* implicit */_Bool) (+(-954130529851885357LL)));
                var_43 = ((/* implicit */long long int) min((var_43), (((((/* implicit */_Bool) arr_49 [i_22])) ? (var_11) : (arr_36 [i_24] [i_22])))));
                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) 8U))));
            }
            var_45 = ((/* implicit */short) ((unsigned char) arr_22 [i_14]));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 25; i_25 += 3) 
            {
                for (long long int i_26 = 0; i_26 < 25; i_26 += 3) 
                {
                    {
                        var_46 = (+(((((/* implicit */_Bool) (unsigned short)16377)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [11U] [11U] [(_Bool)1] [i_26] [(short)13]))) : (var_9))));
                        var_47 = ((/* implicit */unsigned char) 6613713157172736716LL);
                    }
                } 
            } 
            arr_73 [i_14] [17LL] = ((((/* implicit */long long int) arr_57 [i_22])) / (((long long int) arr_28 [i_14])));
        }
    }
    var_48 = ((/* implicit */long long int) max((var_48), (((max((max((((/* implicit */long long int) 262654215U)), (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) | (max((((var_12) & (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) max((((/* implicit */short) var_7)), ((short)32722))))))))));
    var_49 = ((/* implicit */_Bool) (unsigned short)31);
    var_50 |= max((var_0), (var_0));
}
