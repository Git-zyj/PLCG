/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241017
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
    var_20 = min((var_1), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-98)) / (var_16)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) == (min((((/* implicit */long long int) arr_1 [i_0] [(unsigned short)5])), (var_13)))))));
        arr_3 [i_0] [i_0] = ((signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)98)), (arr_0 [i_0 + 1])))) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_1] [6] [i_1] = ((/* implicit */unsigned short) min(((+(arr_14 [14ULL] [i_2] [i_2] [i_3] [i_4]))), (((((/* implicit */_Bool) arr_14 [(short)14] [i_2] [(short)4] [i_4] [(short)15])) ? (((/* implicit */int) var_14)) : (arr_14 [(unsigned short)2] [i_2] [i_2] [i_2] [i_2])))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            arr_19 [i_1] [(signed char)15] [i_1] [i_1] [(_Bool)1] [13ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((var_14) ? (((/* implicit */int) arr_15 [i_5] [i_4] [i_3] [i_1] [i_1])) : (var_10))) : (((/* implicit */int) max((arr_4 [i_1]), (arr_15 [i_1] [i_2] [i_3] [i_4] [i_5]))))));
                            arr_20 [i_4] [i_2] [i_3] [i_4] = (signed char)-98;
                            arr_21 [i_1] [i_2] [i_3] [i_1] [i_5] [i_4] [i_5] = ((/* implicit */short) 1571957803U);
                        }
                        arr_22 [i_1] [i_1] [10LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_13)))))) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) ((short) var_1)))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((((long long int) var_11)), (((/* implicit */long long int) ((short) arr_17 [i_1] [i_1] [(short)5] [i_4] [i_4])))))) ? (((/* implicit */int) max((max((var_9), (var_11))), (max((arr_2 [(short)3]), (((/* implicit */unsigned short) arr_1 [i_4] [(signed char)8]))))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-99)) <= (arr_14 [i_1] [i_2] [i_2] [i_3] [8])))))))));
                    }
                } 
            } 
        } 
        arr_23 [i_1] = (-((-(((/* implicit */int) (unsigned short)32646)))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((var_0), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (1083276318530542083ULL)))))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            arr_35 [i_1] = ((/* implicit */signed char) 17363467755179009533ULL);
                            arr_36 [i_6] [(short)1] [(short)15] [(unsigned short)5] = ((((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_8] [i_7] [i_1])), (arr_2 [i_6])))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_6])) ? (((/* implicit */int) (unsigned short)32646)) : (((/* implicit */int) (short)24622)))))) << (((((/* implicit */int) ((unsigned short) (signed char)-98))) - (65426))));
                        }
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_14 [i_1] [(signed char)2] [i_7] [i_8] [9])) : (max((((/* implicit */unsigned long long int) var_1)), (arr_24 [i_1] [i_6] [i_6])))))) ? (((long long int) arr_1 [i_1] [i_1])) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (short)-24622)))))))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_17)) < (var_4)))) & (((/* implicit */int) arr_8 [i_7] [i_6] [i_1])))) | (((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_10])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)76)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [(short)14] [(short)14])) >= (((/* implicit */int) (short)-24622)))))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) | (((/* implicit */int) arr_26 [i_1] [(unsigned char)7] [i_1] [12]))))) ? (((((/* implicit */_Bool) (unsigned short)32655)) ? (var_0) : (17363467755179009533ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))) ? ((((!(((/* implicit */_Bool) 1083276318530542062ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)-3121)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)246))))))) : (max((((/* implicit */int) arr_38 [i_1] [i_6])), ((-(((/* implicit */int) var_11))))))));
                            arr_39 [15U] [15U] [(unsigned short)9] [(unsigned short)7] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)3120)) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_6)))))));
                            arr_40 [i_7] [i_8] [i_7] [i_1] [i_1] = ((/* implicit */signed char) arr_34 [(unsigned char)4] [13ULL] [13ULL] [i_8] [13ULL]);
                        }
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (-3775040972794618408LL)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)117), ((signed char)118)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)60)) / (((/* implicit */int) var_5))))) + (max((((/* implicit */long long int) var_5)), (-1LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_8] [8] [13] [i_1] [(signed char)9]))) * (min((((/* implicit */unsigned long long int) (signed char)49)), (17363467755179009533ULL))))));
                    }
                } 
            } 
            arr_41 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (short)-24622)) & (((/* implicit */int) arr_33 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [(short)1] [(unsigned char)10]))))), (max((-1789661810465789095LL), (((/* implicit */long long int) (unsigned short)32890))))));
            arr_42 [(short)7] = ((/* implicit */unsigned short) 5265732665738531453ULL);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 14; i_11 += 4) 
        {
            var_28 += ((/* implicit */long long int) (-((~(((/* implicit */int) var_17))))));
            /* LoopNest 2 */
            for (long long int i_12 = 3; i_12 < 14; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    {
                        arr_51 [i_13] [i_12] [i_12] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 3])) ? (((/* implicit */int) arr_31 [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 2])) : (arr_30 [i_11 - 1] [i_11 + 2] [i_11] [i_12 - 3] [i_11 + 2])));
                        arr_52 [i_1] [i_12] [(signed char)8] [(unsigned char)2] [(signed char)8] [(unsigned short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)103)))) : (((((/* implicit */_Bool) (short)3118)) ? (((/* implicit */int) (unsigned short)32660)) : (((/* implicit */int) var_18))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) 885129388665756584LL))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        {
                            arr_60 [(unsigned char)2] [3LL] [i_1] = ((/* implicit */short) var_0);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_11] [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11])) >> (((arr_54 [i_11 + 1] [(short)10] [(short)10] [i_11 + 2]) - (13542782401446306439ULL)))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_11 + 2] [i_11 - 1] [i_1])) ? (((/* implicit */int) var_17)) : (var_4))))));
                        }
                    } 
                } 
            } 
        }
        arr_61 [i_1] = ((signed char) ((((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (3138203325U) : (((/* implicit */unsigned int) arr_11 [i_1] [i_1]))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        arr_65 [i_17] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
        arr_66 [i_17] = (~(arr_62 [i_17]));
    }
}
