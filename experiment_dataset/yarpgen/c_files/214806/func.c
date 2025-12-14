/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214806
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
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((int) ((signed char) var_13)))));
    var_19 = ((/* implicit */int) (signed char)-68);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((unsigned short) (~((+(((/* implicit */int) (signed char)-68)))))));
                    arr_7 [i_0] [i_0] [i_1] [10] &= ((/* implicit */unsigned char) (~((-(arr_5 [i_0] [i_0] [(unsigned short)8] [i_0])))));
                }
            } 
        } 
    } 
}
