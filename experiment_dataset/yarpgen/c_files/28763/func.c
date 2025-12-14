/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28763
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
    var_20 = ((unsigned long long int) ((var_5) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))))));
    var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((signed char) (unsigned char)163))) + (((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_22 = ((/* implicit */signed char) arr_2 [i_1]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_1])))) - (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) max((arr_6 [i_0]), (((/* implicit */unsigned long long int) var_4))))))))));
                                var_23 = ((/* implicit */short) -2917054490159594923LL);
                            }
                        } 
                    } 
                    var_24 = var_15;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1409065014)) ? (((/* implicit */int) (signed char)-102)) : (1073479680)))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) var_2)))))));
                        arr_18 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 + 1] [i_1]))) - (arr_6 [i_5 + 1])));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_21 [i_1] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6] [i_1] [i_0]))) - (arr_20 [i_0] [i_1] [i_2] [i_6])));
                        var_25 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) arr_4 [i_6] [i_1])))));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) var_0);
                            arr_27 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_16 [i_1] [i_1]);
                            arr_28 [i_8] [i_0] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_0]), (arr_6 [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (12129570063635808158ULL) : (arr_6 [i_8]))) : (arr_6 [i_0])));
                        }
                        arr_29 [i_1] [i_1] [i_2] [i_7] = max((((((/* implicit */_Bool) -409168015)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 840656072U)) ? (((/* implicit */int) (short)-8449)) : ((-2147483647 - 1)))))), (((/* implicit */int) (_Bool)1)));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    arr_32 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((signed char) var_16))) == (((/* implicit */int) arr_0 [i_9]))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_37 [i_0] [i_1] [i_9] [i_1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_10 - 1] [i_10 - 1] [i_10] [i_10])) ? (arr_9 [i_10 - 1] [i_10] [i_11] [i_11 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                                arr_38 [i_0] [i_0] [i_1] [i_1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_6);
                                arr_39 [i_11] [i_11 - 1] [i_1] [i_11 + 3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) < (arr_23 [i_1] [i_10 - 1])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) (~(arr_24 [i_0] [i_1] [i_9])));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        arr_42 [i_12 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(unsigned char)12] [i_12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_12]))))) ? (((/* implicit */int) max((var_2), (((/* implicit */short) arr_31 [(unsigned char)14] [i_12]))))) : (((((/* implicit */_Bool) arr_8 [i_12])) ? (((/* implicit */int) arr_31 [(unsigned short)16] [i_12])) : (((/* implicit */int) arr_8 [i_12]))))));
        arr_43 [i_12 + 1] = ((/* implicit */short) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_23 [i_12 + 1] [i_12])) ? (arr_1 [i_12 + 1]) : (((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
    {
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((arr_45 [i_13]) ? (((/* implicit */int) arr_44 [i_13] [i_13])) : (((/* implicit */int) arr_45 [i_13])))))));
        var_29 = ((/* implicit */long long int) ((-1603394988) & (((/* implicit */int) (short)23829))));
        arr_47 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_13] [i_13])) < (((/* implicit */int) arr_46 [i_13]))));
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned char) ((signed char) var_4));
    }
    var_30 = 1370621100;
}
