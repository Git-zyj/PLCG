/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204549
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
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_11)) ? ((+(8226131459157129550ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned char)51))))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) -387710078319244623LL))));
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_2 - 1])), (9234866659524295643ULL)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)28098)) ? (9211877414185255973ULL) : (9211877414185255973ULL)))))) ? (((/* implicit */int) ((((var_0) ^ (((/* implicit */int) (short)18825)))) != ((~(var_0)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
    var_18 = ((/* implicit */unsigned int) var_10);
}
