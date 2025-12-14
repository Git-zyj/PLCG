/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247272
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
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_3))) : (((var_16) ^ (((/* implicit */unsigned long long int) var_4)))))) | (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) ((2068493525U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))))))));
    var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42576))) - (3680972875725178241LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_14 [(unsigned short)3] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_2] [i_4]))))));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) min(((+((-(((/* implicit */int) arr_4 [13])))))), (((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */unsigned short) arr_6 [i_0] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */int) (short)-9113)) & (((/* implicit */int) var_8))))), (var_10))), (var_5)));
                                arr_22 [i_6] [i_5] [i_5] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned int) (short)-32760)) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_5] [i_1] [i_1] [i_0])) | (-1829323509))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        arr_35 [i_7] [i_7] [i_8] [4LL] [4LL] [i_8] = ((((/* implicit */_Bool) min(((~(var_13))), (((arr_17 [i_7]) | (((/* implicit */unsigned int) var_4))))))) ? ((+((-(arr_25 [9U]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)124))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22613)) + (((/* implicit */int) arr_4 [i_10 - 1]))))) ? (arr_0 [i_10 - 1]) : (arr_11 [i_7] [i_8] [0ULL]))) + (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)40277), (((/* implicit */unsigned short) (short)-32767)))))))))))));
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) (short)12672))));
                    }
                    for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_38 [i_8] [i_8] = ((/* implicit */unsigned int) (short)-1);
                        var_22 = ((/* implicit */int) max((-7837415276749843670LL), (((/* implicit */long long int) 3297464346U))));
                    }
                    var_23 = ((/* implicit */short) arr_24 [i_7]);
                    var_24 *= ((/* implicit */short) arr_5 [19ULL] [i_9] [i_7] [i_7]);
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((unsigned int) var_7)))));
}
