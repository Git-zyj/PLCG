/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218292
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-120)), (arr_8 [i_2] [i_1 - 1] [i_4 + 3]))))));
                                arr_14 [i_0] [i_1 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) min((var_5), (arr_4 [i_1 - 1]))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) max((((unsigned short) ((signed char) (signed char)99))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
                                var_15 = var_10;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [(_Bool)1] [i_5] [i_6] &= ((/* implicit */signed char) min((arr_12 [i_0] [i_1]), (((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [(signed char)12])) == (((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) (_Bool)0))))))));
                                arr_21 [i_6] [i_1] [i_0] [i_5 - 1] [i_6] [i_1 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                                var_16 = (signed char)127;
                                arr_22 [i_0] [i_1] [i_1 - 1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [(signed char)13] [i_1] [(_Bool)1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */unsigned short) var_11);
                        arr_28 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_4);
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_0))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_31 [i_1] [i_1] [i_0] [(signed char)23] [(signed char)3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_8 [(unsigned short)23] [i_1] [i_1 - 1]))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)19319))))) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) var_5)))))));
                    }
                    var_19 = var_5;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46234)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))) : (min((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)61163)))), (((/* implicit */int) (unsigned short)65535)))))))));
}
