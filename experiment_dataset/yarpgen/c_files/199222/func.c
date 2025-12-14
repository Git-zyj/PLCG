/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199222
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3602764814612042537LL)) ? (-838765993) : (((/* implicit */int) (short)-32417))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_16))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_10)) : (var_11)))))));
                    arr_8 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13174))) : (var_8))))) > (((/* implicit */unsigned long long int) ((((9223372036854775807LL) == (var_11))) ? (((/* implicit */long long int) (-(var_5)))) : (((3856929839580369544LL) - (((/* implicit */long long int) var_5)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */long long int) (_Bool)1)), ((-(-3856929839580369553LL))))) < ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (9223372036854775807LL)))))));
}
