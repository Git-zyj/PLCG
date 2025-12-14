/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53122
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [6ULL])) ? (arr_0 [(short)7]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (4368069646121061977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_2 [i_0 + 1]))) ^ (((/* implicit */int) ((((14078674427588489647ULL) % (arr_3 [i_1]))) != (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (14078674427588489647ULL))))))));
                var_13 = ((/* implicit */long long int) arr_3 [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_17 [i_5] [i_5] [i_4] [i_4] [i_5] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_2])) && (((/* implicit */_Bool) (signed char)-61))))), (((((/* implicit */_Bool) (unsigned char)189)) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_3] [i_2])))));
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned char) arr_6 [i_6] [i_6]);
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_5] [i_2] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [15ULL] [i_3] [i_4] [i_3]))))))) ^ (((long long int) (signed char)-38)))) != (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (2147483647) : (((/* implicit */int) arr_8 [i_5])))), (var_6))))));
                                var_16 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_5]);
                            }
                        }
                    } 
                } 
                arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [15LL] [i_3]) > (arr_6 [6U] [i_2]))))) & (((arr_6 [i_2] [(short)5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))))));
            }
        } 
    } 
}
