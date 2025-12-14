/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203541
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
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (var_2)))) ? ((~(2863741420771268820LL))) : (((/* implicit */long long int) (~(623039019))))))) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 2297256691U)) : (-2944163883570423879LL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_3 [11] [i_1])) & (4294967281U)));
                    var_21 = ((/* implicit */_Bool) min((2293908362U), (((/* implicit */unsigned int) -328225417))));
                }
            } 
        } 
    } 
}
