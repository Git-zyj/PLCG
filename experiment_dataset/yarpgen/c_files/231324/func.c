/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231324
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
    var_15 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [(unsigned char)2] [15LL] [i_1] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_2] [i_2])) || (((/* implicit */_Bool) arr_3 [i_0])))))) : (min((arr_11 [i_0] [(short)5] [3U] [i_2] [i_3] [i_2] [i_4]), (((/* implicit */long long int) 139365327U)))))));
                                arr_13 [i_4] [i_2] [i_2] [i_2] [i_0] = arr_7 [i_2];
                                arr_14 [i_0] [i_1] [i_4] |= ((/* implicit */unsigned char) arr_10 [i_4] [i_4] [i_2] [i_4] [i_0]);
                                arr_15 [i_2] [12] [i_2] [i_2] = ((/* implicit */int) ((_Bool) ((unsigned char) arr_6 [i_2] [i_3] [i_2] [i_2])));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) (short)8854)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((short) arr_3 [i_0]))), (((long long int) (signed char)-72)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) var_5);
}
