/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4340
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
    var_19 = ((/* implicit */unsigned short) ((var_12) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4)))) ? ((+(var_15))) : ((-(((/* implicit */int) (signed char)-25)))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((8435305867641181025LL) ^ (((/* implicit */long long int) 3839374742U))))));
    var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((var_11) >= (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (signed char)29))))))), ((+((+(var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 9223372036854775807LL)))))), (((((/* implicit */int) (unsigned short)4)) >> (((((/* implicit */int) (unsigned char)181)) - (155)))))));
                    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (short)4325)))))), (((((/* implicit */_Bool) -2893769357878746077LL)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25816)))))));
                }
            } 
        } 
    } 
}
