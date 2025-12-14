/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234818
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) arr_6 [(unsigned short)3] [i_0] [i_2]))));
                    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) * (max((arr_5 [i_0] [i_2]), (((/* implicit */long long int) var_4))))));
                    var_16 = ((/* implicit */unsigned char) 2097152);
                }
            } 
        } 
    } 
}
