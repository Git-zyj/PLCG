/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47337
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
    var_11 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [3U] [i_0 + 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (var_6) : (((/* implicit */int) (unsigned short)65531))))) && (((/* implicit */_Bool) (short)-18407)))))) : (min((((/* implicit */unsigned int) var_3)), (arr_6 [i_0] [i_0])))));
                    arr_8 [i_0] [i_0 + 1] &= ((/* implicit */short) arr_4 [(unsigned short)14] [(unsigned short)2]);
                    arr_9 [(signed char)7] [(signed char)7] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [(short)20] [i_0] [i_0] [i_0 - 1]), (var_4)))) ? ((~(((((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1] [i_1])) | (arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (signed char)107)))))));
                    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3])))))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [i_0] [i_0])) ? (arr_5 [i_0 - 1] [i_0 - 1] [21] [i_0]) : (arr_5 [i_0 + 3] [17] [i_0 - 2] [(short)8]))) : (((((/* implicit */int) (unsigned short)1)) >> (((arr_5 [i_0] [i_0] [i_0] [i_0]) + (298052497)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) min((min(((~(arr_13 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_3 + 1]))))))), (((/* implicit */unsigned int) arr_14 [i_4] [i_4 + 1] [i_4 + 3] [i_4] [i_4 - 4]))));
                                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)102)), (13022490014438375291ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
