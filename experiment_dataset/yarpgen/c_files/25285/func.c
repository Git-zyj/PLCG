/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25285
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
    var_10 = ((/* implicit */_Bool) var_5);
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) - (((min((5805099955292550572ULL), (5805099955292550552ULL))) + (((12641644118417001043ULL) + (((/* implicit */unsigned long long int) -2147483628)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2003112596), (((/* implicit */int) (short)-30828))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (504403158265495552ULL)));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_12 = (!(((/* implicit */_Bool) var_3)));
                            var_13 = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)182)));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (min((((/* implicit */unsigned long long int) -2003112594)), (12641644118417001047ULL))) : (((/* implicit */unsigned long long int) (-(var_2))))))) ? (min((((long long int) arr_8 [i_0])), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)110))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_4])))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 1289939473907784075ULL))));
                            var_16 = ((/* implicit */int) min((var_16), (var_1)));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) ((unsigned int) ((arr_20 [(_Bool)1] [i_1] [i_2] [i_3] [i_6 + 1]) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0]) : (((/* implicit */int) var_6))))))));
                            var_18 += ((/* implicit */short) 12641644118417001044ULL);
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned int) ((signed char) 12641644118417001069ULL))))));
                        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned char)63)))))) ^ (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 - 1] [i_1] [1] [i_8 + 1] [i_8 + 1]))) : (0LL)))));
                        var_21 = ((/* implicit */int) ((_Bool) ((short) var_1)));
                        var_22 = ((/* implicit */short) (~(((long long int) 628947257))));
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    {
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0])) ? (var_5) : (var_3)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_5))))))));
                            arr_34 [i_0] [i_0] [i_10] [(_Bool)1] = ((/* implicit */long long int) (+(arr_16 [i_10 - 1] [i_10] [i_10])));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(var_3))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_1 [i_10] [i_11])) : (var_5)))), (((((/* implicit */_Bool) 1LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (min((min((((/* implicit */unsigned long long int) (unsigned char)63)), (3ULL))), (((/* implicit */unsigned long long int) (short)-13739)))) : (((/* implicit */unsigned long long int) ((int) ((short) arr_24 [i_0] [i_0] [i_11] [i_13]))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (short)-12039))));
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_14] [i_9] [(unsigned char)13])) ? (arr_0 [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) < (var_2))))))))));
                            arr_41 [i_0] [i_9] [i_10] [i_0] [i_14] |= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */int) (unsigned char)163)))));
                            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0] [i_9] [i_10 - 1]))));
                        }
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        arr_42 [5] [i_9] [i_10] [i_10 - 1] [i_11] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_22 [i_10 - 1] [i_10] [i_11] [i_11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), (min((9048252132118219864ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        arr_43 [i_0] [i_10] [i_0] [i_11] = ((((/* implicit */int) ((253749840) > (((/* implicit */int) arr_38 [i_10 - 1] [i_10 - 1]))))) > (((arr_17 [i_11] [i_11] [i_11] [(unsigned char)8] [i_10 - 1]) ? (((((/* implicit */_Bool) 5805099955292550531ULL)) ? (((/* implicit */int) (short)-32767)) : (-2003112600))) : (((var_5) % (((/* implicit */int) var_6)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                var_31 = ((arr_5 [i_0] [i_9] [i_9] [i_15]) > (arr_5 [i_0] [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32759)) | (((/* implicit */int) (short)22507))));
                            var_33 = ((/* implicit */_Bool) min((var_33), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38025)) ? (((/* implicit */int) arr_51 [i_0] [i_0] [i_15] [i_16] [i_17])) : (var_2))))))));
                            var_34 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == (var_3)));
                        }
                    } 
                } 
                var_35 = ((/* implicit */long long int) (!((_Bool)1)));
            }
        }
        arr_52 [i_0] = (((_Bool)1) ? (((int) ((((/* implicit */unsigned long long int) 2003112586)) - (5805099955292550531ULL)))) : (((/* implicit */int) ((short) ((int) var_6)))));
        arr_53 [i_0] |= ((/* implicit */long long int) ((int) var_9));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    arr_61 [i_0] [i_18] [i_19] [i_18] = ((/* implicit */unsigned int) (_Bool)1);
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_18] [i_19] [(unsigned char)9] [15] [i_19])), (15172497678613676238ULL))), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_18] [i_19] [i_19] [i_18]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64)))))))) : (((var_2) / (var_3))))))));
                }
            } 
        } 
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            for (int i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                for (long long int i_23 = 2; i_23 < 11; i_23 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) 628947246);
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((var_5) & (((/* implicit */int) (short)-1067)))) - (377780853)))))) ? ((+(arr_65 [i_20]))) : (((/* implicit */int) ((((var_7) ^ (((/* implicit */unsigned long long int) arr_49 [i_24] [i_23 - 2] [i_23] [7ULL] [7ULL] [(_Bool)1])))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))))))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-763363042) : (((((/* implicit */int) ((-628947263) > (((/* implicit */int) (short)-30822))))) >> (((((/* implicit */int) (signed char)-26)) + (39)))))));
                            var_40 = ((((/* implicit */int) ((((var_3) % (((/* implicit */int) arr_19 [i_23])))) > (((/* implicit */int) ((unsigned char) var_9)))))) & (628947257));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_25 = 0; i_25 < 12; i_25 += 3) 
                        {
                            var_41 = ((/* implicit */long long int) var_2);
                            var_42 = ((/* implicit */_Bool) ((arr_28 [i_23 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12639)))));
                            var_43 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32760))));
                        }
                        for (int i_26 = 0; i_26 < 12; i_26 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_23 + 1] [i_23 - 2] [i_23 - 1] [i_26] [i_26])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_71 [(short)2] [i_23 - 1] [i_23 - 2] [(short)10] [i_23])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) <= (2003112571)))) : ((-(var_3)))));
                            var_45 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) arr_33 [i_26]))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) >> ((-((-(((/* implicit */int) (_Bool)1))))))));
                            arr_79 [i_26] [(short)10] [i_22] [i_23 - 2] [(_Bool)1] [i_20] [(_Bool)1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))));
                        }
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */_Bool) min((var_2), (((((/* implicit */int) (short)30828)) & (arr_6 [i_20] [i_20] [i_20] [i_20])))));
        var_47 = ((/* implicit */_Bool) ((1083386011U) << (((min((((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)15232))))), (((unsigned int) (short)30831)))) - (30803U)))));
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((_Bool) ((unsigned char) arr_55 [i_20] [i_20] [i_20]))))));
        var_49 |= ((/* implicit */unsigned int) min((var_3), (((/* implicit */int) ((unsigned short) min((var_7), (((/* implicit */unsigned long long int) var_9))))))));
    }
    var_50 = ((/* implicit */short) var_5);
}
