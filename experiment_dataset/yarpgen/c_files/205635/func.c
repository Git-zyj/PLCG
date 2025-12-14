/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205635
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
    var_20 = ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_18)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                    var_22 += ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [(unsigned short)22])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)132))))) : ((+(var_16)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1454269681)) && (((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_19))))))))));
}
