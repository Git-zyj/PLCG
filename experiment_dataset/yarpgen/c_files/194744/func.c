/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194744
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
    var_12 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_4))), ((!(((/* implicit */_Bool) var_7))))));
    var_13 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_7)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (3272670220U)))) : (var_10))) : (((((min((var_10), (((/* implicit */long long int) var_0)))) + (9223372036854775807LL))) << ((((+(var_7))) - (2887710189U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (-((+(var_10)))));
                var_14 -= ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_6))))) * (((((/* implicit */_Bool) var_7)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202)))))))));
                var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (unsigned short)60811)))) ? (var_5) : (((/* implicit */long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) % (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - ((-(4294967291U)))))));
}
