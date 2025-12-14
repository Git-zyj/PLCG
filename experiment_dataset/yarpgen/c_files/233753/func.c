/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233753
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
    var_15 = ((/* implicit */short) max(((-((-(((/* implicit */int) var_13)))))), (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_1 [i_1])) - (186))))) != (((/* implicit */int) var_7)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [3ULL] [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_1);
                                arr_14 [i_0] [(signed char)12] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_3])) < (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7))))))))) : (min((((/* implicit */unsigned long long int) arr_10 [i_4] [i_3] [i_2] [(unsigned char)12] [i_0])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (arr_3 [i_4] [i_1] [i_2])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [11])), (16552664400250659066ULL)))) ? (((/* implicit */int) min((arr_5 [i_1] [i_3] [(signed char)8]), (arr_5 [i_1] [i_2] [i_3])))) : ((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((2047U) <= (((/* implicit */unsigned int) min((min((((/* implicit */int) (unsigned short)57054)), (-1009084542))), (((/* implicit */int) (short)32761)))))));
}
