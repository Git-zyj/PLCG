/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241931
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
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)240);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)253)), (571841900)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) -571841918)))))) : (max((((/* implicit */unsigned long long int) -571841896)), (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_17)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((571841919) ^ (-571841877)))) && (((/* implicit */_Bool) -571841888)))))));
                var_20 = ((/* implicit */short) arr_3 [i_0 + 2] [i_0] [i_0 + 2]);
                var_21 = arr_2 [i_0] [14];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -571841877)) && (((/* implicit */_Bool) var_6)))))) < (((((/* implicit */unsigned long long int) 571841878)) & (var_11))))))));
    var_23 = var_4;
}
