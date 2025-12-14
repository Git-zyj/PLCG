/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240487
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((var_8), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(2047492115U)))))))));
    var_13 = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) max((max((var_0), (var_0))), (min((var_7), ((unsigned char)255))))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)175))))))), ((~(max((var_8), (var_8))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) (short)25370)))))));
                var_16 = ((/* implicit */unsigned long long int) (~(min(((~(((/* implicit */int) arr_4 [i_0])))), ((~(((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
