/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207410
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
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) (unsigned short)24725)))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)115))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */long long int) var_4)) : (arr_0 [i_1 + 1]))) <= (((/* implicit */long long int) (+(((/* implicit */int) (!((_Bool)1))))))))))));
                }
            } 
        } 
    } 
    var_24 &= (~(var_16));
    var_25 = ((/* implicit */_Bool) var_13);
}
