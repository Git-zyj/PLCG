/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239255
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) - (min((var_8), (((/* implicit */long long int) var_9))))))) && (((/* implicit */_Bool) min((((unsigned int) -1)), (max((((/* implicit */unsigned int) (unsigned short)13)), (var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) (-(((-1318944429) / (max((((/* implicit */int) (short)-31037)), (-1318944458)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (((arr_8 [i_3] [i_2] [i_0]) - (arr_5 [i_0] [i_1])))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_0 + 4] [i_2] [i_0 + 1] [i_3])) : (((/* implicit */int) (short)32762)))))));
                                arr_16 [i_0 + 3] [i_2] [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (768628366) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((arr_0 [i_3] [i_4]) == (arr_3 [i_0] [(short)16] [(short)16])))) : (((int) var_0)));
                                arr_17 [i_0 + 4] [i_2] [i_2] [i_2] [i_2] = (~(((/* implicit */int) arr_13 [i_1] [15U] [i_2] [15U])));
                                arr_18 [i_0 - 3] [i_2] [i_2] [i_2] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)123)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 17; i_5 += 3) 
                            {
                                arr_23 [i_0 + 3] [i_0 + 3] [i_2] [5] [(unsigned char)5] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 15326510870136407659ULL)) ? (6971252414945165381LL) : (((/* implicit */long long int) -2147483636)))));
                                arr_24 [i_0 + 4] [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */short) arr_20 [i_5] [i_3] [4LL] [i_0 - 1] [i_0 - 1]);
                                var_16 = arr_4 [i_2] [i_1];
                                var_17 = ((/* implicit */int) ((signed char) ((long long int) var_9)));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23354)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (signed char)31))));
                            }
                            var_19 = ((/* implicit */signed char) min((((/* implicit */int) arr_12 [i_3] [i_2] [i_2] [i_1] [i_0])), ((+(((/* implicit */int) max((var_6), ((unsigned short)65504))))))));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                            {
                                var_20 = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_15 [i_0 + 3] [i_0 + 4] [i_1] [i_0 + 3] [i_1] [i_3] [i_6])))), (((((/* implicit */_Bool) min((var_9), ((signed char)4)))) || (var_0)))));
                                arr_29 [i_2] = ((int) (((((_Bool)0) ? (arr_5 [i_0 - 3] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                            arr_30 [i_0] [i_1] [(unsigned short)18] = ((/* implicit */unsigned short) var_7);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 2) 
                            {
                                arr_35 [i_0 - 2] [i_1] [i_1] [i_3] [i_7] [i_7] [i_7] = (unsigned short)0;
                                arr_36 [i_7 - 2] [(signed char)8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0 - 3])) ? (((/* implicit */int) arr_21 [i_7 - 3] [i_7] [i_3] [i_3] [i_0 + 1])) : (1701350491)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
