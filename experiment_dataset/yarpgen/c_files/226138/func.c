/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226138
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
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_2)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) var_4)), (var_18)))))) ^ (min((((/* implicit */unsigned long long int) ((arr_0 [(short)13]) | (((/* implicit */unsigned int) var_5))))), (max((var_8), (arr_1 [i_0]))))));
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (short)32747)) > (((/* implicit */int) (short)32751)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_3 [i_1]) != (arr_0 [i_1]))))));
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_23 = ((/* implicit */long long int) (-(arr_3 [i_2 - 1])));
        /* LoopNest 3 */
        for (unsigned int i_3 = 4; i_3 < 9; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_24 = ((min((((/* implicit */unsigned long long int) max((arr_9 [i_3]), (((/* implicit */short) var_6))))), (max((arr_11 [i_3] [i_3] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_4] [i_5])))))) - (((/* implicit */unsigned long long int) var_1)));
                        arr_17 [i_2 - 1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) var_4);
                        arr_18 [i_3] [i_3 - 2] [i_3] [i_3] = ((/* implicit */int) (((+(arr_15 [i_2 - 1] [i_2] [i_3] [i_3 - 3] [i_4 - 2] [i_4]))) != (arr_15 [i_2 + 1] [i_2 + 1] [i_2] [i_3 - 2] [i_4 + 1] [i_5])));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) var_2);
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((short) (+((+(arr_1 [i_6]))))));
        var_27 = ((/* implicit */_Bool) max((((max((arr_15 [i_6] [2U] [i_6] [i_6] [i_6] [i_6]), (arr_0 [i_6]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_10 [i_6] [i_6]), (((/* implicit */short) arr_12 [i_6] [2LL]))))) | (((((/* implicit */int) arr_14 [i_6])) >> (((arr_1 [i_6]) - (17862188973644828907ULL))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_26 [i_6] = ((/* implicit */short) var_1);
            arr_27 [i_6] [i_6] [i_6] = ((/* implicit */short) arr_11 [(short)10] [(short)10] [i_7]);
        }
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */int) arr_28 [i_8]);
        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8]))));
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            {
                var_30 = ((/* implicit */short) (-(((((arr_32 [2U] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_9] [i_10]))))) >> (((((((/* implicit */int) arr_33 [i_9] [i_10])) + (((/* implicit */int) arr_30 [i_9 - 1] [i_10])))) - (274)))))));
                var_31 = (~((+(((/* implicit */int) ((arr_32 [i_9] [i_9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_9] [i_9 - 1])))))))));
                arr_34 [i_9 - 1] [i_9] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-32748))));
            }
        } 
    } 
}
