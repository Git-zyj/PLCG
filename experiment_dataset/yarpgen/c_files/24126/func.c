/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24126
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((var_9), (var_9))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : ((((+(((/* implicit */int) var_0)))) % (((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] = (-(arr_4 [i_4] [i_3] [i_2]));
                            var_14 = (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) arr_4 [i_1] [i_2] [i_3])) : (arr_5 [i_1]))));
                        }
                        for (short i_5 = 1; i_5 < 24; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) ((var_2) % (((/* implicit */long long int) (-((+(arr_4 [i_3] [i_3] [i_2]))))))));
                            var_16 = ((/* implicit */unsigned char) arr_13 [i_5] [i_3] [i_0] [i_1] [i_0]);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_5 - 1] [i_1] [i_1] [i_3 - 3])), (((((/* implicit */int) arr_6 [i_1] [i_3])) - (((/* implicit */int) var_11))))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_0 [i_0] [i_5 + 1])) - (22)))))))));
                            arr_17 [i_1] [18LL] = ((/* implicit */signed char) ((unsigned long long int) max((arr_8 [i_5 - 1] [i_1] [i_1] [i_1]), (arr_0 [i_0] [i_0]))));
                        }
                        arr_18 [i_0] [i_1] [(signed char)16] [i_3 - 1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_22 [i_1] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 18446744073709551606ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-3973))))), (((/* implicit */long long int) arr_20 [i_1] [i_1 + 3] [i_1 + 2] [i_6]))));
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
                    }
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_2])) % (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_21 [i_1])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_1 + 3] [i_2])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1])))))) | ((~(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_11 [i_0] [i_1] [i_1])))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((((arr_5 [i_0]) | (arr_5 [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0])))), (arr_4 [i_0] [i_0] [i_0]))))));
        var_21 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [(short)23] [i_0] [i_0]);
        var_22 = ((/* implicit */_Bool) min(((short)-3973), (((/* implicit */short) (signed char)118))));
    }
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 4; i_8 < 12; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    var_23 |= ((/* implicit */unsigned long long int) var_2);
                    arr_34 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_13 [i_9] [i_9] [14LL] [i_8] [i_7])))))))));
                }
            } 
        } 
        arr_35 [i_7] [i_7] = ((/* implicit */unsigned short) arr_2 [i_7] [i_7]);
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (short i_12 = 4; i_12 < 9; i_12 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_10])) | (((/* implicit */int) arr_13 [i_7] [i_7] [i_11] [i_7] [i_12]))))))) ? ((-(((/* implicit */int) arr_26 [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7]))) : (arr_4 [i_7] [i_10] [i_12])))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_13 [i_12 + 3] [i_10] [i_11] [i_12] [i_7])))) ? (((/* implicit */int) ((_Bool) arr_13 [i_12 + 4] [i_10] [i_10] [i_12] [i_11]))) : (((((/* implicit */_Bool) arr_0 [i_7] [i_12 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_12 - 2] [i_12] [i_11] [i_12] [i_7]))))));
                    }
                } 
            } 
        } 
        arr_43 [i_7] = ((/* implicit */unsigned int) arr_3 [i_7]);
    }
    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 4) 
    {
        var_26 = ((/* implicit */short) min(((-(((/* implicit */int) arr_15 [(unsigned short)4] [i_13 - 3] [i_13 - 3] [i_13 - 3])))), (((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_13 - 2] [i_13 - 2] [i_13 + 1])) ? (((/* implicit */int) arr_15 [16U] [i_13 - 3] [i_13 - 2] [i_13 - 2])) : (((/* implicit */int) arr_15 [(unsigned short)16] [i_13 - 2] [i_13 - 3] [i_13 - 3]))))));
        var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [(signed char)2] [i_13 - 2])) ? (((((/* implicit */_Bool) arr_6 [2U] [i_13])) ? (var_2) : (arr_5 [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [12U] [i_13 - 1] [i_13] [i_13 - 1]))))))))));
    }
    var_28 = ((/* implicit */long long int) var_5);
}
