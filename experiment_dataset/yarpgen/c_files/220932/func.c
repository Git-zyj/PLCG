/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220932
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
    var_10 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (1735918493777120431ULL))))));
                    arr_8 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (var_6))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */short) max(((!((!(((/* implicit */_Bool) (short)-21920)))))), (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_12 [(short)2] [i_3] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                                var_13 = 16710825579932431177ULL;
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_1] [i_3]), (arr_0 [i_3] [i_2]))))) - (var_4)));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] [i_3];
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0]))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */short) ((unsigned long long int) var_9));
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) ((short) var_5)))), (var_3)));
}
