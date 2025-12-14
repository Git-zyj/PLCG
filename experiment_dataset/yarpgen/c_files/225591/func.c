/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225591
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = var_17;
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)198)) / (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_3 - 1])))) * (((/* implicit */int) max((arr_9 [i_2 - 3] [i_2 + 2] [i_3 - 1]), ((unsigned char)179))))));
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_2 - 2] [i_2] [i_2] [i_2]))));
                        arr_12 [i_0] [(unsigned char)9] [i_2] [i_2 + 4] = (unsigned char)182;
                        var_23 = (unsigned char)166;
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] = arr_11 [i_0];
                    }
                    for (unsigned char i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        arr_16 [i_2] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)130)) != (((/* implicit */int) (unsigned char)178)))) ? (((/* implicit */int) (unsigned char)167)) : ((-(((/* implicit */int) arr_3 [i_4] [i_1] [i_0])))))) ^ ((-(((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) arr_4 [i_4 - 1]))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_17 [i_2 - 2] [i_4 + 1] [i_4 - 2] [i_5] [i_5 + 1])) | (((/* implicit */int) min((arr_2 [i_0] [i_1]), (var_12)))))), ((-(((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5])) | (((/* implicit */int) (unsigned char)65))))))));
                            var_25 = (unsigned char)154;
                            var_26 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)209)) << (((((/* implicit */int) var_9)) - (151))))), (((/* implicit */int) ((unsigned char) arr_14 [i_1] [i_2 + 4] [i_4 - 1] [i_5])))));
                            arr_19 [i_2] [i_1] [i_1] [i_2 + 1] [i_2] [i_4 - 1] [i_2 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */int) max((arr_11 [i_4]), (arr_6 [i_5] [i_1] [i_2])))) - (((/* implicit */int) min((arr_7 [i_0] [i_0]), (arr_2 [i_2] [i_2])))))), (max((((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_4 [i_0])))), (((((/* implicit */int) (unsigned char)48)) ^ (((/* implicit */int) (unsigned char)0))))))));
                            var_27 = ((/* implicit */unsigned char) min(((-(((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)242)))))), (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_5 + 1] [i_2 - 3])) < (((/* implicit */int) var_7)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) arr_2 [i_2 - 2] [i_4 - 2]))));
                            var_29 = (unsigned char)204;
                        }
                    }
                    arr_23 [i_0] [i_1] [i_2] [i_2] = var_3;
                    var_30 = var_3;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 - 1]))));
                                arr_38 [i_7] [i_8] [i_9 - 2] [i_7] [i_10] [i_10] [i_11] = ((unsigned char) (!(((/* implicit */_Bool) min((arr_15 [i_7] [i_7] [i_7] [i_7]), (arr_26 [i_8]))))));
                                arr_39 [i_8] [i_9 - 1] [i_7] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_31 [i_7] [i_8] [i_9 - 1] [i_10]), (max(((unsigned char)198), ((unsigned char)247))))))));
                            }
                        } 
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned char)255), (min((var_0), (var_5))))))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_8] [(unsigned char)5]))))) : ((+(((/* implicit */int) max((arr_37 [i_7] [i_8] [i_7] [i_7] [i_8]), ((unsigned char)81))))))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_26 [i_7]), (arr_36 [i_7] [i_7] [i_8] [i_8])))) ? (((((/* implicit */_Bool) arr_7 [i_7] [i_8])) ? (((/* implicit */int) arr_7 [i_7] [i_8])) : (((/* implicit */int) (unsigned char)198)))) : (((/* implicit */int) (unsigned char)78))));
            }
        } 
    } 
    var_35 = var_7;
    var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
}
