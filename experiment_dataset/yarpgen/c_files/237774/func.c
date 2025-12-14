/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237774
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) var_8))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (var_6)));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 1]))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_15 = (~(((/* implicit */int) ((arr_1 [i_2 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [(unsigned short)5])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) var_5))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) arr_8 [i_3 - 2] [i_0]));
            arr_14 [i_0] = ((/* implicit */int) (signed char)-51);
        }
        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) - (var_8)));
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 4) 
            {
                arr_22 [i_0] [i_0] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) var_5)))));
                arr_23 [i_0] [3ULL] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) / (((/* implicit */int) (signed char)-33))));
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0]);
                var_17 = ((/* implicit */unsigned int) var_12);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_28 [i_0] = ((/* implicit */unsigned int) arr_25 [i_0] [i_0]);
                arr_29 [i_0] [i_4] [(short)3] = ((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0] [i_4 - 1] [i_0]));
                var_18 = ((((80348832U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))));
            }
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_4 - 2]))));
                    arr_35 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-63)) ? (4214618464U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62)))));
                    var_20 = ((/* implicit */unsigned long long int) ((2871307443U) / (80348829U)));
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_38 [i_9] [i_0] [i_4] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) arr_8 [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_41 [i_0] [(_Bool)1] [i_0] [i_7] [(unsigned short)2] [i_9] [9ULL] = ((/* implicit */_Bool) arr_33 [i_0] [i_7]);
                        var_21 = ((/* implicit */unsigned int) (~(arr_25 [i_7] [i_0])));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_44 [i_0] [i_0] [0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_33 [9ULL] [i_4]))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_4])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_7] [(_Bool)1] [i_7])) || (((/* implicit */_Bool) 80348817U)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_48 [11] [i_0] [(short)8] [i_4] [i_4 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(3871410851U))))));
                        arr_49 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_7] [i_4 - 3])) | (993353066)));
                        arr_50 [i_0] [i_0] [(signed char)10] [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4214618464U)) : (arr_25 [i_7] [i_0]))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        arr_53 [i_0] [i_0] [7U] [i_7] [(_Bool)1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_15 [i_4 - 3] [i_0]) : (((/* implicit */unsigned long long int) (-(var_0))))));
                        arr_54 [i_0] [i_13] [i_11] [i_7] [i_4] [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_4 - 2]);
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [i_4 - 3] [i_4] [i_4] [i_4 + 1] [i_4 + 1]))));
                        arr_55 [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)-51))))));
                    }
                }
            }
            for (unsigned short i_14 = 2; i_14 < 11; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_63 [(signed char)11] [5U] [i_0] [i_0] [(signed char)11] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_39 [i_15] [i_4] [i_0] [i_14 - 2] [i_0]));
                    var_23 = ((/* implicit */int) arr_20 [i_0] [i_4 - 3] [i_4] [i_15]);
                }
                arr_64 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_46 [i_0] [i_14] [i_4] [6] [i_4] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
    {
        for (unsigned int i_17 = 1; i_17 < 17; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_66 [i_16] [i_18]))))) >= (((/* implicit */long long int) ((unsigned int) var_5)))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (var_0)))) + (var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_71 [13LL] [13LL] [i_17 + 1] [i_17])))))))));
                }
            } 
        } 
    } 
}
