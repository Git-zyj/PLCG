/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237930
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)255)), (3731286786U)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (2841690448624417750ULL) : (((/* implicit */unsigned long long int) var_13))))))) ? (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_14)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                var_21 -= ((/* implicit */unsigned short) var_17);
                arr_6 [i_0] = ((/* implicit */unsigned short) ((27U) >> (((3731286786U) - (3731286784U)))));
                var_22 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) (short)127)) ? (16135156298263254110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))))));
            }
        } 
    } 
    var_23 *= var_1;
}
