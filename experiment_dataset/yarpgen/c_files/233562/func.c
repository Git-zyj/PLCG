/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233562
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) * (arr_2 [i_1 - 1]))));
                var_16 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_17 = ((/* implicit */short) min((var_17), (var_0)));
                    var_18 = ((/* implicit */_Bool) (signed char)99);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((long long int) 3441333005643729301ULL)))));
                        arr_8 [i_0] [i_1 - 1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_2])) && (((/* implicit */_Bool) arr_5 [(unsigned char)1] [i_2] [i_2] [i_2]))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 23; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max(((((_Bool)1) ? (max((var_3), (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) / (var_3))))), (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) arr_10 [i_4])))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4 + 2]))))) ? (max((((/* implicit */unsigned long long int) arr_12 [18ULL])), (arr_14 [i_4] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((arr_11 [(signed char)6]), (arr_11 [(short)2])))))))))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) arr_10 [16ULL]))), (arr_11 [6LL]))))));
            }
        } 
    } 
    var_24 = max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))));
}
