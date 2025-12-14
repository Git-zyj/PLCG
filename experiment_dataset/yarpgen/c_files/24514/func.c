/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24514
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
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */unsigned short) 1924040826);
    var_16 |= ((signed char) 5708533079715639850ULL);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) var_2)))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) == (((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))))))) : (1924040823)));
                    var_19 -= ((max((var_8), (((/* implicit */int) arr_3 [i_0 - 1])))) < (((/* implicit */int) min((arr_3 [i_0 - 2]), ((_Bool)1)))));
                }
            } 
        } 
    } 
}
