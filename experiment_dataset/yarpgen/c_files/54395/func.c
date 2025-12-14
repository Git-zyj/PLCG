/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54395
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
    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((long long int) var_2)))) ? ((+((-(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))));
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)42828), (((/* implicit */unsigned short) var_7)))))));
    var_17 = ((/* implicit */signed char) max(((~(((/* implicit */int) ((unsigned short) var_0))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22691))))) ? (((/* implicit */int) (unsigned short)22707)) : (((/* implicit */int) max((var_2), (((/* implicit */short) (unsigned char)4)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((max((arr_6 [i_0] [i_1] [i_2]), (((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22707))))))), (((/* implicit */long long int) (unsigned char)9))));
                    var_19 |= ((/* implicit */_Bool) arr_0 [i_2] [i_1]);
                }
            } 
        } 
    } 
}
