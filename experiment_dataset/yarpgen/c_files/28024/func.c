/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28024
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 *= var_0;
        var_13 = (signed char)-120;
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_15 = arr_5 [i_1];
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1 + 3] [i_2])) : (((/* implicit */int) (signed char)120))));
                            var_17 = (signed char)124;
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) (signed char)127)) - (123)))));
                            var_19 -= arr_2 [i_1 - 1];
                        }
                        for (signed char i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_1 + 3] [i_2] [i_3] [i_4]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 2]))));
                            arr_23 [i_6] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_19 [i_1 - 1]))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (signed char)-10))));
                            arr_24 [i_1] [i_2] [i_3] [i_4] [i_1] [i_1] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_6 - 3] [i_6 - 1] [i_6 + 1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_16 [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_16 [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_1 + 1] [i_1 + 2]))));
                        }
                        var_23 = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_12 [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) - (92)))))) : (((/* implicit */signed char) ((((/* implicit */int) var_3)) >> (((((((/* implicit */int) arr_12 [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) - (92))) + (92))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_7])) | (((/* implicit */int) arr_3 [i_7])))))));
                            var_25 = ((signed char) (!(((/* implicit */_Bool) arr_4 [i_4]))));
                            arr_27 [(signed char)14] [i_4] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
    {
        var_26 = (signed char)-3;
        var_27 = ((/* implicit */signed char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-1))))))), (((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) (signed char)-1))))));
    }
    var_28 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) (signed char)127)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) var_6))))));
}
