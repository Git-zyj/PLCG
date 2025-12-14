/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4751
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
    var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)93)) ? (var_8) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_3 [i_0]), ((unsigned char)146)))))))));
                var_21 = ((/* implicit */unsigned short) (+(var_17)));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_19))))), (var_10)));
}
