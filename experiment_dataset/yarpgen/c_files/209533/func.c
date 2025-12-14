/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209533
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                arr_7 [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0]))));
                var_10 ^= ((/* implicit */int) ((arr_3 [i_0] [i_0]) / (((/* implicit */long long int) -839761443))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */short) max((max((9223372036854775807LL), (((/* implicit */long long int) (signed char)13)))), (((/* implicit */long long int) ((int) arr_14 [i_0] [i_1 + 1] [i_0] [i_3] [i_3] [i_0])))));
                            var_12 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (signed char i_5 = 1; i_5 < 6; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    var_13 = var_0;
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 7; i_8 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)24327)), (-1919060524087029889LL)))) + (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])) ? (var_7) : (arr_16 [i_4])))))) ? (arr_5 [i_6]) : (((/* implicit */unsigned long long int) (+(-6372733706046479025LL))))));
                                var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (6372733706046479025LL) : (6489589403640004235LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7 - 1] [i_7] [i_8 + 1] [i_7] [i_5 - 1] [i_7]))) : (arr_23 [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_4] [i_8] [i_8 + 1]))), ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8] [i_7] [12ULL] [i_5]))) : (var_7)))))));
                                arr_29 [i_4] [2ULL] [i_5 + 1] [i_6] [(signed char)3] [(signed char)3] [i_8] = ((/* implicit */int) max((var_7), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_9 [i_6]), ((signed char)-11)))))))));
                                var_16 = ((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_6] [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 6372733706046479025LL)) > (var_9))))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_6] [24]))) + (6372733706046479029LL))) / (max((((/* implicit */long long int) (unsigned short)2309)), (-6372733706046479048LL))))));
                            }
                        } 
                    } 
                    arr_30 [i_6] [i_6] [i_4] = var_1;
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7680))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_3);
}
