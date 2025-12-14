/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248799
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9817)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)176))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_0])))) + (((/* implicit */int) min(((_Bool)1), (var_7)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) + (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_0])))), (((/* implicit */int) arr_1 [(short)8])))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) + (var_9))) < (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [(short)8]), (arr_5 [6ULL] [i_1] [i_1]))))))))));
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (short)-30678))))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (var_9))))))) ? (max((((/* implicit */int) ((short) arr_5 [(short)6] [i_1] [i_1]))), (((arr_2 [i_1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [0LL])))))) : (((/* implicit */int) var_4))));
        }
    }
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 15; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) arr_8 [i_2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((long long int) arr_14 [(short)10] [i_2] [(short)10])))));
                            var_22 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) max((((int) arr_13 [i_2 + 3] [i_2])), (min(((+(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_16))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 3; i_7 < 23; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) max((max((((((/* implicit */int) arr_27 [i_8])) >> (((arr_25 [i_7]) + (1001352926))))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_27 [i_10])) : (((/* implicit */int) arr_31 [i_9] [i_8] [i_9])))) == (((var_14) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_27 [i_7])))))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(-8345734716382446512LL))), (((/* implicit */long long int) -980379464))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)61496)) | (((/* implicit */int) (short)(-32767 - 1)))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (13527566707139261271ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned char) (_Bool)1))))))));
                        var_25 ^= ((/* implicit */_Bool) ((max((max((((/* implicit */unsigned long long int) var_0)), (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (var_1)))))) << (((((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19377))) | ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1)))) - (38750LL)))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 23; i_11 += 2) 
                    {
                        arr_36 [i_7] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) arr_26 [i_7])) ^ (arr_24 [i_7])))))) ? (((((/* implicit */int) arr_28 [i_7 - 2] [i_11 - 1])) | (((/* implicit */int) arr_27 [i_7])))) : (((/* implicit */int) max((arr_35 [i_7] [i_8] [i_9]), (arr_35 [i_7 - 1] [i_8] [i_11 + 1]))))));
                        var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((short) (_Bool)0)))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (signed char i_12 = 2; i_12 < 23; i_12 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_42 [i_7] [i_8] [i_8] [i_9] [i_12] [i_13] [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) max((((((/* implicit */int) arr_31 [i_9] [i_9] [i_12])) >= (((/* implicit */int) arr_27 [i_8])))), (var_14)))), (arr_38 [i_7])));
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_33 [i_12] [i_8] [i_13]), (arr_33 [i_7] [i_7] [i_12])))) ? ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7] [i_7] [i_12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        }
                        for (unsigned int i_14 = 4; i_14 < 20; i_14 += 2) 
                        {
                            var_29 ^= ((/* implicit */int) arr_37 [i_14]);
                            arr_46 [i_9] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) arr_25 [i_7]);
                            arr_47 [i_14] [i_9] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)55789)))) : (((/* implicit */int) arr_31 [i_9] [i_8] [i_8]))))), (((((/* implicit */_Bool) max((var_6), (arr_38 [i_7])))) ? (((/* implicit */long long int) arr_44 [i_9] [i_8] [i_9] [i_12] [i_14])) : (((6598704656628463104LL) - (((/* implicit */long long int) ((/* implicit */int) (short)18439)))))))));
                            var_30 ^= ((signed char) min((max((arr_41 [i_14] [i_12] [i_12] [i_8] [i_7]), (((/* implicit */int) var_5)))), (((/* implicit */int) arr_39 [i_12] [i_8] [i_8] [i_8]))));
                        }
                        arr_48 [i_7] [i_9] [i_9] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_7]))) ? (arr_41 [i_7] [i_8] [i_9] [i_8] [i_7 - 1]) : (((var_5) ? (((/* implicit */int) arr_31 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_23 [i_7]))))))) ? (((/* implicit */int) arr_43 [i_9] [i_7] [i_7])) : (((/* implicit */int) ((short) (_Bool)1)))));
                    }
                    arr_49 [i_7] [i_9] [i_9] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20810)) ? (((/* implicit */int) (short)-18439)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)47203)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))));
                    arr_50 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (~((~(var_8)))));
                    var_31 = ((/* implicit */short) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) || (var_13))))));
                }
            } 
        } 
    } 
}
