/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52022
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 1] [(_Bool)1])))) ? (((/* implicit */int) arr_14 [i_0] [i_4 + 1] [i_2] [i_0 - 1] [i_4 + 1] [i_1] [i_0])) : (min((arr_12 [5ULL] [i_2] [0U] [i_0 - 1]), (((/* implicit */int) (_Bool)1))))))) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_15 [i_4] [(_Bool)1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) (+(((long long int) var_6))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            arr_26 [i_5] [i_5] [i_7] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [1] [i_7] [i_6] [i_6] [i_6] [i_5]))) == (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_5]))))) % (arr_9 [i_5] [i_7] [i_7])))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_2))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 12; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                arr_37 [i_5] [i_6] [i_9] [i_11] [i_10 - 2] [i_10] [i_11 + 1] = ((/* implicit */unsigned long long int) arr_2 [i_5]);
                                arr_38 [i_11 + 1] [i_11] [i_5] [i_11] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_10 + 2] [i_10 - 2])) && (((/* implicit */_Bool) var_3))));
                                var_21 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_39 [4] [i_5] [i_5] = ((/* implicit */unsigned char) var_13);
                }
            }
        } 
    } 
}
