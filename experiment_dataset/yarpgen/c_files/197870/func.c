/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197870
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
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_12)))))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_3))));
    var_20 -= ((/* implicit */unsigned short) 0);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 1572864LL)) ? (13479894067751234290ULL) : (((/* implicit */unsigned long long int) 8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)213))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned char) var_4);
                        var_23 = ((/* implicit */long long int) 8);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0 - 3] [i_3 + 1] [i_3]))) ? (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_3 - 1] [i_2]))) : (13292765247692249304ULL))) : (((((/* implicit */_Bool) 13292765247692249304ULL)) ? (13292765247692249304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                    }
                } 
            } 
        } 
        var_25 = var_12;
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((5153978826017302312ULL) >> (((arr_7 [i_4 - 4] [i_4 + 1]) - (7467397057239306609ULL)))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (signed char)-108))));
    }
    var_28 = ((/* implicit */_Bool) ((unsigned short) var_3));
}
