/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38187
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
    var_15 |= ((/* implicit */long long int) ((var_12) < (max((max((((/* implicit */unsigned long long int) var_11)), (11361024511368277920ULL))), (((/* implicit */unsigned long long int) ((unsigned char) var_2)))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), ((unsigned char)233)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2]))) * (arr_3 [i_2] [i_1] [i_0])))) : (max((7085719562341273696ULL), (((/* implicit */unsigned long long int) var_8)))))))));
                    arr_9 [i_1] |= ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) - (((((/* implicit */_Bool) 0U)) ? (arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) : (((((arr_1 [i_0] [i_4]) >= (arr_4 [i_4]))) ? (arr_3 [i_2] [i_1] [i_0]) : ((+(var_9)))))));
                                var_18 = ((/* implicit */unsigned long long int) 10U);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7085719562341273696ULL))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_5] [i_5] [i_0] [i_1]))));
                    arr_19 [i_0] [i_5] [i_1] [i_5] = ((/* implicit */short) ((unsigned long long int) arr_7 [i_5] [i_0]));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 2; i_7 < 17; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (unsigned short)60)) << (((((/* implicit */int) arr_2 [i_1] [i_6] [i_7])) - (103)))))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (0U)))))), (((((/* implicit */_Bool) max((4294967295U), (12U)))) || ((_Bool)1))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_0]), (arr_4 [i_0])))) ? (arr_4 [i_0]) : (((((/* implicit */_Bool) arr_4 [i_6])) ? (arr_4 [i_0]) : (arr_4 [i_1])))));
                        var_22 = ((/* implicit */long long int) arr_10 [i_6] [i_7] [i_6] [i_7] [i_1] [i_6]);
                    }
                    arr_25 [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_6])) == (arr_20 [i_0] [i_1] [i_6])))), ((unsigned char)129)))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_6])))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    arr_28 [i_0] [i_8] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_8])) ? (var_12) : (((/* implicit */unsigned long long int) 2714377298855464752LL))))));
                    arr_29 [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_8 - 1] [i_8] [i_8] [i_8 + 1]));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_8] [i_8 - 1] [i_9 - 2] [i_1])) ? (((/* implicit */int) (unsigned short)65475)) : (((/* implicit */int) arr_30 [i_0] [i_10] [i_8] [i_8 - 1] [i_9 - 1] [i_0])))))));
                                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_8] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_8 + 1] [i_8 - 1] [i_11])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_8] [i_1] [i_8] [i_11] [i_8])))))));
                                var_25 = ((/* implicit */long long int) ((((arr_12 [i_0] [i_1] [i_8] [i_11] [i_0] [i_11] [i_1]) <= (((/* implicit */int) var_2)))) ? (((/* implicit */int) arr_5 [i_12] [i_1] [i_12] [i_11])) : (((/* implicit */int) arr_21 [i_8] [i_8] [i_8 - 1] [i_8]))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_8] [i_0])) ? (arr_26 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 4294967286U))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_13] [i_13])) : (((/* implicit */int) (_Bool)1))));
        var_28 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_13] [i_13] [i_13])) >= (((/* implicit */int) arr_16 [i_13] [i_13] [(unsigned char)6])))) ? (((((/* implicit */long long int) arr_22 [i_13] [i_13])) + (arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_43 [i_13] [i_13])))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_47 [i_14] [i_14])) ? (((unsigned int) (unsigned short)60)) : ((-(var_0))))), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_46 [i_14] [i_14])) >> (((((/* implicit */int) arr_46 [i_14] [i_14])) - (164))))), (((/* implicit */int) arr_46 [i_14] [i_14])))))));
        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_14] [i_14])) ? (arr_45 [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_14] [i_14])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_14] [i_14]))) : ((-(4294967295U))))))));
    }
    for (unsigned char i_15 = 1; i_15 < 24; i_15 += 3) 
    {
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_15] [i_15])))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_48 [i_15 + 1] [i_15 + 1]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15)) >> (((/* implicit */int) (_Bool)1))))) & (arr_48 [i_15] [i_15])))));
        arr_50 [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3507387217543149782LL))));
    }
}
