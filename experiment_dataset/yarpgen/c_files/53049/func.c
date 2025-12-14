/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53049
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
    var_10 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */int) (unsigned short)224))));
    var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_5)), (((min((var_9), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) min((510917220U), (((/* implicit */unsigned int) (_Bool)1)))))))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(2963687375U))))));
                    var_14 *= ((/* implicit */unsigned char) (+(var_0)));
                    arr_7 [i_1 + 2] [i_0] [i_2] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (510917220U)))))) - (max((510917220U), (((/* implicit */unsigned int) (signed char)-109))))));
                    arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0] [i_1 + 1])), (var_2))))));
                }
            } 
        } 
    } 
}
