/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197260
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_3] = ((/* implicit */int) ((unsigned int) var_5));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_9))));
                            var_17 = ((/* implicit */int) arr_15 [i_1 - 1] [(short)12] [i_1 - 1] [i_1]);
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [(short)16] [i_3] [i_3])) ? (var_10) : (((/* implicit */int) var_14))))))))))));
                        }
                        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) ((signed char) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]));
                            arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_2] [i_3] [i_2] [i_2 + 3]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_3] [i_2 + 2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_5))));
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_3] [i_0] [i_3] [(_Bool)0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(arr_14 [i_1] [i_1 - 1] [i_1])))), (max((arr_7 [i_1] [i_1 - 1]), (((/* implicit */unsigned int) arr_14 [i_1] [i_1 - 1] [i_1]))))));
                            arr_24 [i_0] [i_3] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((6275048091084483465ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1]))))) >> ((((((((_Bool)1) ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((/* implicit */int) var_12)))) - (2972507232U)))));
                        }
                        arr_25 [3ULL] [i_3] [i_1] = ((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) (_Bool)1))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_0] [(signed char)17])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ ((-9223372036854775807LL - 1LL)))));
                    }
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_9 [i_2] [i_2 + 1] [16] [i_2 + 2] [i_2]) - (arr_9 [i_2 + 1] [i_2 + 3] [0] [i_2 + 1] [i_2 + 2])))))))));
                }
            } 
        } 
    } 
}
