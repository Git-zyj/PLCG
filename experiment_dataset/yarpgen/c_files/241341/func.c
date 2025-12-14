/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241341
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned short) (!(arr_0 [i_0])));
                        arr_14 [i_3] [i_2] [i_3] [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) : (((arr_12 [i_3] [i_2] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3])))))));
                        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0])) - ((-(((/* implicit */int) arr_10 [i_0] [i_0]))))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [10ULL] [i_0])) ? (arr_11 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))));
            arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_4] [i_4])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        }
        for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [13ULL] [i_5 + 2]))) & (var_0)))) ? (var_0) : (((/* implicit */unsigned long long int) ((-2091413749) & (((/* implicit */int) (unsigned char)60)))))));
            arr_24 [12U] [i_5] = ((/* implicit */short) arr_20 [i_5] [(unsigned short)12] [i_0]);
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            arr_28 [i_0] [i_6] [i_6] = ((/* implicit */signed char) arr_11 [i_0]);
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned short i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        {
                            arr_37 [i_8] |= ((/* implicit */unsigned long long int) var_9);
                            arr_38 [i_7] [i_0] = ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            } 
        }
        arr_39 [16U] &= ((/* implicit */short) (+(1336473286U)));
    }
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        arr_43 [2] [2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_10] [(short)14] [(short)14] [i_10]))))), (((((/* implicit */_Bool) arr_29 [(signed char)0] [i_10])) ? (((/* implicit */unsigned int) arr_3 [4U] [i_10] [4U])) : (arr_33 [i_10] [i_10] [i_10] [i_10] [i_10])))))) ? (var_6) : (((/* implicit */unsigned long long int) arr_32 [i_10] [i_10] [i_10] [i_10] [i_10]))));
        arr_44 [14LL] |= ((/* implicit */unsigned char) var_6);
    }
    /* LoopNest 3 */
    for (short i_11 = 2; i_11 < 18; i_11 += 3) 
    {
        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                {
                    arr_54 [i_12] [(signed char)14] [i_13] [i_11 - 1] = ((/* implicit */int) (-(arr_46 [(unsigned char)18] [i_12])));
                    arr_55 [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(arr_47 [i_12]))) - (((/* implicit */int) arr_50 [i_13] [i_13] [i_13]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (arr_46 [i_11 - 2] [i_13])))) ? (min((arr_49 [i_12]), (((/* implicit */unsigned long long int) arr_53 [i_13] [i_12] [i_13])))) : (arr_49 [i_12])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((_Bool) var_7));
}
