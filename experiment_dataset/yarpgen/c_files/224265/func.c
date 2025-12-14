/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224265
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_16 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [(signed char)8] [(signed char)8] [i_3] [i_2 - 2] [(signed char)8] [(signed char)8] = max((((/* implicit */long long int) max((arr_9 [i_2 + 1] [i_2 + 1] [i_4 - 1] [i_4 + 2] [i_4 - 1]), (arr_9 [i_2 - 3] [i_2 - 1] [i_4 - 1] [i_4 + 1] [(_Bool)1])))), (((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) arr_3 [i_2 - 3] [(_Bool)1])) : (var_1))));
                                var_17 = (-(max((((/* implicit */int) arr_11 [i_2 - 3] [(signed char)5] [i_3] [i_3] [i_4 + 1])), (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]))));
                                var_18 = ((/* implicit */short) min((arr_5 [2] [2] [i_2 - 1]), (arr_5 [2] [2] [i_2 - 1])));
                                arr_13 [i_3] [i_1] [i_4 + 1] = ((/* implicit */long long int) arr_10 [i_3] [i_4 + 1] [i_3] [i_3] [4LL]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_16 [i_5] [22ULL] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_5] [i_1]);
                    arr_17 [i_0] [i_5] = arr_4 [i_1];
                    var_19 |= (-(((((/* implicit */_Bool) (~(var_3)))) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */short) (+((+(((/* implicit */int) var_5))))));
}
