/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247264
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
    var_11 = ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */unsigned long long int) var_10);
    var_13 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */int) arr_2 [i_0]);
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) - (((/* implicit */int) arr_6 [i_1] [(signed char)9] [i_1]))))));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((var_9) * (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (var_6)))), (arr_4 [i_0] [i_1] [i_0]))))));
                    var_14 = ((/* implicit */short) arr_5 [i_1] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
