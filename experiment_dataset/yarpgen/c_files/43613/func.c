/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43613
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-17654))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (arr_6 [i_1])));
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) var_1))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = (-(arr_7 [i_0 - 2]));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 3; i_4 < 17; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_10 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_4] [i_4 + 2] [i_4] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4 + 1] [i_4] [i_4] [i_5])) : (arr_17 [i_4 + 1] [i_4 - 2])))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6383786300665822816ULL)) ? (arr_17 [i_4 - 2] [i_5]) : (((/* implicit */unsigned long long int) var_3))))) ? (min((arr_17 [i_4 + 1] [i_4]), (arr_17 [i_4 - 1] [i_5]))) : (max((((/* implicit */unsigned long long int) var_7)), (arr_17 [i_4 - 1] [i_5]))))))));
                var_12 = ((/* implicit */unsigned char) var_5);
                arr_19 [i_5] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 1493026980731704387LL)) ? (((/* implicit */int) (short)24342)) : (((/* implicit */int) (short)-19264)))));
                var_13 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_18 [(unsigned char)14] [i_5]), (arr_18 [8LL] [i_4])))), (((((/* implicit */_Bool) (short)4646)) ? (12062957773043728785ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)-2631), (((/* implicit */short) (_Bool)1)))))));
}
