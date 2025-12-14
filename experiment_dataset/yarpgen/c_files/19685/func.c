/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19685
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
    var_20 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [5] [i_0] [i_0 + 2] = ((/* implicit */int) (-(((((/* implicit */_Bool) -679814464)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7018918087993305642LL)))));
                var_21 = ((/* implicit */unsigned short) (short)-11711);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((unsigned int) (_Bool)0)), (((/* implicit */unsigned int) var_11)))))));
                arr_7 [i_0] = max(((~(((/* implicit */int) ((-5594061158686700573LL) != (((/* implicit */long long int) arr_5 [i_0]))))))), ((+(((/* implicit */int) (signed char)0)))));
            }
        } 
    } 
}
