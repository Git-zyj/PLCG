/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190682
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
    var_16 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-33)))) << (((max((min((((/* implicit */unsigned int) (signed char)-33)), (var_14))), (((/* implicit */unsigned int) ((int) 3774743172U))))) - (3774743166U)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) var_7)))) && (arr_1 [i_1 + 1] [i_3 + 1])));
                                var_18 ^= ((/* implicit */short) ((arr_10 [i_1 + 1] [i_3] [i_3 + 1] [(short)8] [(short)8]) == (((/* implicit */int) (unsigned short)50406))));
                                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)15))));
                            }
                            var_20 = ((/* implicit */unsigned char) arr_3 [i_0]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (short)-17);
            }
        } 
    } 
    var_22 = ((/* implicit */short) 520224123U);
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    var_23 = (+(((unsigned int) var_11)));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) arr_21 [i_5] [i_5] [i_5]);
                                var_25 = ((/* implicit */unsigned char) arr_16 [i_7] [i_7]);
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_14 [i_5 + 1]))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [(unsigned short)12] [i_5] [i_9])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-24134)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */long long int) arr_20 [i_9] [i_9] [i_9] [i_9])) : (var_8)))))))))));
                                var_27 = ((/* implicit */short) ((((((/* implicit */long long int) 3774743172U)) % (((long long int) (short)25017)))) << (((8823618921214583524ULL) - (8823618921214583495ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
