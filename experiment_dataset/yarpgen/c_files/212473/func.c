/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212473
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551604ULL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_4 [i_0 + 1] [i_1] [i_0] [i_0]))) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-((+(((/* implicit */int) var_4))))))) : (((arr_4 [i_2] [i_2] [i_2 + 1] [i_0]) ? ((~(7441836916233395290LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1])))))));
                    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 1] [i_0]))));
                    var_22 = ((/* implicit */signed char) var_11);
                    arr_6 [i_0] [i_0 + 2] [4ULL] [i_0] = ((/* implicit */unsigned char) -5400605672538268707LL);
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */signed char) (_Bool)0);
}
