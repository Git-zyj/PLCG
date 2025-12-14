/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45824
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
    var_19 += ((((int) 2083130103)) <= (((/* implicit */int) ((signed char) min((var_0), (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [(short)24] &= ((/* implicit */unsigned int) 532782061);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) min((2083130103), (2083130101)))) - (arr_8 [i_0] [i_1] [i_1] [i_1]))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) - (arr_1 [i_0])))))));
                            arr_12 [i_0 - 2] [i_0] [i_3] [i_3] = 532782072;
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [(short)22]);
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_17);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_0);
    var_22 &= ((/* implicit */int) var_15);
    var_23 += ((/* implicit */unsigned short) (-((-(var_13)))));
}
