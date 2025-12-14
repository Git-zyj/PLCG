/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40612
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
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] |= ((/* implicit */unsigned char) ((max((max((((/* implicit */int) (unsigned short)27592)), (-2147483643))), (((((/* implicit */int) (unsigned short)30332)) & (2147483643))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((2147483647) / (((/* implicit */int) (unsigned short)27592))))) == (((0ULL) ^ (18446744073709551615ULL))))))));
                    var_11 *= ((/* implicit */unsigned long long int) 274988700U);
                    var_12 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-93)) > ((((~(((/* implicit */int) (signed char)-72)))) ^ ((-(((/* implicit */int) (_Bool)1))))))));
                    var_13 *= (signed char)-1;
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)27592))))) / (var_6)))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_9))));
}
