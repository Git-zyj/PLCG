/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242442
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) var_5)), (var_6)))))) ? (11453853209451496158ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 3003408566U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) : (var_3))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) >> ((((((_Bool)0) ? (((/* implicit */unsigned int) -1)) : (3477516059U))) - (3477516037U))))) : (((/* implicit */int) ((min((var_10), (4735111953171579211ULL))) < (((/* implicit */unsigned long long int) var_1)))))));
                            arr_11 [i_1] [i_1] = ((/* implicit */int) ((unsigned short) 2147483643));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (1528159384757714860ULL)))) ? (((long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) arr_1 [i_1] [13U])))) : (((int) var_2)))))));
                            var_14 = ((/* implicit */short) ((unsigned short) (_Bool)1));
                            var_15 &= ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) min((arr_7 [i_1] [i_1]), (((/* implicit */unsigned int) arr_1 [i_0] [i_3]))))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = (_Bool)1;
                var_16 = ((/* implicit */signed char) max((((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(arr_3 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_17 = var_11;
    var_18 ^= ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65529)))))));
}
