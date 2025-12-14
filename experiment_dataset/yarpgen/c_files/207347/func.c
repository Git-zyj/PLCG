/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207347
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 16382U))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)53)))))));
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (arr_7 [i_1 - 2] [i_1 - 2] [i_3 - 2] [i_1 - 2] [i_3 + 2])));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) (+(((/* implicit */int) min((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_0] [i_0]), (arr_8 [i_1 + 2] [i_1 - 2] [i_1 + 2] [(signed char)12] [10]))))));
                arr_10 [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))), (arr_5 [i_0] [i_1 - 2] [i_1 - 1] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_12 [i_5] [i_5]), (arr_12 [i_5] [i_5]))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [19ULL] [i_5]))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]))) : ((-(arr_7 [16U] [i_6] [i_6] [i_6] [i_6]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            arr_19 [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_6]))));
            arr_20 [(short)10] [i_7] = ((/* implicit */_Bool) arr_1 [i_6] [i_7]);
            var_17 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_8 [i_6] [(short)20] [i_7] [18ULL] [i_7]))))));
            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_6] [i_6]))));
            var_19 = ((/* implicit */int) ((long long int) 421350530));
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 19; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    {
                        arr_30 [7LL] [i_8] [(unsigned char)17] = ((/* implicit */long long int) (~(arr_5 [i_6] [i_8] [i_9 - 2] [i_10])));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~((~(arr_5 [i_9] [i_9] [i_9] [i_9]))))))));
                        var_21 = ((/* implicit */_Bool) (+(4294967295U)));
                        var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) arr_26 [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2])) ? (arr_26 [i_9] [i_9 - 1] [i_9 - 2] [i_9]) : (arr_26 [i_9] [i_9 - 1] [i_9 - 2] [i_9])))));
                        var_23 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_9 + 2]))));
                    }
                } 
            } 
            var_24 -= (!(((/* implicit */_Bool) -421350530)));
            var_25 = (+(arr_7 [i_6] [i_6] [i_6] [i_6] [i_6]));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            for (short i_12 = 3; i_12 < 20; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_12 + 1])) ? (((/* implicit */int) arr_16 [i_12 + 1])) : (((/* implicit */int) arr_29 [i_12 - 3]))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)18916))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (5384458889758164788LL)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            {
                                arr_43 [i_14] [i_14] [i_12] [i_14] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_6] [i_6]))));
                                arr_44 [(unsigned char)19] [i_14] [i_12 - 1] [i_14] [i_15] = ((unsigned char) ((((/* implicit */_Bool) arr_37 [i_15] [i_6] [i_11] [i_6])) ? (arr_35 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) arr_38 [i_6] [i_14] [i_12]))));
                                var_28 ^= ((/* implicit */signed char) ((int) arr_9 [(unsigned char)20] [16LL] [(_Bool)1] [i_14] [(_Bool)1] [i_14 - 2]));
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_2 [i_11])))))))));
                                var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_12 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_31 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((var_0), (var_6)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_9))))));
    var_32 = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
}
