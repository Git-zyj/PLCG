/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191741
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((var_15) != (515347218U)))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_14)), (arr_3 [i_0])))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_7 [10U] [(unsigned char)16] [i_2] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0]))) : (((/* implicit */int) min(((_Bool)1), (arr_5 [i_1] [i_1] [i_1]))))))), (var_15)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_0] [i_3] [i_3] [4U] [i_3] = ((/* implicit */unsigned int) (_Bool)0);
                                var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1]))))) || (((/* implicit */_Bool) max((arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1]), (arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_0 [i_2] [i_4 - 1]))), (1281532492U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_4]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_2] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_0] [i_3] [i_4 + 1]))) : (((0U) << (((/* implicit */int) arr_1 [i_0]))))))));
                                var_23 = min((((/* implicit */int) arr_4 [i_0])), (min((((/* implicit */int) arr_2 [i_0] [i_3])), (((int) (short)579)))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) != (1U)))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [1ULL] [i_0]))))) : (((((/* implicit */_Bool) -233628976)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [(_Bool)1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_0] [(unsigned char)13])))))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [(short)12] [i_0]) : (((/* implicit */int) arr_16 [i_1])))))));
                    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_7)))));
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [(unsigned char)9]) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_20 [0ULL] [i_0] [i_1] [i_6]))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)18);
                }
            }
        } 
    } 
    var_27 -= ((/* implicit */signed char) (((!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13)))))) ? (((/* implicit */int) ((short) var_11))) : (((((/* implicit */int) (short)-1)) / (((int) (short)-570))))));
}
