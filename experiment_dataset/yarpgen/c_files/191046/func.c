/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191046
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
    var_12 = ((/* implicit */int) ((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_4))) ? (max((var_3), (((/* implicit */int) var_11)))) : (((/* implicit */int) var_9)))))));
    var_13 += ((/* implicit */_Bool) (~(((/* implicit */int) min((var_9), (((/* implicit */signed char) var_1)))))));
    var_14 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_3 [i_0] [i_0]))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((signed char)-69), ((signed char)68)))) & (((((/* implicit */_Bool) max(((unsigned short)64029), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_3])) : (-1664460087)))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_0 - 1] [i_0 - 1]))) != (arr_0 [i_0] [i_1 - 1]))) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_1 - 1] [(short)6])) : (((/* implicit */int) (signed char)-20)))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((/* implicit */unsigned short) (signed char)80);
                }
            } 
        } 
    } 
}
