/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207076
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
    var_20 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [(unsigned short)9] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)8] [(short)1] [i_3])))))));
                            var_21 = ((/* implicit */unsigned char) arr_7 [i_3] [i_2] [i_1] [10] [i_1] [i_0]);
                            arr_10 [i_0] [i_0] [i_1] [i_2] [1U] [i_3] = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) min((var_9), (((/* implicit */long long int) (_Bool)1))))))));
            }
        } 
    } 
}
