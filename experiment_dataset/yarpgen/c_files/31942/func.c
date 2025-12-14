/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31942
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
    var_19 = ((/* implicit */unsigned int) (~(max((max((((/* implicit */long long int) var_6)), (var_13))), (((/* implicit */long long int) (+(((/* implicit */int) var_18)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((max(((-(-7347167585190276496LL))), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) (~((~(((/* implicit */int) (short)-14999)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-((-(var_15)))))), (((((/* implicit */_Bool) var_15)) ? (12698747560890158535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = (~(((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)14998))))) ? (((/* implicit */int) (short)-14998)) : (((/* implicit */int) max(((short)-15012), ((short)-15000)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) (+(-4177566048461821525LL)))) || (((/* implicit */_Bool) ((short) var_14))));
                    arr_14 [i_3] [i_3] [i_1] [i_1] |= ((/* implicit */short) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((long long int) 15871191603154010920ULL)) : (((/* implicit */long long int) ((int) (short)-14998)))))));
                }
            } 
        } 
    }
}
