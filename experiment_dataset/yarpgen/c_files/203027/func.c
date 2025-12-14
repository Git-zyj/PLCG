/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203027
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((signed char) arr_5 [i_3])))));
                        var_12 -= ((/* implicit */signed char) ((((arr_6 [i_3] [i_2] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))));
                    }
                } 
            } 
            arr_11 [i_0] [i_1] &= ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_6 [i_0] [i_0] [i_1] [i_0]));
            var_13 = ((/* implicit */_Bool) min((var_13), (((_Bool) arr_9 [i_0] [i_1] [1ULL]))));
        }
        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (arr_7 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (signed char i_6 = 2; i_6 < 7; i_6 += 2) 
                {
                    {
                        arr_20 [i_0] [i_4] [i_4] = ((/* implicit */short) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_6 + 2])))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_5] [i_5] [i_4] [i_7] [i_5] = ((/* implicit */signed char) var_6);
                            arr_25 [i_0] [i_7] [i_4 + 1] [i_4] [i_7 + 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_4 + 1] [i_7] [i_7 - 1] [i_7 - 1]))));
                        }
                    }
                } 
            } 
            var_14 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_16 [i_4] [i_0] [i_0] [i_0])) + (2147483647))) << (((arr_23 [i_4] [i_0] [i_0] [i_0]) - (15210961754200975383ULL)))))));
            arr_26 [i_0] [(signed char)1] [i_4] = ((((/* implicit */int) arr_5 [i_4 + 1])) < (((/* implicit */int) arr_5 [i_4 + 1])));
            arr_27 [i_4] = ((arr_15 [i_0] [i_0] [i_0] [i_0]) / (arr_15 [i_0] [i_4 + 1] [i_4] [i_4]));
            var_15 -= ((signed char) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            var_16 = ((/* implicit */long long int) arr_19 [i_0] [i_8] [(short)8] [i_8] [i_8]);
            arr_30 [i_0] = ((/* implicit */signed char) (~(arr_10 [i_0] [i_8] [i_0] [i_8] [i_8])));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_17 = ((/* implicit */_Bool) var_7);
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_18 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_12] [i_11])))) / (var_3))) < (((unsigned long long int) var_5))));
                        var_19 += arr_23 [i_9] [i_10] [i_11] [i_12];
                        arr_42 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_12])) || (((/* implicit */_Bool) arr_4 [i_10] [i_10] [i_11]))))) >> (((var_7) - (222062618466320865ULL)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) arr_10 [i_9] [(signed char)9] [i_9] [i_9] [i_9])) & (arr_18 [i_9] [i_9] [i_9])))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (long long int i_14 = 3; i_14 < 8; i_14 += 3) 
            {
                {
                    arr_48 [i_9] [i_13] [i_14] = ((/* implicit */signed char) (-(max(((+(var_8))), (arr_34 [i_9])))));
                    arr_49 [i_9] [i_9] [i_14] [i_14 + 1] = ((/* implicit */signed char) (((~(var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_14 + 1] [i_14 - 3] [i_14 - 3] [i_14 - 1]), (arr_16 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 3])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_39 [i_15] [i_15 + 1] [i_15]))))))));
                        var_22 = ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_22 [i_9] [i_9]))));
                        var_23 = min((((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_9] [i_9])) != (((/* implicit */int) arr_7 [i_15] [i_15]))))), (((signed char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_35 [i_15] [i_9]))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_7))));
}
