/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195154
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
    var_17 |= ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)176))));
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)0] [i_1] [(signed char)0] [i_1]))) : (var_2)))) ? (-155181748) : (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (short)23365)) : (((/* implicit */int) (unsigned char)2))))))) ? (((/* implicit */int) arr_5 [(signed char)8] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_2 [(signed char)10] [i_2]))));
                    var_21 = ((/* implicit */unsigned char) var_15);
                    var_22 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)27976))))));
                    var_23 = (short)7177;
                }
            } 
        } 
    } 
}
