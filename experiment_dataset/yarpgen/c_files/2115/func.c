/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2115
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */int) ((arr_2 [i_3] [i_2]) ? (arr_9 [i_3] [i_2] [i_2] [1ULL] [i_0]) : (((/* implicit */unsigned long long int) ((((arr_6 [i_0] [i_1] [(_Bool)1] [i_3]) >= (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-2)) & (((/* implicit */int) (_Bool)1))))) : (((unsigned int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2])))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [12U] [(_Bool)1]))) != (((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_2 [i_0] [i_1]))))) - (((((/* implicit */_Bool) arr_9 [i_1] [8] [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [i_0])))))))));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) ((((14440025175172000226ULL) & (15973414943328365701ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_4] [i_4])))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4] [i_4])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_1] [i_1] [i_4])))));
                    arr_15 [(_Bool)1] [i_1] [i_1] [i_4] = ((/* implicit */int) arr_4 [i_4] [i_0] [i_0]);
                    arr_16 [i_0] = ((/* implicit */int) ((_Bool) arr_0 [i_0]));
                    var_16 = ((_Bool) ((_Bool) 0));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (short i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_5] [0] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13244))) : (8388607U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)19] [i_6 + 2] [i_6 - 3] [i_6 - 1]))))));
                                arr_24 [i_0] = ((/* implicit */unsigned long long int) (((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_4] [i_5] [i_6]))) : (2452083546U))))) & (((/* implicit */unsigned int) ((((/* implicit */int) ((8388607U) <= (8388609U)))) / ((+(((/* implicit */int) (unsigned short)28264)))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    arr_27 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_7] [(_Bool)1]);
                    arr_28 [i_0] [(signed char)13] = ((/* implicit */unsigned int) ((-1LL) % (((/* implicit */long long int) 2338128082U))));
                    var_17 = ((/* implicit */unsigned int) ((((arr_26 [(unsigned short)14] [i_1] [i_7]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_7] [i_7]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_7] [i_7] [i_7])))));
                    arr_29 [i_0] [i_7] = ((/* implicit */int) ((arr_26 [i_0] [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((_Bool) arr_8 [i_0] [(signed char)21] [i_0] [i_1] [i_8] [6ULL]))));
                        arr_34 [13] [i_1] [i_1] [i_8] [i_9] = ((/* implicit */int) arr_20 [3] [3] [i_8] [i_9] [i_8] [15ULL]);
                        var_19 = ((/* implicit */signed char) ((long long int) arr_9 [15LL] [i_1] [i_8] [i_9] [i_8]));
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_37 [i_0] [i_1] [i_8] [i_10] = ((/* implicit */short) arr_26 [i_0] [i_1] [(unsigned short)15]);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [(_Bool)1] [i_8] [i_1] [i_0])))))));
                        arr_38 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_8] [i_10]) : (arr_5 [i_1] [i_1] [i_0])));
                    }
                    for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 2) 
                    {
                        arr_42 [i_1] [i_11] [i_0] [i_1] [(signed char)13] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_7 [i_0] [i_1] [i_11 - 3]));
                        arr_43 [i_8] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (-1236336361)));
                        arr_44 [i_8] [i_1] [i_8] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_30 [i_11])) ? (arr_39 [i_11] [i_11]) : (((/* implicit */int) arr_30 [i_0])))) - (((((/* implicit */_Bool) arr_32 [i_11] [i_11] [(unsigned short)4] [i_11])) ? (((/* implicit */int) arr_35 [i_0] [i_1] [i_8] [i_0])) : (((/* implicit */int) arr_13 [(short)12] [i_1] [i_8] [i_11]))))));
                    }
                    arr_45 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [21] [i_1] [i_1])) % (arr_12 [i_0] [i_1] [i_8] [i_8])))) && (((/* implicit */_Bool) ((short) arr_30 [i_0])))));
                }
                arr_46 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_1] [i_1]) : (arr_5 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_11))));
    var_22 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_9)))) || (((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_3))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_3)) / (var_2))) < (((/* implicit */int) ((((/* implicit */int) var_8)) != (var_10)))))))));
    var_23 = ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_5)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
}
