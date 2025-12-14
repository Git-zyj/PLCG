/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241754
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2147483633)))))))), (((((/* implicit */unsigned int) ((-1707422793) - (((/* implicit */int) (_Bool)1))))) + (24U)))));
    var_16 = (((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37))))))) >> (((((((/* implicit */int) (!(var_13)))) + (((/* implicit */int) var_3)))) + (348))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 24U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (144110790029344768LL))), (((/* implicit */long long int) var_14))))) ? (min((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_6)))))) : (((/* implicit */int) ((unsigned char) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) ((-1684524265552541692LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))), (((((/* implicit */_Bool) min(((unsigned short)4), (((/* implicit */unsigned short) var_3))))) ? ((~(144110790029344768LL))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-1))))))));
                    var_18 = ((/* implicit */unsigned int) ((min((min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))), (((/* implicit */unsigned long long int) ((_Bool) -2349748324229796028LL))))) < (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) -2147483630)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
}
