/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191611
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) var_11);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_13 [i_0] &= (~(((/* implicit */int) arr_4 [i_2] [i_3])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) var_8);
                            var_16 = ((/* implicit */unsigned int) var_12);
                            var_17 = ((/* implicit */long long int) 3047478547U);
                            arr_18 [i_4] [i_3] [i_2] [i_1] [i_0] = var_10;
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32123)))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((1247488758U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41623)))))) ? (((/* implicit */int) (unsigned short)23889)) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_19 = ((/* implicit */unsigned int) (((-(arr_16 [i_0] [i_1] [i_2 + 3] [i_3] [i_5]))) != (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                        arr_22 [i_0] = ((short) (+(arr_20 [i_2 + 1])));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_20 = ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1])))));
                        var_21 = ((/* implicit */short) (_Bool)1);
                        var_22 *= ((/* implicit */short) (((~(((((/* implicit */_Bool) (short)-17483)) ? (((/* implicit */unsigned long long int) 1247488718U)) : (11988534335938829092ULL))))) ^ (((/* implicit */unsigned long long int) (~((~(257049567))))))));
                        arr_25 [5] [i_1] [i_2] [i_2] [i_1] [i_6] = ((/* implicit */long long int) (short)32123);
                    }
                    arr_26 [(short)12] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_2 [i_2 + 3]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_35 [i_9] [i_7] = ((/* implicit */short) var_10);
                    arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_8 [i_7] [i_7] [i_9])))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23889))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 11; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                {
                    arr_41 [i_7] [(unsigned short)6] [7U] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
                    var_23 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_10 - 2] [i_10 - 2] [i_11] [1ULL]))) * (var_11))), (((/* implicit */unsigned long long int) arr_29 [i_10] [(short)1]))));
                }
            } 
        } 
    }
}
