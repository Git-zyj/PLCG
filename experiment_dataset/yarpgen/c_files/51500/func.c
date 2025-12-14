/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51500
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))), (((/* implicit */int) ((unsigned short) (signed char)-84)))));
                    var_11 = ((/* implicit */signed char) ((unsigned char) arr_6 [i_2]));
                    arr_8 [(unsigned char)10] [(unsigned char)10] = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-84)))))))), (((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)49)), (var_3))) : (max((var_7), (((/* implicit */unsigned long long int) var_1))))))));
    var_13 = ((/* implicit */long long int) var_8);
}
