/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204571
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) var_7))))) + (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (unsigned char)48))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = arr_1 [i_0] [i_0];
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (arr_3 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 7321786717259086936LL)) * (arr_3 [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_5 [8LL] [i_1]))) : (((/* implicit */int) (unsigned char)229)))))));
        var_13 = ((/* implicit */signed char) arr_4 [i_1]);
        arr_7 [(unsigned char)10] [(unsigned char)10] = ((/* implicit */unsigned char) (+(max(((-(((/* implicit */int) var_6)))), (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (short)32074))))))));
        arr_8 [i_1] [(signed char)6] = arr_4 [i_1];
    }
    for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_14 = arr_12 [i_2 - 2];
                                var_15 ^= ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */short) ((long long int) (short)32087));
                }
            } 
        } 
        arr_24 [(unsigned char)1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_9))))));
        arr_25 [i_2] = ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (long long int i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 23; i_8 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_20 [i_2] [(short)20] [i_2] [i_2 - 2] [19ULL] [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)232)), (3351080135550932272LL)))) ? (arr_10 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))));
                        arr_35 [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) (+(arr_9 [i_7])));
                        arr_36 [i_9] [i_7] &= ((/* implicit */signed char) min((arr_14 [i_9]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2])) ? (((/* implicit */int) min(((unsigned char)124), ((unsigned char)4)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_30 [0LL] [i_9] [i_9] [(unsigned char)10])) : (((/* implicit */int) (unsigned char)53)))))))));
                        arr_37 [i_2] [i_2] [i_7] [i_9] = var_2;
                        arr_38 [22LL] [22LL] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_7]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_30 [i_10] [i_7] [i_7] [i_2])))))))), (((signed char) min((var_1), (((/* implicit */long long int) var_2)))))));
                        arr_42 [i_7] [12ULL] [i_10] = ((/* implicit */unsigned char) 8905665445872837047LL);
                        var_20 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) ((long long int) arr_26 [(unsigned char)9] [20LL])))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_2] [(unsigned char)16] [i_7] [(unsigned char)14] [(unsigned char)18] [i_2])) % (((/* implicit */int) arr_27 [(signed char)2] [i_2]))))) % (((((/* implicit */_Bool) var_5)) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_10])))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((short) ((-1246729418318107663LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2])))))))));
                        arr_46 [i_7] = var_3;
                        arr_47 [2ULL] [i_7 - 2] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7])))))) / (arr_39 [i_7])));
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (long long int i_13 = 2; i_13 < 22; i_13 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-3351080135550932250LL)))))))));
                                arr_52 [i_7] [i_12] [i_13 + 1] = ((/* implicit */long long int) arr_11 [0LL] [i_2 - 2] [i_7 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_14 = 4; i_14 < 17; i_14 += 4) 
    {
        var_23 = arr_51 [i_14] [i_14] [i_14] [(short)3] [(signed char)2];
        /* LoopNest 2 */
        for (short i_15 = 2; i_15 < 17; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) 9223372036854775807LL)))) & (arr_28 [i_15] [i_15] [i_16])));
                    var_25 = ((/* implicit */unsigned char) max((7171448674740972211ULL), (((/* implicit */unsigned long long int) (unsigned char)112))));
                    arr_63 [i_14] [i_15] [i_15] [i_16] = ((/* implicit */unsigned char) arr_11 [i_16] [i_15] [i_14 + 1]);
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((min((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32743))) : (4940073896588235957LL))))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (15890))) - (6))))))))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) ((((6ULL) <= (((unsigned long long int) 3351080135550932262LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_61 [i_14])));
    }
}
