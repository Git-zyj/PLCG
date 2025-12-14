/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19986
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
    var_11 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */short) (-((+(var_10)))));
    var_13 = ((/* implicit */long long int) (unsigned short)49153);
    var_14 &= (!(((/* implicit */_Bool) 120883214)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0] [0LL] = ((/* implicit */_Bool) (+(((/* implicit */int) max((var_0), ((_Bool)1))))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (_Bool)1)))))));
                var_17 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) max((-4170729351475545962LL), (9223372036854775807LL)))))), (((((/* implicit */_Bool) max((1204174846), (((/* implicit */int) (short)32752))))) || (((/* implicit */_Bool) (signed char)30))))));
            }
        } 
    } 
}
