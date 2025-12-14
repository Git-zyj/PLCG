/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249036
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
    var_20 = ((/* implicit */short) var_11);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((var_3) ^ (((/* implicit */int) var_0)))) | (((/* implicit */int) var_12))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned short)5] [(unsigned short)2])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_23 = (+(((/* implicit */int) arr_7 [i_1])));
            var_24 += ((/* implicit */short) arr_7 [8U]);
            arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2])) < (((/* implicit */int) arr_7 [(unsigned char)1]))));
        }
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            arr_13 [i_3] [i_3] [6U] = ((/* implicit */int) ((short) var_2));
            arr_14 [i_3] [(signed char)6] [i_3] = ((/* implicit */unsigned long long int) (-(var_7)));
            var_25 += ((/* implicit */unsigned int) (~(((-1915258640) | (((/* implicit */int) arr_12 [i_1]))))));
        }
        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            arr_18 [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((arr_16 [9]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4 + 2]))))) : (var_16)));
            var_26 = ((/* implicit */int) (~(arr_8 [i_4] [4U] [i_4])));
        }
        for (short i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_5] [i_5 + 3])) / (((/* implicit */int) arr_17 [(signed char)15] [i_5 + 3]))));
            arr_22 [i_5 + 1] [i_1] = ((/* implicit */unsigned short) var_15);
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (-(arr_5 [i_1])));
                        arr_27 [i_7 + 1] [i_6] [i_6] [i_1] = ((/* implicit */short) arr_5 [i_1]);
                        arr_28 [i_6] [i_1] [i_5 + 2] [15U] [i_6] [i_7 + 1] = ((unsigned char) arr_24 [i_6]);
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_31 [i_6] = ((/* implicit */unsigned int) -1591355143);
                            var_29 = (-(arr_23 [i_8] [i_1]));
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8]))))))));
                            arr_32 [i_1] [i_6] = ((/* implicit */long long int) (signed char)71);
                        }
                        for (unsigned short i_9 = 4; i_9 < 12; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_11 [i_9] [i_5 - 1]))))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((_Bool) var_18))));
                        }
                        arr_35 [i_6] [8U] [i_7] [i_5] = (~(((var_11) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)5)))));
                    }
                } 
            } 
            arr_36 [i_1] [i_1] [i_5 + 3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_29 [i_5 + 3] [i_1] [3U] [i_1] [i_1])) : (((/* implicit */int) (short)-15))))) + (((arr_30 [i_1] [i_1] [(signed char)10] [14ULL] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1])))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                {
                    arr_43 [i_1] [i_10] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_17 [i_10] [i_1])))) * (((/* implicit */int) arr_4 [i_11]))));
                    var_33 = ((arr_19 [i_11] [i_1]) ? (arr_20 [i_1] [(_Bool)1] [i_11]) : (((/* implicit */int) arr_19 [i_1] [i_10])));
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 15; i_12 += 2) 
                    {
                        for (int i_13 = 4; i_13 < 14; i_13 += 4) 
                        {
                            {
                                arr_49 [i_13] [i_10] [i_11] [i_10] [i_1] = ((/* implicit */signed char) ((arr_1 [i_13 - 1] [i_13 + 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_12 + 1] [i_10]))))))));
                                arr_50 [i_10] = ((/* implicit */short) arr_16 [i_13 + 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 2; i_14 < 15; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 15; i_15 += 1) 
                        {
                            {
                                arr_56 [i_10] [i_14 - 2] [i_11] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_15 + 1] [i_15 - 1])) ? (((/* implicit */unsigned long long int) 2546092060U)) : (arr_23 [i_15] [i_15 + 1])));
                                var_34 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) 2225575192U)));
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_11] [i_15 - 1] [i_11] [i_14] [i_1])) ? (((/* implicit */int) arr_17 [i_15] [i_15 + 1])) : ((+(1047542492)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
