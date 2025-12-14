/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27027
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((unsigned char) ((signed char) max((var_5), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))));
                arr_7 [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 1])) >= (((/* implicit */int) arr_1 [i_1 - 1])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) max((var_12), (min(((signed char)-24), (max((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])))))));
                            arr_14 [i_0] [i_0] [(unsigned char)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_5 [i_3 - 1] [i_2] [i_1]))))))) ? (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) / (((((/* implicit */_Bool) (unsigned short)64858)) ? (((/* implicit */int) (short)-29899)) : (((/* implicit */int) (short)-4096)))))) : (((/* implicit */int) min((arr_5 [i_1 + 1] [i_2 + 1] [i_3 + 1]), (arr_5 [i_1 + 1] [i_2 + 1] [i_3 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8)) ? ((-((+(((/* implicit */int) var_8)))))) : (((/* implicit */int) var_7))));
}
