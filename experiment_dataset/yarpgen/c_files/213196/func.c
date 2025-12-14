/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213196
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
    var_19 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) (+(arr_10 [(signed char)24] [i_2 - 2] [i_2 + 2])));
                                arr_18 [i_1] [i_1 - 1] [i_0] [i_1 - 1] [i_1] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                var_20 += ((/* implicit */_Bool) (unsigned char)184);
            }
        } 
    } 
}
