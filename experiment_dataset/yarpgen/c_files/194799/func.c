/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194799
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_17 = min((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_8 [i_0]))))), (min((min((arr_2 [i_0]), (arr_2 [i_0]))), (((arr_8 [i_0]) >> (((11222098742418816756ULL) - (11222098742418816705ULL))))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((-603954170) < (-603954170))))))), (((((arr_2 [i_1]) >> (((/* implicit */int) arr_6 [i_3] [i_1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1])))))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) (_Bool)0);
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (max((((((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0 + 1] [i_5 - 3])) / (arr_10 [i_6] [i_5 + 1] [i_4] [i_1]))), (((arr_14 [i_0] [i_1] [i_0 + 1] [i_0 + 2] [i_0] [i_0]) / (((/* implicit */unsigned long long int) arr_19 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (((6539793797589174382ULL) | ((-(arr_18 [i_0] [i_0] [(signed char)2] [i_0] [i_0])))))));
                                var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_19 [i_6] [i_4] [i_4] [i_4] [i_0] [i_0])) / ((-(14503540936909780244ULL))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0U)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0]))) * (arr_8 [i_6])))))));
                            }
                        } 
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned long long int) ((int) (((~(arr_18 [i_1] [i_1] [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [(_Bool)1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */long long int) arr_24 [i_7]);
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-72));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7]))) : (((arr_39 [i_7] [i_7] [i_9] [i_10] [i_7]) ? (arr_26 [i_7]) : (0U)))));
                                var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) / (((unsigned int) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7]))));
                            }
                        } 
                    } 
                    var_24 = ((arr_38 [i_7] [i_7] [i_8] [(unsigned char)14] [i_8] [i_8]) << (((((/* implicit */int) (signed char)-65)) + (103))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_25 &= ((/* implicit */_Bool) ((707118003U) ^ (arr_26 [i_9])));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_13] [i_8] [i_9] [i_12] [i_9]))) : (15965010185624641223ULL)))) ? (((/* implicit */int) ((_Bool) arr_33 [i_7] [i_7] [i_13]))) : (((/* implicit */int) ((-578260869133915903LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13] [i_8] [i_13] [i_12] [i_7]))))))));
                                var_27 = ((/* implicit */_Bool) ((unsigned char) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (short)-4403))))));
                                arr_47 [i_7] [i_8] [i_9] [i_8] [i_13] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_7] [i_8] [i_9] [i_12] [i_13]))))) > (arr_33 [i_7] [i_7] [i_7])));
                            }
                        } 
                    } 
                    var_28 |= ((/* implicit */long long int) arr_33 [i_7] [i_7] [i_7]);
                }
            } 
        } 
    }
    var_29 = ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (var_0))))) & (max((((/* implicit */unsigned long long int) var_14)), (var_12)))));
}
