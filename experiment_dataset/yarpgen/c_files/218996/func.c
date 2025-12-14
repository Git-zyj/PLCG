/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218996
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0])) | (((/* implicit */int) arr_6 [i_1]))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_1] [i_2 - 4])) ^ (((/* implicit */int) ((unsigned char) arr_13 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 3]))))))));
                            var_11 += (+(var_9));
                            arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) ((((int) ((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_3]))))) << (((((((int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_1])) : (((/* implicit */int) var_5))))) + (33))) - (17)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */int) (unsigned char)69);
}
