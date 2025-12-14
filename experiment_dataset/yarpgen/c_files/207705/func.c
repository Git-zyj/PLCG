/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207705
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
    var_10 += ((((/* implicit */int) (signed char)1)) - (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) (short)16093)) : (((/* implicit */int) (unsigned char)182)))));
    var_11 *= ((unsigned long long int) (!(((/* implicit */_Bool) max(((short)-16093), (((/* implicit */short) (unsigned char)74)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) + (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (signed char)-94))))));
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181))) : (-7LL)))));
                arr_4 [i_0 - 3] [i_0 - 3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)192))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-73)) || (((/* implicit */_Bool) (unsigned char)178))));
            }
        } 
    } 
}
