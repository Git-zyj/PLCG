/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190921
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (var_3)));
    var_14 = ((var_12) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1379824182)) >= (544401942157674243ULL))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((short)19309), (((/* implicit */short) (signed char)127))))), (var_2)))) ? (var_11) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-5563)) + (2147483647))) >> (((5006957890129156335LL) - (5006957890129156322LL)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((signed char) ((((0ULL) * (18014398509481952ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)19309))) - (0LL))))));
                arr_5 [5ULL] [i_0] [i_1] = ((/* implicit */long long int) ((int) max((arr_0 [i_1]), (arr_0 [i_1]))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    var_16 ^= ((/* implicit */unsigned long long int) arr_7 [0U] [i_2 - 1]);
                    var_17 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) arr_6 [i_0] [i_2 - 1] [i_2 - 1]))), (((((/* implicit */_Bool) arr_3 [10] [i_2 - 1] [10])) ? (arr_3 [(_Bool)1] [i_2 + 1] [(_Bool)1]) : (arr_3 [4LL] [i_2 + 1] [4LL])))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((arr_0 [i_0]) + (2147483647))) << (((min((min((((/* implicit */unsigned long long int) var_10)), (arr_3 [(signed char)4] [(_Bool)1] [6LL]))), (((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [(signed char)10]))))) - (1740712263569932780ULL))))))));
                }
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_3] &= ((/* implicit */signed char) (+(((arr_0 [i_1]) - (arr_0 [i_1])))));
                    arr_12 [i_3] [i_1] [1LL] = ((/* implicit */unsigned long long int) ((long long int) -4209674049151622654LL));
                    arr_13 [i_1] [5U] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3]))))), (arr_6 [i_0] [i_1] [i_3])));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 1ULL)) ? (10435851216587349611ULL) : (((/* implicit */unsigned long long int) 0LL))));
                    var_20 = max((((/* implicit */long long int) arr_9 [i_0] [i_1] [7LL] [i_3])), (((long long int) ((_Bool) arr_3 [i_1] [i_0] [i_1]))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */int) var_8);
                arr_19 [i_4] [i_4 + 1] [i_4] = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-80)))) >> (0ULL)));
            }
        } 
    } 
}
