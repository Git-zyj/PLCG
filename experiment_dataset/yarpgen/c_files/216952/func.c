/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216952
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
    var_18 |= ((/* implicit */unsigned char) var_4);
    var_19 += ((/* implicit */signed char) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */int) var_10)) - (((/* implicit */int) var_15))))))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_9 [(short)12] [i_0 + 2] [(short)12] [(short)12] [i_1]))) ^ ((-(((/* implicit */int) (unsigned char)61))))));
                                arr_12 [i_4 - 1] [i_1] [i_3] [(unsigned char)9] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_6 [i_4] [i_3] [i_1]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
    } 
}
