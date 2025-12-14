/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29222
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
    var_13 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)240))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((_Bool) 1688523224));
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) (-(arr_1 [i_0] [i_0])));
        arr_7 [i_0] [9] = ((/* implicit */unsigned long long int) -2836996156574327857LL);
        /* LoopSeq 4 */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) max(((unsigned char)174), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
            var_14 *= ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) -4668136617413590250LL)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)7936)))))), ((+(((/* implicit */int) (_Bool)0))))));
            arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])) ? (((((/* implicit */long long int) var_4)) & (arr_1 [i_0] [i_2 + 2]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)186)) | (((/* implicit */int) (unsigned char)203)))))));
        }
        for (short i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            arr_16 [i_0] [(signed char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1688523224)) ? (((/* implicit */int) arr_3 [i_3 - 2] [i_3 + 1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) var_10)) + (9318))))) : (((/* implicit */int) (_Bool)1))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 2986326710517383989LL))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? ((+(arr_9 [i_4 - 1] [i_5 - 1] [i_5 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_17 = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
            } 
            arr_29 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (!(arr_21 [i_0] [i_4 - 1] [i_4] [i_0]))))));
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -1688523225);
            /* LoopSeq 1 */
            for (unsigned int i_9 = 4; i_9 < 11; i_9 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    arr_42 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_27 [i_0] [i_9])) ? (((/* implicit */int) arr_40 [i_0])) : (var_8)))))) ? (min((((/* implicit */unsigned int) arr_36 [i_10 - 1] [i_9] [i_8])), ((+(arr_20 [(_Bool)1]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)18325)))))));
                    var_18 *= ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (min(((-(((/* implicit */int) (signed char)-3)))), (((/* implicit */int) (unsigned short)2371))))));
                }
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) | (((/* implicit */int) var_12))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_48 [i_11] [i_8] [i_9] [i_11 - 1] [i_12] = ((/* implicit */signed char) (~((~(((/* implicit */int) min((var_1), (var_1))))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) (~(arr_44 [i_12 - 1] [i_11 + 2] [i_9 - 1] [i_9 - 3] [i_9])));
                    }
                }
                arr_50 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) << (((min((arr_24 [6] [i_9]), (arr_24 [i_0] [i_9]))) - (4116051397223069022LL)))));
            }
        }
        arr_51 [i_0] [i_0] = min((((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */long long int) max((-1213054832), (((/* implicit */int) (_Bool)0))))), (2836996156574327857LL))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                arr_58 [i_13] [i_13] [(_Bool)1] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)63))))));
                arr_59 [i_14] [12] [12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)0)))))))));
                arr_60 [(_Bool)1] [i_14] [8] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_53 [i_13] [i_14]))))));
            }
        } 
    } 
}
