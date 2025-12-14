/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230073
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_5);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) 1U));
        var_20 *= ((/* implicit */unsigned short) (+(var_6)));
        var_21 = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0]));
        var_22 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)64777))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_3] [i_1] [i_5] [i_5] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_1))))));
                                var_24 = ((/* implicit */short) ((long long int) arr_4 [i_2 - 2]));
                                arr_18 [9U] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (short)-1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) var_11);
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((long long int) var_16)))))));
                                var_27 = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-5308)) + (2147483647))) << (((arr_14 [i_1] [i_9 + 1] [i_7] [i_8] [i_9] [(short)9] [i_1]) - (8523414557240205315LL)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-5308)) + (2147483647))) << (((((((arr_14 [i_1] [i_9 + 1] [i_7] [i_8] [i_9] [(short)9] [i_1]) + (8523414557240205315LL))) + (369154795262485645LL))) - (31LL))))));
                                var_28 = ((/* implicit */long long int) ((short) arr_6 [i_9 - 1] [i_9 - 1]));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) (unsigned short)42258);
                    var_30 -= ((/* implicit */_Bool) ((arr_11 [i_1] [i_1] [i_7]) + (271517291968537911LL)));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [5LL] [15U]))) ^ (var_0)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_10 = 3; i_10 < 16; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 3; i_12 < 15; i_12 += 1) 
            {
                {
                    var_32 ^= ((/* implicit */long long int) ((_Bool) ((_Bool) (-(((/* implicit */int) arr_27 [(unsigned short)0] [i_10 - 2] [(unsigned short)0] [i_12] [(unsigned short)0]))))));
                    arr_36 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_16 [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 1]), (((/* implicit */short) arr_13 [i_10] [20LL] [i_11] [i_11] [i_12]))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (short)-8663)) - (((/* implicit */int) arr_30 [i_12])))))) : (((((/* implicit */int) arr_30 [i_12 - 3])) + (((/* implicit */int) (unsigned short)15))))));
                    arr_37 [i_11] [i_11] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_32 [i_10 - 1])) : (((/* implicit */int) arr_32 [i_10 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 17; i_14 += 1) 
                        {
                            {
                                arr_43 [i_13] [i_13] [i_13] [8LL] [i_13] [(_Bool)1] &= ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_13] [i_13] [i_13] [(short)11] [i_13])))))), (max((var_12), (((/* implicit */long long int) (short)-6745)))))));
                                arr_44 [i_11] [i_13] [i_12] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((-6352388049621056464LL), (arr_15 [i_11] [i_11] [i_12]))), (max((arr_9 [i_13] [i_12] [i_10]), (((/* implicit */long long int) (unsigned short)65520))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) arr_32 [i_10])))))))) : (((/* implicit */int) ((unsigned short) (+(var_6)))))));
                                arr_45 [i_10] [i_10] [i_11] [i_10] = (-((-(((unsigned int) var_3)))));
                            }
                        } 
                    } 
                    arr_46 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2086212191U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15986))))) < (((((/* implicit */_Bool) 576460752303423488LL)) ? (arr_7 [i_10 + 2] [i_11]) : (var_6))))));
                }
            } 
        } 
    } 
    var_33 |= ((/* implicit */short) ((((long long int) ((var_14) << (((5924450908325171282LL) - (5924450908325171268LL)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((unsigned int) ((((unsigned int) var_15)) >= (((unsigned int) 271517291968537911LL))))))));
}
