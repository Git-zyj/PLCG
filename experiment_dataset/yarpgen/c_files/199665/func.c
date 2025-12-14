/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199665
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
    var_10 = ((min((var_9), (var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))) && (((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) var_2)))));
    var_11 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) var_0);
                    arr_10 [i_0] [i_2 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_6 [i_0] [i_0])))));
                    arr_11 [i_0] [19] [i_0] [(short)11] = ((/* implicit */short) var_3);
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((short) var_8)))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))));
        arr_12 [i_0] = ((/* implicit */_Bool) ((signed char) arr_4 [i_0]));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_14 = ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_0 [(short)14])))));
        /* LoopSeq 2 */
        for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (short i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned long long int) arr_6 [i_5 + 2] [i_6]);
                            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_3] [i_7]))) : ((~(arr_3 [i_6] [i_6]))))) : (((/* implicit */int) var_0))));
                            var_17 = arr_6 [i_3] [i_5];
                            arr_28 [i_3] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */short) (unsigned short)62034);
                            arr_29 [i_3] [i_5] [i_5] = ((/* implicit */short) (((!(var_3))) && (((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_7]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                arr_33 [i_3] [i_3] [i_8] = ((/* implicit */signed char) arr_13 [i_3]);
                arr_34 [i_3] [i_8] [i_8] [i_3] = ((/* implicit */short) max((min((max((((/* implicit */unsigned short) (_Bool)1)), (var_7))), (((/* implicit */unsigned short) max((arr_15 [i_4] [i_8]), ((_Bool)0)))))), (((/* implicit */unsigned short) arr_16 [(signed char)15]))));
            }
            for (short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) var_4);
                arr_37 [i_3] [i_3] [i_3] [i_3] = ((signed char) (-(((/* implicit */int) arr_26 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1] [(signed char)14] [i_9]))));
                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_32 [i_3] [i_3] [i_9] [i_9]), ((!(((/* implicit */_Bool) arr_5 [i_4] [i_9]))))))), (((((/* implicit */_Bool) (short)19692)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_36 [i_3] [i_3]))))));
                arr_38 [i_4] = ((/* implicit */signed char) ((((_Bool) min((arr_5 [i_3] [i_3]), (((/* implicit */unsigned short) arr_27 [i_3] [i_9] [i_3] [i_9]))))) && ((!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))) : (12505074061727515082ULL))))))));
                var_20 += ((/* implicit */signed char) (-((+(min((((/* implicit */unsigned long long int) arr_7 [i_9] [i_4] [i_4] [i_4])), (var_5)))))));
            }
            for (short i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 1; i_11 < 15; i_11 += 1) 
                {
                    arr_43 [i_3] [13] [i_4 - 3] [i_10] [i_10] [i_11] = arr_32 [(_Bool)1] [(unsigned short)10] [i_10] [i_11];
                    var_21 -= ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        arr_46 [i_3] = ((/* implicit */_Bool) arr_8 [i_4 - 3] [i_4 + 1]);
                        arr_47 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_11 + 3] [i_11 + 3] [i_11 + 3] [i_11 + 3] [i_11 + 1] [i_11 + 1] [17])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11 + 3] [i_11] [i_10] [i_11])))));
                        var_22 = ((/* implicit */unsigned long long int) arr_20 [i_4] [i_10] [i_10]);
                        arr_48 [i_3] [9ULL] [i_3] [i_3] [i_3] [i_3] [(short)2] = arr_6 [i_3] [i_10];
                        var_23 = ((/* implicit */_Bool) (unsigned short)62034);
                    }
                    var_24 = ((unsigned short) arr_5 [i_4 - 3] [i_11 + 1]);
                    arr_49 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_10])) >= (((/* implicit */int) var_9))));
                }
                var_25 *= ((/* implicit */_Bool) (short)19710);
                var_26 = ((/* implicit */unsigned long long int) var_8);
                arr_50 [i_3] = ((/* implicit */short) min((((/* implicit */int) min((var_3), (arr_16 [i_10])))), (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */int) arr_41 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))))));
            }
            arr_51 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (max((2147483584), (((/* implicit */int) var_0))))))) ? (max((((/* implicit */int) var_1)), (((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) (_Bool)1))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((unsigned long long int) arr_0 [(signed char)10])))) ? (((((/* implicit */_Bool) arr_31 [i_4 + 1] [(_Bool)0] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_18 [i_4 - 1])) : (((/* implicit */int) arr_18 [i_4 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_18 [i_3])) : (((/* implicit */int) arr_40 [(signed char)2] [i_3] [i_3]))))))))));
        }
        for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 3) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_20 [i_3] [(_Bool)1] [i_13]))));
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max(((~(((/* implicit */int) var_9)))), ((~(((/* implicit */int) arr_8 [i_3] [i_13])))))))));
        }
        arr_56 [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
    }
    var_30 -= ((/* implicit */_Bool) var_6);
}
