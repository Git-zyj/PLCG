/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24400
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
    var_10 &= ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (short)-3478)))))))));
    var_11 *= var_5;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = arr_3 [i_0] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [(_Bool)1] = ((/* implicit */unsigned char) min(((-(arr_2 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_6 [i_0]))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [3ULL] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_0 + 1])) / (arr_9 [i_0] [i_2] [i_2 + 1] [i_4 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
