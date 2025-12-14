/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211498
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 += ((/* implicit */unsigned short) min((((/* implicit */int) max(((short)-19641), ((short)-19620)))), (max(((~(((/* implicit */int) (unsigned char)249)))), (((/* implicit */int) max(((signed char)-100), ((signed char)127))))))));
                var_11 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((max((((/* implicit */short) (unsigned char)182)), ((short)19651))), (min(((short)-19624), ((short)-19637)))))), (((unsigned short) -1708083316))));
            }
        } 
    } 
    var_12 -= ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) -1091636235)) ? (((/* implicit */int) (short)-19651)) : (1708083315)))));
}
