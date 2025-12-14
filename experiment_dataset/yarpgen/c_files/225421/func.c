/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225421
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
    var_18 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_16))) <= (max((((/* implicit */long long int) (short)29102)), (1722657715907198430LL)))))) <= (((/* implicit */int) var_7))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0)));
    var_20 |= ((/* implicit */short) var_5);
    var_21 = ((/* implicit */unsigned int) (unsigned char)125);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((((arr_2 [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (max((var_1), (var_1))) : (((/* implicit */int) ((1620092251U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) <= (((/* implicit */int) max((((arr_5 [i_1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))))), (((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))))))))));
                            var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (unsigned char)43)))))), (((int) min((var_5), (((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [(short)16] [i_0])))))));
                            arr_12 [i_2] [i_1] = ((/* implicit */unsigned short) max(((+(arr_1 [i_0 + 2]))), (((((/* implicit */_Bool) ((int) arr_2 [i_2 + 2]))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_2 + 2] [i_2])) : (((/* implicit */int) (!((_Bool)1))))))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_0 + 2] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */int) (short)32760)), (((arr_0 [i_0 + 1]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
            var_23 = ((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_7)))))) <= (816721397)));
        }
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-672010459) : (((/* implicit */int) (unsigned short)15861))))) ? (((/* implicit */long long int) 672010459)) : ((-(-4038639049875702820LL))))))));
            arr_17 [i_5] [i_5] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_5 + 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_0 + 2])), (var_15)))) <= (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_9 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_0] [i_0 - 1])))))));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))) ? (((int) arr_7 [i_5] [i_5] [i_5] [i_5] [(short)14] [i_0])) : (((/* implicit */int) ((unsigned short) 672010443)))));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_6 - 1])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_14)))), ((+(((/* implicit */int) arr_20 [i_6 - 1] [i_7 + 1]))))));
                        var_26 = ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
            arr_24 [i_5] [i_0 - 2] = ((/* implicit */_Bool) (short)12126);
        }
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                for (unsigned char i_10 = 3; i_10 < 19; i_10 += 4) 
                {
                    {
                        arr_31 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) -515446147)))));
                        arr_32 [i_0] [i_8] [i_9] = min((((/* implicit */int) ((-6250884718568285008LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129)))))), ((~(((/* implicit */int) arr_4 [i_10] [i_10 - 2] [i_10 - 2])))));
                    }
                } 
            } 
            var_27 -= ((/* implicit */_Bool) (unsigned char)192);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_35 [9U] [i_11] [i_0] = ((/* implicit */unsigned int) arr_3 [i_11]);
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (unsigned char i_13 = 2; i_13 < 20; i_13 += 2) 
                {
                    {
                        var_28 |= (+(min((524287), (var_5))));
                        arr_42 [i_0] [i_11] [i_12] [i_13] &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -487014653)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)66)))) : (((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */int) (short)-1)) : (515446147)))))) <= (min((4038639049875702819LL), (((/* implicit */long long int) (short)32749))))));
                    }
                } 
            } 
        }
        arr_43 [i_0] [i_0] = ((/* implicit */int) var_0);
        var_29 = ((/* implicit */unsigned short) arr_5 [i_0 - 2] [i_0 - 2]);
    }
}
