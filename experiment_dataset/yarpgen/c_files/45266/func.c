/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45266
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
    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) % (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_18 = arr_0 [i_2];
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((arr_4 [i_3]) - (arr_11 [i_0] [i_1] [i_3])))))) && (((/* implicit */_Bool) (-(((((/* implicit */int) var_14)) / (((/* implicit */int) var_0)))))))));
                            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [6ULL] [(unsigned short)9])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_10 [i_2] [i_2] [(unsigned short)13])))) ? (arr_2 [i_3]) : (((((/* implicit */_Bool) (unsigned short)50539)) ? (10747472138990592731ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34203))))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned short)20] &= ((((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (arr_9 [i_0] [i_0] [i_1] [i_3]))) : (arr_11 [7ULL] [(unsigned short)15] [(unsigned short)16]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_2] [(unsigned short)16] [i_0]))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3]))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((((arr_7 [i_0] [i_0] [i_0]) * (arr_2 [i_0]))) / (arr_9 [i_0] [i_0] [i_0] [14ULL]));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_4 - 3] [i_4 - 3] [i_4])) && (((/* implicit */_Bool) arr_5 [i_4 - 2] [i_4 - 1] [i_4 - 4])))) || (((/* implicit */_Bool) arr_3 [i_0]))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (arr_15 [i_1] [i_1])));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_1);
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((14179007142834616920ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18600))))))));
}
