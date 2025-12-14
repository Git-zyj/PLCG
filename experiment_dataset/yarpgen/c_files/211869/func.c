/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211869
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned short)65535))));
                    arr_10 [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)122))))) ? (((/* implicit */int) max((var_10), (((/* implicit */short) arr_6 [i_0 - 1] [i_0] [i_0 + 1]))))) : ((~(((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 + 2]))))));
                    var_17 = ((/* implicit */unsigned int) (unsigned short)2829);
                    var_18 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) min(((unsigned char)242), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (702506704) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_2])))))) : (((/* implicit */int) (unsigned char)44))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (140757356180297674LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((5672438504480605323LL) % (9223372036854775797LL)))))));
    var_20 -= ((/* implicit */long long int) (short)3560);
}
