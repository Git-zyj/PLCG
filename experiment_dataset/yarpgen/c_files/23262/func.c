/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23262
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_3 [(unsigned char)12] [(_Bool)1]))));
                    var_20 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (-(arr_6 [(_Bool)1] [(unsigned char)3] [i_2] [15])))), (((((/* implicit */_Bool) arr_6 [22] [(unsigned char)22] [(unsigned short)4] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
    var_22 &= var_18;
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) (((-(((/* implicit */int) var_0)))) >= (var_6)))) : (max((((/* implicit */int) ((unsigned short) (unsigned short)7016))), ((+(((/* implicit */int) var_8))))))));
}
