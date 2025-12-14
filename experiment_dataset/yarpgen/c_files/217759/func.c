/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217759
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
    var_14 = ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((4398046511103ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19)))))))))));
    var_15 = ((/* implicit */short) var_7);
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)-1712)) : (((/* implicit */int) ((signed char) var_8)))))) ? (((/* implicit */int) (unsigned short)17631)) : (((/* implicit */int) (unsigned char)207))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) var_13);
                arr_7 [i_0 - 1] [0U] [i_1] &= 794248044;
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (arr_6 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) : (((134217712ULL) >> (((((/* implicit */int) (unsigned char)203)) - (140)))))))));
            }
        } 
    } 
}
