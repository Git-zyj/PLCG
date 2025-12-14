/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246939
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
    var_17 &= var_1;
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1 + 3] [i_2] [(signed char)18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        var_18 = ((/* implicit */unsigned char) 10034287703236657546ULL);
                    }
                    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (arr_8 [i_0] [i_1] [i_0 - 1] [i_1 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)248), (((/* implicit */unsigned char) var_0))))))));
                        var_20 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59392)))))), ((~(var_4)))));
                        var_21 += ((/* implicit */int) var_15);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_15 [i_5] [i_2] [8U] [19U] = ((/* implicit */_Bool) min((((((/* implicit */int) min((arr_5 [14LL] [14LL] [14LL]), (arr_5 [(signed char)15] [(_Bool)1] [i_0])))) / (((/* implicit */int) var_10)))), (var_8)));
                        arr_16 [i_0] [i_1] [i_2 + 1] [i_5] = ((/* implicit */unsigned char) var_3);
                        var_22 = ((/* implicit */int) 1406192932346967992ULL);
                        var_23 = max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_9)) - (58)))))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            arr_21 [i_7] [i_6 - 1] [i_0] [0LL] [i_0] = ((/* implicit */unsigned short) 17040551141362583631ULL);
                            var_24 ^= ((/* implicit */unsigned char) var_9);
                        }
                        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) 1254030899U))))))))));
                        var_26 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)6143)), (1406192932346968008ULL)))))))));
                    }
                    var_27 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 2) 
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_1 + 1] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_14)) & (17040551141362583623ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)44721)))))));
                        var_28 = ((/* implicit */unsigned short) var_6);
                    }
                    arr_25 [(signed char)3] [(signed char)3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1254030899U)) ? (min((((/* implicit */unsigned long long int) -128)), (((((/* implicit */_Bool) 4294967295U)) ? (var_4) : (((/* implicit */unsigned long long int) arr_13 [(unsigned char)9] [i_1] [i_1] [i_1] [i_2] [i_2 - 1])))))) : (1406192932346967992ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 13; i_9 += 2) 
    {
        for (int i_10 = 2; i_10 < 12; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                arr_37 [i_9 - 1] [i_11] = ((/* implicit */int) min((1406192932346967985ULL), (((/* implicit */unsigned long long int) arr_31 [i_9 + 1] [i_11] [i_12]))));
                                var_29 |= ((/* implicit */unsigned short) var_9);
                                arr_38 [i_11] = ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11]))));
                                arr_39 [i_9] [6ULL] [i_11] [i_11] [i_11] [i_10] [(unsigned short)8] = ((/* implicit */short) (unsigned short)6131);
                                var_30 = ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_20 [(short)17] [(short)17] [(short)17])), ((+(4294967295U))))), (((/* implicit */unsigned int) var_5))));
                            }
                        } 
                    } 
                    var_31 = (~(var_7));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        for (signed char i_15 = 4; i_15 < 14; i_15 += 2) 
                        {
                            {
                                var_32 -= ((signed char) min((((/* implicit */unsigned short) (signed char)98)), (arr_1 [i_9])));
                                var_33 = ((/* implicit */int) 1518828251U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned short) var_14);
}
